#include <stdio.h>
int main(){
    int dec_val = 10;
    int oct_val = 010;
    int hex_val = 0x10;

    printf("DEC_10: %d\n", dec_val);
    printf("OCT_10: %d\n", oct_val);
    printf("HEX_10: %d\n", hex_val);

    printf("INT_SUFFIX: %d %d %d %d\n", (int)sizeof(10), (int)sizeof(10u), (int)sizeof(10LL), (int)sizeof(10ULL));
    
    printf("FLOAT_SUFFIX: %d %d %d\n", (int)sizeof(0.1f), (int)sizeof(0.1), (int)sizeof(0.1L));

    printf("FLOAT_EQ %d\n", 0.1f == 0.1);

    char ch = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR-STR: %d %d %d\n", (int)sizeof('A'), (int)sizeof(ch), (int)sizeof("A"));

    return 0;
}