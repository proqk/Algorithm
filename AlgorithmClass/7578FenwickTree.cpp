#include <stdio.h>

//__int64

int n, a[5000001], b[5000001];
int tree[5000001]; //����Ʈ�� ����� �迭
int chk[5000001]; //�Ϸù�ȣ�� ���� 2��° �迭�� ������ ���� �̸� ����

int sum(int *tree, int i) { 
	//�ձ��ϱ�, 13�� �������� ��Ÿ���� 1101�̰� ���� ������ 1�� �����鼭 ���� ��
	int res = 0;
	while (i > 0) {
		res += tree[i];
		i -= (i & -i); //�� �ڿ� ������ 1�� ����
	}
	return res;
}

void update(int *tree, int i, int num, int size) {
	while (i <= size) {
		tree[i] += num;
		i += (i & -i); //�� �ڿ� ������ 1�� �츰 �װ��� �ڱ⸦ ����
		//�ʹ�� ~i�� i �����̰� -i�� ~i+1��
	}
}

int main() {
	long long int res = 0;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		chk[a[i]] = i; //a���� b�� ���� ���� �ִ� ���� ����
	}
	for (int i = 1; i <= n; i++) {
		scanf("%d", &b[i]);
		res += (long long)sum(tree, n) - (long long)sum(tree, chk[b[i]]);
		update(tree, chk[b[i]], 1, n); //�ڱ⺸�� ū ���� �տ��� �������� �ִ��� ���->tree�迭
	}
	printf("%lld", res);
}