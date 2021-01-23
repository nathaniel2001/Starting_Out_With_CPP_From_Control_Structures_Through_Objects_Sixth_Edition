#include <stdio.h>
int main() {
	double tax = 0.0675;
	double meal_charge = 44.50;
	double sales_tax = meal_charge*tax;
	double sub_total = meal_charge+sales_tax;
	double tip = sub_total*0.15;
	double total = sub_total+tip;
	printf("Meal cost: %f\nTax amount: %f\nTip amount: %f\nTotal: %f\n", meal_charge, sales_tax, tip, total);
	return 0;
}
