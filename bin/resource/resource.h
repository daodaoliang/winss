//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by version.rc
//
#ifndef BIN_RESOURCE_H_
#define BIN_RESOURCE_H_

#define VS_VERSION_INFO             1

// Next default values for new objects
//
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE    101
#define _APS_NEXT_COMMAND_VALUE     40001
#define _APS_NEXT_CONTROL_VALUE     1001
#define _APS_NEXT_SYMED_VALUE       101
#endif
#endif

#define STRINGIZE2(s)               #s
#define STRINGIZE(s)                STRINGIZE2(s)

#ifdef FIX_RC
#define RC_FIX(s)                   STRINGIZE2(s)
#else
#define RC_FIX(s)                   s
#endif

#ifndef VERSION_MAJOR
#define VERSION_MAJOR               1
#endif
#ifndef VERSION_MINOR
#define VERSION_MINOR               0
#endif
#ifndef VERSION_REVISION
#define VERSION_REVISION            0
#endif
#ifndef VERSION_BUILD
#define VERSION_BUILD               0
#endif
#ifndef YEAR
#define YEAR                        2017
#endif
#ifndef SUFFIX
#define SUFFIX                      ""
#endif

#define VER_COMPANY_NAME_STR        "winss"
#define VER_FILE_DESCRIPTION_STR    "Windows Supervision Suite"
#define VER_FILE_VERSION            VERSION_MAJOR, VERSION_MINOR, VERSION_REVISION, VERSION_BUILD
#define VER_FILE_VERSION_STR        STRINGIZE(VERSION_MAJOR)        \
                                    "." STRINGIZE(VERSION_MINOR)    \
                                    "." STRINGIZE(VERSION_REVISION) \
                                    "." STRINGIZE(VERSION_BUILD)

#define VER_PRODUCTNAME_STR         RC_FIX(PROJECT_NAME)
#define VER_ORIGINAL_FILENAME_STR   RC_FIX(PROJECT_NAME) RC_FIX(SUFFIX) ".exe"
#define VER_COPYRIGHT_STR           "Copyright (C) " STRINGIZE(YEAR) " " VER_COMPANY_NAME_STR

#ifndef _DEBUG
#define VER_DEBUG                   0x0L
#else
#define VER_DEBUG                   0x1L
#endif

#ifndef GIT_COMMIT
#define GIT_COMMIT                  ""
#endif
#ifndef GIT_COMMIT_SHORT
#define GIT_COMMIT_SHORT            ""
#endif

#endif  // BIN_RESOURCE_H_
