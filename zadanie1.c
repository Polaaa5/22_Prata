#include <stdio.h>
int main(void) { 
    char *pbin = "01001001";
    
    printf("%i\n" , twopbin(pbin));
    return 0;
}
int twopbin(char *pbin) {
    int n = 0;
    while(*pbin != '\0')
        n = (n << 1) + *pbin++ - '0';
    return n;
}