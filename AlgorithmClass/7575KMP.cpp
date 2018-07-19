#include <stdio.h>
#include <algorithm>
using namespace std;

int n, k, m;
int pi[1001], num[1001];

int generate_pi(int num[], int pi[]) {
	int p = sizeof(num)/sizeof(int);
	//int�� 4����Ʈ * �迭 ���� / int�� 4����Ʈ = �迭 ����
	pi[0] = 0;
	int j; //�ε���

	for (int i = 1; i < p; i++) {
		while (j > 0 && num[i] != num[j]) {
			//���� ��ġ���� �����鼭 j�� 0�� �ƴ� ������(���� �ǹ�?)
			j = pi[j - 1];
		}

		if (num[i] == num[j]) {
			//��ġ�ϸ� j���� �ø�
			++j;
		}
		pi[i] = j;

	}
}

int kmp(int k, int num[]) {

}

int main() {
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		for (int j = 0; j < m; j++) {
			scanf("%d", &num);
		}
		generate_pi(num, pi);
		kmp(k, num);

	}
}