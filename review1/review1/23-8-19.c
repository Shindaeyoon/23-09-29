//#include <stdio.h> // BinaryFileCopy
//#pragma warning(disable:4996)
//
//int main(void) {
//	FILE* src = fopen("src.png", "rb");
//	FILE* des = fopen("des.png", "wb");
//	char buf[20];
//	int readCnt;
//
//	if (src == NULL || des == NULL) {
//		puts("���Ͽ��½���");
//		return -1;
//	}
//
//	while (1) {
//		readCnt = fread((void*)buf, 1, sizeof(buf), src);
//
//		if (readCnt < sizeof(buf)) {
//			if (feof(src) != 0) {
//				fwrite((void*)buf, 1, readCnt, des);
//				puts("���Ϻ��缺��");
//				break;
//			}
//			else
//				puts("���Ϻ������");
//
//			break;
//		}
//		fwrite((void*)buf, 1, sizeof(buf), des);
//	}
//	fclose(src);
//	fclose(des);
//	return 0;
//}
//
//
//#include <stdio.h> // p.522 ���� 1
//#pragma warning(disable:4996)
//
//int main(void) {
//	FILE* src = fopen("mystory.txt", "wt");
//	if (src == NULL) {
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//	fputs("#�̸�: ������ \n", src);
//	fputs("#�ֹι�ȣ: 900208-1012589 \n", src);
//	fputs("#��ȭ��ȣ: 010-1111-2222 \n", src);
//	fclose(src);
//	return 0;
//}
//
//
//#include <stdio.h> // p.522 ���� 2
//#pragma warning(disable:4996)
//
//int main(void) {
//	FILE* des = fopen("mystory.txt", "at");
//	if (des == NULL) {
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//	fputs("#��ܸԴ� ����: «��, ������ \n", des);
//	fputs("#���: �౸", des);
//	fclose(des);
//	return 0;
//
//}
//
//
//#include <stdio.h> // p.522 ���� 3
//#pragma warning(disable:4996)
//
//int main(void) {
//	char str[30];
//	FILE* read = fopen("mystory.txt", "rt");
//	if (read == NULL) {
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//	while (!feof(read)) {
//		fgets(str, sizeof(str), read);
//		printf("%s", str);
//	}
//	fclose(read);
//	return 0;
//}