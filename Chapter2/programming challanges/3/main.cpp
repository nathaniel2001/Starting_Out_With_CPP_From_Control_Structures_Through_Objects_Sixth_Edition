#include <stdio.h>
int main() {
	double sales_tax = 0.04;
	double purchase = 52;
	double tax = purchase*sales_tax;
	double total = purchase+tax;
	printf("%f\n", total);
	return 0;
}
