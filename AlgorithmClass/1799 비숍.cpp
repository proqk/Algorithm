//��Ʈ��ŷ
#include <stdio.h>
int n, board[11][11], res = 0, bishop[20]; //

int CanIput(int x, int y) {

}

void chess(int x, int y, int WhiteBlack) { //y�� for x ���
	if (WhiteBlack == 0) { //white
		if (x > n) {
			res++;
			if(WhiteBlack)
		}
		else {
			for (int i = 1; i <= n; i++) {
				bishop[i] = i;

				}
			}
		}
	}
	else { //black

	}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	chess(1, 1, 0); //whiteblack�� 0�̸� white, 1�̸� black
	printf("%d", res);
}



////�̺и�Ī
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//int n, board[11][11], res = 0;
//
//const int dx[2] = { -1,1 }; //�밢�� ����, ���� �Ʒ��� ������
//const int dy[2] = { 1,1 };  //������ �Ʒ��� ������
//
//void chess(int x) {
//
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &board[i][j]);
//		}
//	}
//
//	
//
//}
//
