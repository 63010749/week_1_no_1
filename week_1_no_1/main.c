#include<stdio.h>

void pow(base, expo) {
	int i;
	double result = 1;
	for (i = 1; i <= expo; i++) {
		result = result * base;
	}
	printf("%.0lf", result);
}

int main() {
	int expo, base;
	printf("<<Exponential Program>>\n");
	scanf ("%d",&base);
	printf("power\n");
	scanf("%d", &expo);

	if (expo == 0) {
		printf("%d power %d = %d", base, expo, 1);
	}
	else {
		printf("%d^%d = ", base, expo);
		pow(base, expo);
	}

	return 0;
}