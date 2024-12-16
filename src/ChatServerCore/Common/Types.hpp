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

	// Containers
	template<typename TData, size_t CSize>
	using Arr		= std::array<TData, CSize>;
	template<typename T>
	using Vec		= std::vector<T>;
	template<typename TKey, typename TVal>
	using Map		= std::map<TKey, TVal>;
	template<typename Tkey, typename TVal>
	using UMap		= std::unordered_map<Tkey, TVal>;
	template<typename T>
	using Set		= std::set<T>;
	template<typename T>
	using USet		= std::unordered_set<T>;
}