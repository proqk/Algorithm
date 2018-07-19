#include <stdio.h>
#include <algorithm>
using namespace std;

int a[100], n, pivot, right, left;

void quicksort(int a[], int left, int right) {
	int l = left;
	int r = right;

	pivot = a[(left + right) / 2];
	/*���� �ǹ� Deterministic selection�̶�� ��
	���� �־��� O(n^2)�̰� ����� O(n)�ε� Deterministic�� �־��� O(n)��
	���� �������̳ĸ� �ϴ� �迭�� 5���� �ɰ�(���� ������ ���ĵǴ� ����. ����Ǿ���)
	�߸� p1, p2, p3, p4, p5���� �� �߰����� ����. 3��° ���� ��->�߰����� �߰���
	�׷��� �߰����� �߰������� ���ϸ� ������ 25%~75% Ȯ���� �¾ƶ�����
	��.. �� �𸣰����� ã�ƺ���
	*/
	if (left < right) {

	}

	while (left <= right) {
		while (a[left] < pivot) left++;
		while (a[right] > pivot) right--;
		//2, 9, 4, 18, 5, 1, 7, 8, 15, 12
		if (left <= right) {
			if (left != right) {
				swap(a[left], a[right]);
			}
			left++, right--;
		}
	}
	if (left < r) quicksort(a, left, r);
	if (l < right) quicksort(a, l, right);
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	quicksort(a, a[0], a[n - 1]);

	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}