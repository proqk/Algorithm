//#include <stdio.h>
//int idx = 0, arr[10];
//
//int full() {
//	if (idx == 10) return 1;
//	else return 0;
//}
//
//int empty() {
//	if (idx == 0) return 1;
//	else return 0;
//}
//
//void push(int a) {
//	if (arr[10] != NULL) printf("��á��");
//	else {
//		arr[idx] = a;
//		++idx;
//	}
//}
//
//void pop() {
//	if (!arr[0]) printf("pop�Ұ� ����");
//	else {
//		--idx;
//		printf("%d\n", arr[idx]);
//		arr[idx] = 0;
//	}
//}
//
//void peek() {
//	printf("�� ����� ����: %d\n", arr[idx]);
//}
//
//int main() {
//	push(1);
//	push(6);
//	push(40);
//	pop();
//	pop();
//	peek();
//	pop();
//}