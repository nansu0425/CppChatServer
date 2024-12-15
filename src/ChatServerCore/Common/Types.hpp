// ChatServerCore/Common/CommonTypes.hpp

#pragma once

namespace ChatServerCore
{
	// Byte type
	using Byte		= std::byte;

	// Integer types
	using Int8		= __int8;
	using Int16		= __int16;
	using Int32		= __int32;
	using Int64		= __int64;
	using UInt8		= unsigned __int8;
	using UInt16	= unsigned __int16;
	using UInt32	= unsigned __int32;
	using UInt64	= unsigned __int64;

	// Size type
	using Size		= size_t;

	// Containers
	template<typename T, Size Sz>
	using Arr		= std::array<T, Sz>;
	template<typename T>
	using Vec		= std::vector<T>;
	template<typename K, typename V>
	using Map		= std::map<K, V>;
	template<typename K, typename V>
	using UMap		= std::unordered_map<K, V>;
	template<typename T>
	using Set		= std::set<T>;
	template<typename T>
	using USet		= std::unordered_set<T>;
}