#ifndef _core_file_status_user_id
#define _core_file_status_user_id ::core_file_status_user_id

#include <core/preprocessor/define_map.h>

_core_preprocessor_define_map(core_file_status_user_id, core_file_status_user_id_);

#include <core/base_object.h>
#include <core/file/Status.type.h>
#include <core/ieee/std/1003dot1/file/Status.type.h>
#include <core/ieee/std/1003dot1/file/status/user_id.h>

template<>
inline constexpr auto core_file_status_user_id_<
    _core_ieee_std_1003dot1_file_Status
> = _core_ieee_std_1003dot1_file_status_user_id;

template<>
inline constexpr auto core_file_status_user_id_<
    _core_file_Status
> = [] (
    auto & a
) constexpr -> decltype(auto) {
    return _core_file_status_user_id(_core_base_object(a));
};

#endif
