//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 15
//#define SWAP(x,y,t) (t=x,x=y,y=t)
//
//
//void shellsort(int A[]) {
//    int currentelement;
//
//
//    printf("before sort: ");
//    for (int j = 0; j < N; j++) {
//        printf("%d ", A[j]);
//    }
//    printf("\n");
//
//
//    printf("shell sorting...\n");
//
//    //간격이 5 3 1 로 감소
//    for (int h = 5; h >= 1; h -= 2) {
//        for (int i = h; i <= N - 1; i++) {
//            currentelement = A[i];
//            int j = i;
//
//            while (j >= h && A[j - h] > currentelement) {
//                A[j] = A[j - h];
//                j -= h;
//            }
//            A[j] = currentelement;
//        }
//
//        printf("gap %d: ", h);
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
//    int A[N] = { 30,60,90,10,40,80,40,20,10,60,50,30,40,90,80 };
//    shellsort(A);
//
//    return 0;
//}