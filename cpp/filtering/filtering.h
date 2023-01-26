#pragma once

#include "common.h"
#include <stddef.h>

DLL_API void intensity_capping(Byte* array, size_t array_size, double n_std);
