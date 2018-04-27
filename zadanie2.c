#include <stdio.h>
#include <math.h>

int main(void) {
unsigned int a= 3;
unsigned int b= 14;
    int i,c,d;
    for (i=sizeof(a)*8-1; i>=0; --i)
    c=(a>>i)&1;
 
    for (i=sizeof(b)*8-1; i>=0; --i)
    d=(b>>i)&1;

	printf("~: %i\n and %i\n", ~c,~d);
	printf("\&: %i\n", c&d);
	printf("|: %i\n", c|d);
	printf("^: %i\n", c^d);
	return 0;
}