//#include <stdio.h>
//
//#define N 6
//#define INF 10000
//
//void matrixChain(int C[N][N],int D[N]) {
//	for (int L = 1; L < N-1; L++) { //부분문제
//		for (int i = 1; i < N-L; i++) {
//			int j = j + L;
//			C[i][j] = INF;
//
//			for (int k = i; k < j; k++) {
//				int temp = C[i][k] + C[k + 1][j] + D[i - 1] * D[k] * D[j];
//				if (temp < C[i][j]) {
//					C[i][j] = temp;
//				}
//			}
//		}
//	}
//}
//
//int main(void) {
//	
//	int C[N][N] = { 0 }; //초기화
//	int D[N] = { 10,20,5,15,30 };
//
//	matrixChain(C, D);
//
//	return 0;
//}