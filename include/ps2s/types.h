/*	  Copyright (C) 2000,2001,2002  Sony Computer Entertainment America

       	  This file is subject to the terms and conditions of the GNU Lesser
	  General Public License Version 2.1. See the file "COPYING" in the
	  main directory of this archive for more details.                             */

#ifndef ps2s_types_h
#define ps2s_types_h

#include <stdint.h>

#ifdef __cplusplus

// it doesn't really make sense to have a non-16-byte-aligned qword type...
typedef unsigned int uint128_t __attribute__((mode(TI), aligned(16)));
typedef int int128_t __attribute__((mode(TI), aligned(16)));

#endif // __cplusplus

#endif // ps2s_types_h
