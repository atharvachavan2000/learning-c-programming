#include<stdio.h>
#define LOWER 0
#define UPPER 100
#define STEP 5

main() {
// TODO: Take these values from command-line arguements
	
	float cel, farh;
	printf("Celsius\tFarenheit\n");

	for(cel=LOWER; cel<=UPPER; cel += STEP) {
		farh = ((9.0/5.0) * cel) + 32;
		printf("%7.0f\t%8.1f\n", cel, farh);
	
	}

}
