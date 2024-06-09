#include <stdio.h>

int main(){
    //All C Datatypes
    int shortIntegerSize = sizeof(short int);
    int unsignedShortIntegerSize = sizeof(unsigned short int);
    int unsignedIntegerSize = sizeof(unsigned int);
    int integerSize = sizeof(int);
    int longIntegerSize = sizeof(long int);
    int unsignedLongIntegerSize = sizeof(unsigned long int);
    int longLongIntegerSize = sizeof(long long int);
    int unsignedLongLongIntegerSize = sizeof(unsigned long long int);
    int unsignedChar = sizeof(unsigned char);
    int signedChar = sizeof(signed char);
    int charSize = sizeof(char);
    int floatSize = sizeof(float);
    int doubleSize = sizeof(double);
    int longDoubleSize = sizeof(long double);
    int voidSize = sizeof(void);
    int volatileSize = sizeof(volatile);
    int sizeTSize = sizeof(size_t);
    int int8TSize = sizeof(__int8_t);
    int int16TSize = sizeof(__int16_t);
    int int32TSize = sizeof(__int32_t);
    int int64TSize = sizeof(__int64_t);
    int int128TSize = sizeof(__int128_t);

    //All C Datatypes Print
    printf("Short Integer               -> %d bytes\n", shortIntegerSize);
    printf("Unsigned Short Integer      -> %d bytes\n", unsignedShortIntegerSize);
    printf("Unsigned Integer            -> %d bytes\n", unsignedIntegerSize);
    printf("Integer                     -> %d bytes\n", integerSize);
    printf("Long Integer                -> %d bytes\n", longIntegerSize);
    printf("Unsigned Long Integer       -> %d bytes\n", unsignedLongIntegerSize);
    printf("Long Long Integer           -> %d bytes\n", longLongIntegerSize);
    printf("Unsigned Long Long Integer  -> %d bytes\n", unsignedLongLongIntegerSize);
    printf("Unsigned Char               -> %d bytes\n", unsignedChar);
    printf("Signed Char                 -> %d bytes\n", signedChar);
    printf("Float                       -> %d bytes\n", floatSize);
    printf("Double                      -> %d bytes\n", doubleSize);
    printf("Long Double                 -> %d bytes\n", longDoubleSize);
    printf("Void                        -> %d bytes\n", voidSize);
    printf("Volatile                    -> %d bytes\n", volatileSize);
    printf("Size T                      -> %d bytes\n", sizeTSize);
    printf("Int 8 T                     -> %d bytes\n", int8TSize);
    printf("Int 16 T                    -> %d bytes\n", int16TSize);
    printf("Int 32 T                    -> %d bytes\n", int32TSize);
    printf("Int 64 T                    -> %d bytes\n", int64TSize);
    printf("Int 128 T                   -> %d bytes\n", int128TSize);
}