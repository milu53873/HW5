#include <stdio.h>
#include <stdlib.h>

void cubByValue(int *nPtr);

int main(void) {
	int number = 5;
	printf("The original value of number is %d", number);

	cubByValue(&number);

	printf("\nThe new value of number is %d\n", number);



	return 0;
}
void cubByValue(int *nPtr) {
	*nPtr = *nPtr * *nPtr * *nPtr;

}