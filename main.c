#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("Hello Sookmyung EE!\n\n");
	
	int x;
	printf("byte of int : %d\n", sizeof(x) );
	
	short y;
	printf("byte of short : %d\n", sizeof(y) );

	long z;
	printf("byte of long : %d\n", sizeof(z) );
	
	char a;
	printf("byte of char : %d\n", sizeof(a) );
	
	unsigned b;
	printf("byte of unsigned : %d\n", sizeof(b) );
	
	float c;
	printf("byte of float : %d\n", sizeof(c) );
	
	double d;
	printf("byte of double : %d\n", sizeof(d) );
	
	long double e;
	printf("byte of long double : %d\n", sizeof(e) );
	
	unsigned int f;
	printf("byte of unsigned int : %d\n", sizeof(f) );
	
	unsigned long g;
	printf("byte of unsigned long : %d\n", sizeof(g) );
	
	return 0;
}
