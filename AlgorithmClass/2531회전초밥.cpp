#include <stdio.h>
#include <vector>
using namespace std;

int n, d, k, c;
int eat[3001]; //�������� �Դ� ����
vector<int> chobab;
int chk[30001]; //ť�� ���� ������ �� �̹� ���� �����ΰ�?
int  cnt = 1; //�� �� �Ծ���? �������� �̹� �ϳ��� �Ծ���
int index = 0;

int main() {
	int temp;
	scanf("%d%d%d%d", &n, &d, &k, &c);
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		chobab.push_back(temp);
		chk[temp] = 1;
	}
	for (int i = 0; i < n-1; i++) {
		chobab.push_back(chobab[i]);
	}
	chk[c] = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			eat[j] = chobab.front(); //k�� ��Ƶ�
			if (chobab.front() != chk[chobab.front()]) {
				eat[j]  
			}
			++index;
		}

		if (chobab[index] != c && chk[chobab[index]] != 1) { 
			//���� ������ �ʹ��� ������ �ִ°� �ƴϰ� �̹� �ִ°Ŷ� �ߺ��Ǵ°� �ƴϸ�
			eat[i] = 
		}
	}
}