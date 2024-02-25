#include <stdio.h>

int main() {
	int age;
	
	printf("What's yout age?");
	scanf("%d", &age);
	
	(age >= 16) ? printf("You can drive") : printf("You cannot drive");
	return 0;
}
