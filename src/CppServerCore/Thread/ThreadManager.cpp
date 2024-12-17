// CppServerCore/Thread/ThreadManager.cpp

#include <CppServerCore/Pch.hpp>
#include <CppServerCore/Thread/ThreadManager.hpp>

namespace CppServerCore::Thread
{
    /*---------------------*
     *    ThreadManager    *
     *---------------------*/

    ThreadManager::ThreadManager()
    {
        InitThreadLocalStorage();
    }

    ThreadManager::~ThreadManager()
    {
        JoinAll();
    }

    void ThreadManager::Launch(std::function<void()> callback)
    {
        auto lockGuard = std::lock_guard(_lock);

        _threads.emplace_back([callback]()
                              {
                                  InitThreadLocalStorage();
                                  callback();
                                  DestroyThreadLocalStorage();
                              });
    }

    void ThreadManager::JoinAll()
    {
        for (std::thread& t : _threads)
        {
            if (t.joinable())
            {
                t.join();
            }
        }

        _threads.clear();
    }

    void ThreadManager::InitThreadLocalStorage()
    {
        static std::atomic<uint32_t> s_threadId = static_cast<uint32_t>(ReservedThreadId::Main);
        Common::t_threadId = s_threadId.fetch_add(1);
    }

    void ThreadManager::DestroyThreadLocalStorage()
    {}
}
