﻿// CppServerCore/Common/ThreadLocalStorage.cpp

#include <CppServerCore/Pch.hpp>

namespace CppServerCore::Common
{
    thread_local uint32_t       t_threadId = 0;
}
