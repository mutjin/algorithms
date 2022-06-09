//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 8
//#define SWAP(x,y,t) (t=x,x=y,y=t)
//
//
//void selectionsort(int A[]) {
//    int minindex, temp;
//    printf("before sort: ");
//    for (int j = 0; j < N; j++) {
//        printf("%d ", A[j]);
//    }
//    printf("\n");
//
//    printf("selection sorting...\n");
//
//    for (int i = 0; i <= N - 2; i++) {
//        minindex = i;
//
//        for (int j = i + 1; j <= N - 1; j++) {
//            if (A[j] < A[minindex]) {
//                SWAP(A[j], A[minindex], temp);
//            }
//        }
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
//    selectionsort(A);
//
//    return 0;
//}