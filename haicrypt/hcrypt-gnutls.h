/*
 * SRT - Secure, Reliable, Transport
 * Copyright (c) 2017 Haivision Systems Inc.
 *     Author: Justin Kim <justin.kim@collabora.com>
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; If not, see <http://www.gnu.org/licenses/>
 */
#ifndef __HCRYPT_GNUTLS_H__
#define __HCRYPT_GNUTLS_H__

#include <gnutls/gnutls.h>
#include <gnutls/crypto.h>

#include <nettle/aes.h>
#include <nettle/pbkdf2.h>

typedef struct aes128_ctx AES_KEY;

#define hcrypt_pbkdf2_hmac_sha1(p,p_len,sa,sa_len,itr,out_len,out) \
   pbkdf2_hmac_sha1(p_len,p,itr,sa_len,sa,out_len,out)

#endif /* __HCRYPT_GNUTLS_H__ */

