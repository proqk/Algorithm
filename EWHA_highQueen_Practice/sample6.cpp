#include <stdio.h>
int n;

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n -i-1; j++) {
			printf(" ");
		}
		for (int j = 0; j < i *2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 2 * (n - i) - 1; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
}
