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
//		puts("파일오픈실패");
//		return -1;
//	}
//
//	while (1) {
//		readCnt = fread((void*)buf, 1, sizeof(buf), src);
//
//		if (readCnt < sizeof(buf)) {
//			if (feof(src) != 0) {
//				fwrite((void*)buf, 1, readCnt, des);
//				puts("파일복사성공");
//				break;
//			}
//			else
//				puts("파일복사실패");
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
//#include <stdio.h> // p.522 문제 1
//#pragma warning(disable:4996)
//
//int main(void) {
//	FILE* src = fopen("mystory.txt", "wt");
//	if (src == NULL) {
//		puts("파일오픈 실패");
//		return -1;
//	}
//	fputs("#이름: 윤성우 \n", src);
//	fputs("#주민번호: 900208-1012589 \n", src);
//	fputs("#전화번호: 010-1111-2222 \n", src);
//	fclose(src);
//	return 0;
//}
//
//
//#include <stdio.h> // p.522 문제 2
//#pragma warning(disable:4996)
//
//int main(void) {
//	FILE* des = fopen("mystory.txt", "at");
//	if (des == NULL) {
//		puts("파일오픈 실패");
//		return -1;
//	}
//	fputs("#즐겨먹는 음식: 짬뽕, 탕수육 \n", des);
//	fputs("#취미: 축구", des);
//	fclose(des);
//	return 0;
//
//}
//
//
//#include <stdio.h> // p.522 문제 3
//#pragma warning(disable:4996)
//
//int main(void) {
//	char str[30];
//	FILE* read = fopen("mystory.txt", "rt");
//	if (read == NULL) {
//		puts("파일오픈 실패");
//		return -1;
//	}
//	while (!feof(read)) {
//		fgets(str, sizeof(str), read);
//		printf("%s", str);
//	}
//	fclose(read);
//	return 0;
//}