#include <stdio.h>

int fibonacci(int number){
	if (number == 1 || number == 0){
		return number;
	}
	else{
		return number + fibonacci(number-1);
	}
}

int main(){
	int number;
	printf ("Give a number: ");
	scanf ("%d", &number);
	printf ("%d \n", fibonacci(number));
	return 0;
}

