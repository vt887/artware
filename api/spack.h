#if defined(__WATCOMC__)
#pragma pack(__push, 1)

#elif defined(__GNUC__)
#pragma pack(push, 1)

#elif defined(__SLANG__)
#pragma pack(push, 1)   /* S-Lang compiler: enforce 1-byte alignment */

#endif
