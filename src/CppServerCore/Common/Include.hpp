﻿// CppServerCore/Common/Include.hpp

#pragma once

/*--------------------*
 *    C++ Standard    *
 *--------------------*/

// Multi-purpose
#include <cstdlib>

// Language support
#include <cstddef>

// Diagnostics
#include <cassert>

// Memory management
#include <memory>

// General utilities
#include <functional>

// Containers
#include <array>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

// Algorithms
#include <algorithm>

// Strings
#include <string>

// Time
#include <chrono>

// Input/output
#include <iostream>

// Concurrency support
#include <mutex>
#include <atomic>

/*---------------*
 *    Windows    *
 *---------------*/

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

/*------------------------*
 *    C++ Server Core    *
 *------------------------*/

// Common
#include <CppServerCore/Common/Macro.hpp>
#include <CppServerCore/Common/Global.hpp>
#include <CppServerCore/Common/ThreadLocalStorage.hpp>
