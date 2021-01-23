#include <stdio.h>
int main() {
	int customers = 12476;
	float surveyed = customers*0.14;
	float citrusP = surveyed*0.64;
	printf("%f customers purchase one or more energy drinks per week\n", surveyed);
	printf("%f prefer citrus flavored energy drinks\n", citrusP);
	return 0;
}
