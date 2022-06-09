//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 8
//#define SWAP(x,y,t) (t=x,x=y,y=t)
//#define FALSE 0
//#define TRUE 1
//
//void bubblesort(int A[]) {
//    int temp;
//    printf("before sort: ");
//    for (int j = 0; j < N; j++) {
//        printf("%d ", A[j]);
//    }
//    printf("\n");
//
//    printf("bubble sorting...\n");
//
//    for (int pass = 1; pass <= N - 1; pass++) {
//        int flag = FALSE;
//
//        for (int i = 1; i <= N - pass; i++) {
//            if (A[i - 1] > A[i]) {
//                SWAP(A[i - 1], A[i], temp);
//                flag = TRUE;
//            }
//        }
//
//        if (flag == FALSE) {
//            break;
//        }
//
//        printf("pass %d: ", pass);
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
//    bubblesort(A);
//
//    return 0;
//}