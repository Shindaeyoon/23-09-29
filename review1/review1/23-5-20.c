//#include <stdio.h> // NeedInputButFlush
//
//int man(void) {
//	char perID[7];
//	char name[10];
//
//	fputs("�ֹι�ȣ �� 6�ڸ� �Է� : ", stdout);
//	fgets(perID, sizeof(perID), stdin);
//
//	fputs("�̸� �Է� : ", stdout);
//	fgets(name, sizeof(name), stdin);
//
//	printf("�ֹι�ȣ : %s \n", perID);
//	printf("�̸� : %s \n", name);
//	return 0;
//}

//#include <stdio.h> // InputButFlush
//
//void ClearLineFromReadBuffer(void) {
//	while (getchar() != '\n');
//}
//
//int main(void) {
//	char perID[7];
//	char name[10];
//
//	fputs("�ֹι�ȣ �� 6�ڸ� �Է� : ", stdout);
//	fgets(perID, sizeof(perID), stdin);
//	ClearLineFromReadBuffer();
//
//	fputs("�̸� �Է� : ", stdout);
//	fgets(name, sizeof(name), stdin);
//
//	printf("�ֹι�ȣ : %s \n", perID);
//	printf("�̸� : %s \n", name);
//	return 0;
//}


//#include <stdio.h> // RemoveBSN
//#include <string.h>
//
//void RemoveBSN(char str[]) {
//	int len = strlen(str);
//	str[len - 1] = 0;
//}
//
//int main(void) {
//	char str[1000];
//	printf("���ڿ� �Է� :");
//	fgets(str, sizeof(str), stdin);
//	printf("���� : %d , ���� : %s \n", strlen(str), str);
//
//	RemoveBSN(str);
//	printf("���� : %d , ���� : %s \n", strlen(str), str);
//	return 0;
//}


//#include <stdio.h> // StringCopyCase
//#include <string.h>
//#pragma warning(disable:4996)
//
//int main(void) {
//	char str1[20] = "1234567890";
//	char str2[20];
//	char str3[5];
//
//	/** case 1 **/
//	strcpy(str2, str1);
//	puts(str2);
//
//	/** case 2 **/
//	strncpy(str3, str1, sizeof(str3));
//	puts(str3);
//
//	/** case 3  **/
//	strncpy(str3, str1, sizeof(str3) - 1);
//	str3[sizeof(str3) - 1] = 0;
//	puts(str3);
//	return 0;
//}


//#include <stdio.h> // StrinConcatCase
//#include <string.h>
//#pragma warning(disable : 4996)
//
//int main(void) {
//	char str1[20] = "First~";
//	char str2[20] = "Second";
//
//	char str3[50] = "Simaple Num : ";
//	char str4[20] = "1234567890";
//
//	/** case 1 **/
//	strcat(str1, str2);
//	puts(str1);
//
//	/** case 2 **/
//	strncat(str3, str4, 7);
//	puts(str3);
//	return 0;
//}


//#include <stdio.h> // StringCampCases
//#include <string.h>
//#pragma warning(disable:4996)
//
//int main(void) {
//	char str1[20];
//	char str2[20];
//
//	printf("���ڿ� �Է� 1: ");
//	scanf("%s", str1);
//	printf("���ڿ� �Է� 2: ");
//	scanf("%s", str2);
//
//	if (!strcmp(str1, str2))
//		puts("�� ���ڿ��� �Ϻ��� ��ġ�մϴ�.");
//	else {
//		puts("�� ���ڿ��� �Ϻ��� ��ġ���� �ʽ��ϴ�.");
//
//		if (!strncmp(str1, str2, 3))
//			puts("�׷��� �� �����ڴ� ��ġ�մϴ�.");
//	}
//	return 0;
//}


//#include <stdio.h> // ConvStrinToPrimitive
//#include <stdlib.h>
//#pragma warning(disable:4996)
//
//int main(void) {
//	char str[20];
//
//	printf("���� �Է� :");
//	scanf("%s", str);
//	printf("%d \n", atoi(str));
//
//	printf("�Ǽ� �Է� :");
//	scanf("%s", str);
//	printf("%g \n", atof(str));
//	return 0;
//}


//#include <stdio.h> // p.445 ����1
//#include <string.h>
//#pragma warning(disable:4996)
//int cnt = 0;
//
//void FilterNumber(char input[], int arr[]) {
//	int len = strlen(input);
//
//	for (int i = 0; i < len; i++) {
//		if (input[i] >= '0' && input[i] <= '9')
//			arr[cnt++] = input[i] - '0';
//	}
//}
//
//int main(void) {
//	char input[30];
//	int arr[30];
//	int num = 0;
//
//	scanf("%s", input);
//
//	FilterNumber(input, arr);
//
//	for (int i = 0; i < cnt; i++)
//		num += arr[i];
//	printf("%d", num);
//	return 0;
//}