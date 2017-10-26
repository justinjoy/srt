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
#include "hcrypt-gnutls.h"

#if     __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ > 4)
#define GNUC_UNUSED                           \
  __attribute__((__unused__))
#else
#define GNUC_UNUSED
#endif

int
hcrypt_aes_set_encrypt_key (const uint8_t *key,
                            unsigned bits GNUC_UNUSED,
                            struct aes128_ctx *ctx)
{
  /* Assuming AES128 encryption, ignore the number of bits */
  aes128_set_encrypt_key (ctx, key);
  return 0;
}

int
hcrypt_aes_set_decrypt_key (const uint8_t *key,
                            unsigned bits GNUC_UNUSED,
                            struct aes128_ctx *ctx)
{
  /* Assuming AES128 decryption, ignore the number of bits */
  aes128_set_decrypt_key (ctx, key);
  return 0;
}
