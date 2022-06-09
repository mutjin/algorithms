//#include <stdio.h>
//
//#define N 6
//
//void floyd(int graph[N][N]) {
//	for (int k = 1; k < N; k++) {
//		for (int i = 1; i < N; i++) {
//			for (int j = 1; j < N; j++) {
//				if (graph[i][k] + graph[k][j] < graph[i][j]) {
//					graph[i][j]=graph[i][k] + graph[k][j];
//				}
//			}
//		}
//	}
//}