#include <stdio.h>
#include <algorithm>
using namespace std;
int n, m, k, go = 0;
int main() {
	scanf("%d%d%d", &n, &m, &k);
	while (go != k) {
		if (m * 2 > n) { //남자가 더 많으면
			--m; //남자를 뺀다
			++go;
		}
		else { //9 5
			--n;
			++go;
		}
	}
	if (m * 2 < n) printf("%d", m);
	else printf("%d", n / 2);
}

/*
여6 남3 인턴쉽2
2 1, 2 1, 2 1로 안되면
1) 여자 두 명을 보내는 경우 여4 남3이 남고 2 1, 2 1 두 팀
2) 여자1 남자1을 보내는 경우 여5 남2가 남고 2 1, 2 1 두 팀 (최대)
3) 남자2를 보내는 경우 여6 남1이 남고 2 1 한 팀

6 3 2
5 3 go=1명 여자 1빠짐
5 6


여10 남7 인턴쉽3
5팀이 안 되니까
1) 여자3을 보내는 경우 여7 남7 3팀
2) 여자2 남자1을 보내는 경우 여8 남6 4팀
3) 여자1 남자2를 보내는 경우 여9 남5 4팀
4) 남자3을 보내는 경우 여10 남4 4팀

10 14
10 5(10 10) 남자 2명 뺐음 인턴 2명
9 5 여자 1뺌 인턴3명
끝
*/
