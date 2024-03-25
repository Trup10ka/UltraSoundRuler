#ifndef TYPE_H

/* This condition is needed for the compiler to know that any source code that includes this header, is a C code, thus adjusting the compilation process */
#ifdef __cplusplus
extern "C" {
#endif

typedef struct ParseType
{
    char name[10];
    float parseValue;
} ParseType;

#ifdef __cplusplus
}
#endif

#endif