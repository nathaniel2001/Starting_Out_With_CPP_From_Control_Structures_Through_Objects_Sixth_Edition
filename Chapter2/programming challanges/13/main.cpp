#include <stdio.h>
int main() {
	float upscale = 0.40;
	float board = 12.67;
	float total = upscale*board+board;
	printf("Total price: %f\n", total);
}
