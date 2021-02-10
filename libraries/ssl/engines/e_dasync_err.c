/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2020 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include "e_dasync_err.h"

#ifndef OPENSSL_NO_ERR

static ERR_STRING_DATA DASYNC_str_reasons[] = {
    {ERR_PACK(0, 0, DASYNC_R_INIT_FAILED), "init failed"},
    {0, NULL}
};

#endif

static int lib_code = 0;
static int error_loaded = 0;

static int ERR_load_DASYNC_strings(void)
{
    if (lib_code == 0)
        lib_code = ERR_get_next_error_library();

    if (!error_loaded) {
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(lib_code, DASYNC_str_reasons);
#endif
        error_loaded = 1;
    }
    return 1;
}

static void ERR_unload_DASYNC_strings(void)
{
    if (error_loaded) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(lib_code, DASYNC_str_reasons);
#endif
        error_loaded = 0;
    }
}

static void ERR_DASYNC_error(int function, int reason, char *file, int line)
{
    if (lib_code == 0)
        lib_code = ERR_get_next_error_library();
    ERR_raise(lib_code, reason);
    ERR_set_debug(file, line, NULL);
}
