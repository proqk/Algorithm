#include <stdio.h>
#include <string.h>
//�������߶�..

char a[] = "ABCAABABCAABBCC";
char b[] = "BCAABB";
int chk = 0;
char *tmp;

int main() {
	tmp = strstr(a, b);
	int index = (int)(tmp - a + 1);
	printf("%d", index);
}