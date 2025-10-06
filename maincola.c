#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int x;
	char ch;
	float f;
	ch=x=300;
	printf("x=%d ch%d\n", x, ch);
	x=ch=f=98.8999;
	printf("f=%.4f ch=%c x=%d\n", f, ch, x);
	return 0;
}
