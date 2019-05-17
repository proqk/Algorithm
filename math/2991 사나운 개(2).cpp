#include <stdio.h>
int a, b, c, d, who;
bool attack(int who, int x, int y) {
	who %= (x+y);
	return who < x;
}
/*
p분 후에 사람이 도착한다면 p%(a+b)가 a(공격시간)보다 이후라면 공격받지 않는다
-> 출처가 블로그글임

설명은 내꺼임

2 3 2 3
2 3 6

여기서는 2+3=5, 5하나를 한 덩이로 보는 것임
%5를 하면 무조건 5개 숫자를 빙글빙글 돌잖아?
1 2 3 4 5 중에 1 2는 공격 받는 것이고 3 4 5는 공격을 안 받음
(6 이후는 어차피 1로 돌아가니까 신경 안 씀)
그 5개 중에서 공격시간인 2보다 크다? 그러면 무조건 3 4 5를 가리키는 것이고
공격을 안 받게 됨

주의 할 점은 사람 도착 시간을 -1해줘야 제대로 돌아간다는 점
나머지를 했을 때 딱 떨어지는 것부터가 시작인데(0 1 2 3 4)
who를 그대로 넘겨줘서 1부터 시작하는 상태면 딱 떨어지지가 않음(아마)
*/
int main() {
	scanf("%d%d%d%d", &a, &b, &c, &d);
	for (int i = 0; i < 3; i++) {
		scanf("%d", &who);
		printf("%d\n", attack(who-1, a, b)+attack(who-1, c, d));
	}
}
