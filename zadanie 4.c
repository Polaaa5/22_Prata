#include <stdio.h>
int bit_two(int num, int bit);

int main(void) {
    int number, bit;
    puts("Enter value: ");
    scanf("%d", &number);
    puts("Enter the bit position: ");
    scanf("%d", &bit);
    printf("%d\r\n", bit_two(number, bit));
    return 0;
}
int bit_two(int number, int bit) {
	
    int mask = 1;
    mask <<= bit;
    return(number & mask);
}