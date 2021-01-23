#include <stdio.h>
int main() {
	double changePerYear = 1.5;
	double years = 5;
	double total = changePerYear*years;
	printf("The ocean level is now %fmm higher.\n.\n.\n.\n", total);
	years = 7;
	total = changePerYear*years;
	printf("The ocean level is now %fmm higher.\n.\n.\n.\n", total);
	years = 10;
	total = changePerYear*years;
	printf("The ocean level is now %fmm higher.\n.\n.\n.\n", total);
	return 0;
}
