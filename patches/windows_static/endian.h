#ifndef ENDIAN_H
#define ENDIAN_H

/* Minimal endian definitions for Windows (assumed little endian) */
#define __LITTLE_ENDIAN 1234
#define __BIG_ENDIAN    4321
#define __PDP_ENDIAN    3412

#define __BYTE_ORDER __LITTLE_ENDIAN

#endif /* ENDIAN_H */
