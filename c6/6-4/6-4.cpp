
#include "stdafx.h"

int main() {
	int i, j;
	int num;
	scanf("%d", &num);
	int a[10] = { 240, 105, 98, 82, 66, 27, 18, 9, 1 };
	for (i = 0; i < 10; i++) {
		if (a[i] <= a[i + 1]) {
			if ((num >= a[i]) && (num < a[i + 1])) {
				for (j = 8; j >= i + 1; j--)
					a[j + 1] = a[j];
				a[i + 1] = num;break;
			}
		} else {
			if ((num <= a[i]) && (num > a[i + 1])) {
				for (j = 8; j >= i + 1; j--)
					a[j + 1] = a[j];
				a[i + 1] = num;break;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%5d\n", a[i]);
	return 0;
}

