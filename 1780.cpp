#include <stdio.h>

int n, m[3000][3000], res[3];

void solve(int x, int y, int size) {
	int paper = m[y][x];
	int same = true;
	
	for (int i = y; (i < y + size) && same; i++) { //������ �Ʒ����� ������ ��Ӱ��� Ʋ���� ��������
		for (int j = x; (j < x + size) && same; j++) { //���ʺ��� �����ʱ���
			if (paper != m[i][j]) { //�迭�� x, y��° ��Ʈ�� �˻��� ���̶� �ٸ��� �Ʒ��� ���� 
				same = false; 
			}
		}
	}
	if (same) res[paper+1]++; //������ ������ ��
	else { //�ƴϸ� ����
		solve(x, y, size / 3); //���� ��
		solve(x + (size / 3), y, size / 3); //�߰� ��
		solve(x + (size / 3) * 2, y, size / 3); //������ ��

		solve(x, y + (size / 3), size / 3); //���� �߰�
		solve(x + (size / 3), y + (size / 3), size / 3); //�߰� �߰�
		solve(x + (size / 3) * 2, y + (size / 3), size / 3); //������ �߰�

		solve(x, y + (size / 3) * 2, size / 3); //���� �Ʒ�
		solve(x + (size / 3), y + (size / 3) * 2, size / 3); //�߰� �Ʒ�
		solve(x + (size / 3) * 2, y + (size / 3) * 2, size / 3); //������ �Ʒ�
	}
}


int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &m[i][j]);
		}
	}
	solve(0, 0, n);
	
	for (int i = 0; i < 3; i++) {
		printf("%d\n", res[i]);
	}
}