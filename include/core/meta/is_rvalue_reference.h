#ifndef _core_meta_is_rvalue_reference
#define _core_meta_is_rvalue_reference ::core_meta_is_rvalue_reference

template<typename A>
struct core_meta_is_rvalue_reference_;

template<typename A>
inline constexpr auto core_meta_is_rvalue_reference = core_meta_is_rvalue_reference_<A>::value;

#include <core/False.type.h>
#include <core/True.type.h>

template<typename A>
struct core_meta_is_rvalue_reference_ {
    static constexpr auto value = _core_False{};
};

template<typename A>
struct core_meta_is_rvalue_reference_<A &&> {
    static constexpr auto value = _core_True{};
};

#endif
