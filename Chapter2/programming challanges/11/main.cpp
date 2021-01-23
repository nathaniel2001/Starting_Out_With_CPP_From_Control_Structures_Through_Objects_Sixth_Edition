#include <stdio.h>
int main() {
	float tank = 20;
	float avgMPGrd = 21.5;
	float avgMPGhwy = 26.8;
	float distRd = tank*avgMPGrd;
	float distHwy = tank*avgMPGhwy;
	printf("Distance on road: %f\nDistance on High-way: %f\n", distRd,distHwy);
	return 0;
}
