// CppServerCore/Common/Global.cpp

#include <CppServerCore/Pch.hpp>
#include <CppServerCore/Thread/ThreadManager.hpp>

namespace CppServerCore::Common
{
    std::unique_ptr<Thread::ThreadManager>      g_pThreadManager = std::make_unique<Thread::ThreadManager>();
}
