// CppServerCore/Common/Global.hpp

#pragma once

namespace CppServerCore::Thread
{
    class ThreadManager;
}

namespace CppServerCore::Common
{
    extern std::unique_ptr<Thread::ThreadManager>     g_pThreadManager;
}
