#include <stdio.h>
#include <vector>
using namespace std;

long long int n, m[10000000], p[10000000], res = 0;

int main() {
	scanf("%lld", &n);
	for (int i = 0; i < n - 1; i++) {
		scanf("%lld", &m[i]); //�Ÿ�
	}
	for (int i = 0; i < n; i++) {
		scanf("%lld", &p[i]); //����
	}

/*
2 3 1
5 2 4 1
*/
	int a = p[0];
	for (int i = 0; i < n; i++) {
		if (a > p[i]) {
			a = p[i];
		}
		res += m[i] * a;
	}

	printf("%lld", res);
}
//ó���� ������ ���, �ڱ⺸�� ���� ������ ������ ������ ���̸�ŭ�� ���Ḧ ���.