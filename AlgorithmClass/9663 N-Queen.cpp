//#include <stdio.h>
//#include <stdlib.h>
//int n, queen[20][20]; 
//int res= 0;
//
//bool CanIGo(int x, int y) {
//	if (x == 0) return true; //ó���� ������ ����
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (queen[i][j] == true && (i == x || j == y || abs(i - x) == abs(j - y))) {
//				return false;
//			}
//		}
//	}
//
//	return true;
//}
//
//void board(int x) {
//	for (int y = 0; y < n; y++) {
//		if (CanIGo(x, y)) {
//			queen[x][y] = 1;
//			if (x == (n - 1)) { //������ �� ã����
//				res++;
//				queen[x][y] = false;
//			}
//			else {
//				board(x + 1);
//				queen[x][y] = false;
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d", &n);
//	queen[0][0] = 1;
//
//	board(0);
//	
//	printf("%d", res);
//
//}

#include <stdio.h>
#include <stdlib.h>

int n, queen[20], res = 0;

bool CanIGo(int y) {
	for (int i = 0; i < y; i++) { //�� ���ʿ� ����
		if (queen[y] == queen[i] || abs(queen[i] - queen[y]) == y - i) {
			return false;
		}
	}
	return true;
}

void board(int y) { //���ٿ� �ϳ����̶� ���� �ʿ����
	if (y == n - 1) {
		res++;
	}
	else {
		for (int i = 0; i < n; i++) {
			queen[y+1] = i; //�������� ������ �ȵ�
			if (CanIGo(y+1)) { //�����ֳ�?
				board(y +1); //���
			}
		}
	}
}

int main() {
	scanf("%d", &n);

	board(-1);

	printf("%d", res);
}