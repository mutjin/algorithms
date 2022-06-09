//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define N 100
//
//int getMin(int a, int b, int c) {
//	if (a < b) {
//		if (a < c) {
//			return a;
//		}
//		else {
//			return c;
//		}
//	}
//	else {
//		if (b < c) {
//			return b;
//		}
//		else {
//			return c;
//		}
//	}
//}
//
//int editDistance(char* S, char* T, int m, int n) {
//	int E[m + 1][n + 1];
//
//	//열 초기화 E[i][j]
//	for (int j = 0; j <= n; j++) {
//		E[0][j] = j;
//	}
//
//	//행 초기화 E[i][j]
//	for (int i = 0; i <= m; i++) {
//		E[i][0] = i;
//	}
//
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (S[i - 1] == T[i - 1]) {
//				E[i][j] = E[i - 1][j - 1];
//			}
//			else {
//				E[i][j] = getMin(E[i][j - 1], E[i - 1][j], E[i - 1][j - 1]) + 1;
//			}
//		}
//	}
//
//	for (int i = 0; i <= m; i++) {
//		for (int j = 0; j <= n; j++) {
//			printf("%d ", E[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main(void) {
//	char S[N] = "STRONG";
//	char T[N] = "STONE";
//
//	editDistance(S, T, strlen(S), strlen(T));
//}