#include <stdio.h>
int main() {
	float item1 = 12.95;
	float item2 = 24.95;
	float item3 = 06.95;
	float item4 = 14.95;
	float item5 = 03.95;
	float taxes = 00.06;
	float subTt = item1+item2+item3+item4+item5;
	float saleT = subTt*taxes;
	float total = saleT+subTt;
	printf("Item 1: %f\nItem 2: %f\nItem 3: %f\nItem 4: %f\nItem 5: %f\n", item1, item2, item3, item4, item5);
	printf("Sales Tax: %f\nTotal: %f\n", saleT, total);
	return 0;
}
