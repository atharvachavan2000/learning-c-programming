#include<stdio.h>

main() {
	int c, loop = 0;
	printf("End of File: %d", EOF);
	while( (c = getchar()) != EOF) {
		printf("Loop no. %d\n", loop);
		putchar(c);
		putchar('\n');
		loop++;
	}
}
