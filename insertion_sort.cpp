//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 8
//#define SWAP(x,y,t) (t=x,x=y,y=t)
//
//
//void insertionsort(int A[]) {
//    int currentelement;
//    printf("before sort: ");
//    for (int j = 0; j < N; j++) {
//        printf("%d ", A[j]);
//    }
//    printf("\n");
//
//    printf("insertion sorting...\n");
//
//    for (int i = 1; i <= N - 1; i++) {
//        currentelement = A[i]; //정렬안된부분 중 가장 오른쪽
//        int j = i - 1; //정렬된부분 중 가장 왼쪽
//
//        while (j >= 0 && A[j] > currentelement) {
//            A[j + 1] = A[j]; //정렬된부분을 한칸씩 오른쪽으로 이동시킨다
//            j--;
//        }
//
//        A[j + 1] = currentelement;
//
//        printf("pass %d: ", i + 1);
//        for (int j = 0; j < N; j++) {
//            printf("%d ", A[j]);
//        }
//        printf("\n");
//    }
//
//    printf("after sort: ");
//    for (int j = 0; j < N; j++) {
//        printf("%d ", A[j]);
//    }
//    printf("\n");
//}
//
//int main(void) {
//    int A[N] = { 40,10,50,90,20,80,30,60 };
//    insertionsort(A);
//
//    return 0;
//}