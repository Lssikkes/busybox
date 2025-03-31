#ifndef BYTESWAP_H
#define BYTESWAP_H

static inline unsigned short bswap_16(unsigned short x) {
    return (x >> 8) | (x << 8);
}
static inline unsigned int bswap_32(unsigned int x) {
    return ((x & 0xFF) << 24) | ((x & 0xFF00) << 8) |
           ((x & 0xFF0000) >> 8) | ((x & 0xFF000000) >> 24);
}
static inline unsigned long long bswap_64(unsigned long long x) {
    return ((unsigned long long)bswap_32(x & 0xFFFFFFFFULL) << 32) |
           bswap_32(x >> 32);
}

#endif /* BYTESWAP_H */
