//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 8
//#define SWAP(x,y,t) (t=x,x=y,y=t)
//
//
//void selectionsort(int A[]) {
//    int maxindex, temp;
//    printf("before sort: ");
//    for (int j = 0; j < N; j++) {
//        printf("%d ", A[j]);
//    }
//    printf("\n");
//
//    printf("selection sorting...\n");
//
//    for (int i = 0; i <= N - 2; i++) {
//        maxindex = 0;
//
//        for (int j = 0; j <= N - 1 - i; j++) {
//            if (A[j] > A[maxindex]) {
//                maxindex = j;
//            }
//        }
//        SWAP(A[N - 1 - i], A[maxindex], temp);
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