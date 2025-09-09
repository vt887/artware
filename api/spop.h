#ifdef __WATCOMC__
#pragma pack(__pop)

#elif defined(__GNUC__)
#pragma pack(pop)

#elif defined(__SLANG__)
#pragma pack(pop)   /* S-Lang compiler: restore previous alignment */

#endif
