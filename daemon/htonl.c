/* Copyright (C) 1993,97,2002 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/* Windows lacks htonl, htons, ntohl, ntohs.  It defines them in
 * header files, but doesn't have them in any library.  However
 * because it defined them we can end up with conflicting
 * definitions, which is why here we are careful to avoid
 * including any Windows header file.
 */

#include <config.h>

#include <stdint.h>
#include <sys/param.h>
#include <byteswap.h>

#ifndef HAVE_NTOHL

#undef	htonl
#undef	ntohl

uint32_t
htonl (x)
     uint32_t x;
{
#if defined(BYTE_ORDER) && defined(BIG_ENDIAN) && defined(LITTLE_ENDIAN)
#if BYTE_ORDER == BIG_ENDIAN
  return x;
#elif BYTE_ORDER == LITTLE_ENDIAN
  return bswap_32 (x);
#else
# error "What kind of system is this?"
#endif
#else
#error "BYTE_ORDER/BIG_ENDIAN/LITTLE_ENDIAN are not defined"
#endif
}

uint32_t ntohl (uint32_t x) { return htonl (x); }

#endif /* !HAVE_NTOHL */

#ifndef HAVE_NTOHS

#undef	htons
#undef	ntohs

uint16_t
htons (x)
     uint16_t x;
{
#if defined(BYTE_ORDER) && defined(BIG_ENDIAN) && defined(LITTLE_ENDIAN)
#if BYTE_ORDER == BIG_ENDIAN
  return x;
#elif BYTE_ORDER == LITTLE_ENDIAN
  return bswap_16 (x);
#else
# error "What kind of system is this?"
#endif
#else
#error "BYTE_ORDER/BIG_ENDIAN/LITTLE_ENDIAN are not defined"
#endif
}

uint16_t ntohs (uint16_t x) { return htons (x); }

#endif /* !HAVE_NTOHS */