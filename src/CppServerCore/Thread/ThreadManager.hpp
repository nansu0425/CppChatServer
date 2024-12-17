// CppServerCore/Thread/ThreadManager.hpp

#pragma once

namespace CppServerCore::Thread
{
    /*---------------------*
     *    ThreadManager    *
     *---------------------*/

    class ThreadManager
    {
    private:
        using           Mutex = std::mutex;
        using           VecThread = std::vector<std::thread>;

        enum class ReservedThreadId : uint32_t
        {
            Main = 1
        };

    public:
                        ThreadManager();
                        ~ThreadManager();

        void            Launch(std::function<void()> callback);
        void            JoinAll();

    private:
        static void     InitThreadLocalStorage();
        static void     DestroyThreadLocalStorage();

    private:
        Mutex           _lock;
        VecThread       _threads;
    };
}
