// This file automatically generated by build-tools/buildConfigHeader.cmake

#ifndef __MB_CONFIG_H_
#define __MB_CONFIG_H_

// Bytes are swapped (little-endian)?
#define BYTESWAPPED

// Build with GSF?
#undef ENABLE_GSF

// Machine is bigendian, (Byteswapping off)?
#define ENDIAN_BIG 0

// Have <malloc.h>?
#define HAVE_MALLOC_H

// Have <rpc/rpc.h>?
#define HAVE_RPC_RPC_H

// Have <stdint.h>?
#define HAVE_STDINT_H

#define MBSYSTEM_CONFIG_DEFINED

// Installation prefix
#define MBSYSTEM_INSTALL_PREFIX "/usr/local"

// Package version
#define PACKAGE_VERSION "5.7.9beta26-123-gf5db30465"

// Redundant to PACKAGE_VERSION?
#define VERSION "5.7.9beta26-123-gf5db30465"

// Package version date
#define VERSION_DATE "2022-06-10"

// Define full package name 
#define PACKAGE "mbsystem"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://listserver.mbari.org/sympa/arc/mbsystem"

/* Define to the full name of this package. */
#define PACKAGE_NAME "mbsystem"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "mbsystem 5.7.9beta42"

// Define package short name
#define PACKAGE_TARNAME "mbsystem"


/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.mbari.org/data/mbsystem/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "5.7.9beta42"

/* Build tools using PCL */
/* #undef PCLTOOLS_ENABLED */

/* Build tools using Qt5 */
/* #undef QTTOOLS_ENABLED */

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Building unit tests */
#define TEST_ENABLED 1

/* Version number of package */
#define VERSION "5.7.9beta42"

/* Set VERSION_DATE define in mb_config.h */
#define VERSION_DATE "26 June 2022"

/* 0 */
/* #undef WITH_DEBUG */

// Package homepage
#define PACKAGE_URL "http://www.mbari.org/data/mbsystem/"

// Build libmbtrn and mbtrnpp?
#undef MBTRN_ENABLED

#endif    // MB_CONFIG_H_
