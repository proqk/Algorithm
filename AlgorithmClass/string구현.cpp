//#include <stdio.h>
//char arr[20], arr2[20];
//char from, to, chr;
//int length = 0;
//
//int strlen(char *str) {
//	int i = 0;
//	for (int i = 0; i < 20; i++) {
//		if (arr[i] == NULL) {
//			return length;
//		}
//		else length++;
//	}
//}
//
//void strcpy(char *from, char *to) {
//	for (int i = 0; i < length; i++) {
//		if (arr[i] == *from) {
//			for (int j = arr[i]; j == *to; j++) {
//				printf("%c" ,arr[j]);
//			}
//		}
//	}
//}
//
//void strcmp(char *str1, char *str2) {
//	int chk = 0;
//	for (int i = 0; i < length; i++) {
//		if (arr[i] != arr2[i]) {
//			printf("���ڿ��� �ٸ�");
//			break;
//		}
//		else chk++;
//	}
//	if (chk == length) {
//		printf("���ڿ��� ����");
//	}
//}
//
//void strchr(char *str, char chr) {
//	for (int i = 0; i < length; i++) {
//		if (str[i] == chr) {
//			printf("%d��°���� ����", i);
//			break;
//		}
//	}
//}
//
//int main() {
//	scanf("%s", arr);
//	printf("���ڿ��� ���� ���ϱ�: %d\n", strlen(arr));
//
//	printf("from���� to�� ���ڿ� ��ü ����: ");
//	scanf("%c%c", from, to);
//	strcpy(*from, to);
//
//	printf("str1�� str2�� �Ϻ��� ���� ���ڿ����� �˻�");
//	scanf("%s", arr2);
//	strcmp(arr, arr2);
//
//	printf("str�ȿ� chr�� ���°���� �����ϴ��� ��ġ ��ȯ");
//	scanf("s", chr);
//	strchr(arr, chr);
//}