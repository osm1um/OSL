#ifndef _OSL_ASSERT_HPP
#define _OSL_ASSERT_HPP

#include <defines.hpp>
#include <inttypes.hpp>

OSL_BEGIN_NAMESPACE

void assert_failed(const char *file, u64 line, const char* message);

OSL_END_NAMESPACE

#endif
