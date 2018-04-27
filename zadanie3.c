#include <stdio.h>
int bit(int number);
int main() {
    int num, c;
    puts("Your number:");
    
    while(scanf("%d", &num) == 1) {
        c = bit(num);
        printf("%d bits\r\n", c);
        puts("Enter another number:");
    }
    return 0;
    
}
int bit(int number) {
    int mask = 1;
    int c = 0;
    while(number > 0) {
        c += number & mask;
        number >>= 1;
    }
    return c;
    
}