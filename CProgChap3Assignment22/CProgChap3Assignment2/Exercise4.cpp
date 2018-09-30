#include <stdio.h>

void function(void);

int main(void) {
	printf("Enter a floating-point value:");
	function();
	getchar(); 
	return 0;
}

void function() {
	float num;
	scanf("%f", &num);
	printf("fixed-point notation: %.6f \n",num);
	printf("exponential notation: %e \n",num);
	printf("p notation: %a \n",num);
	getchar();

}
