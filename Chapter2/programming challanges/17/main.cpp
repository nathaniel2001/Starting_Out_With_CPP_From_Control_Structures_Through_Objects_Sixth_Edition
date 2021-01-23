#include <stdio.h>
int main() {
	float shares = 600;
	float stockP = 21.77;
	float amountPaid = shares*stockP;
	float commission = 0.02*amountPaid;
	float totalPaid = commission+amountPaid;
	printf("Price paid for stock: %f\nCommission paid: %f\nTotal paid: %f\n", amountPaid, commission, totalPaid);
	return 0;
}
