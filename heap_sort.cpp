//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 100
//
//typedef struct {
//    int heap[N];
//    int heapSize;
//}HeapType;
//
////�� �ʱ�ȭ �Լ�
//void init(HeapType* H) {
//    H->heapSize = 0;
//}
//
////�� ���� �Լ�
//void upHeap(HeapType* H) {
//    int i = H->heapSize;
//    int key = H->heap[i];
//    //1. ��Ʈ��尡 �ƴϴ�
//    //2. �ڽĳ�� key > �θ��� key
//    while (i != 1 && key > H->heap[i / 2]) {
//        H->heap[i] = H->heap[i / 2];
//        i /= 2;
//    }
//    H->heap[i] = key;
//}
//
////�� ���� �Լ�
//void insertItem(HeapType* H, int key) {
//    //1�� �ε������� ���ʷ� ���Եȴ�
//    H->heapSize++;
//    H->heap[H->heapSize] = key;
//
//    //���Ե� ���� �θ� ������ ũ�⸦ ���Ѵ�
//    upHeap(H);
//}
//
//void downHeap(HeapType* H) {
//    int item = H->heap[1];
//    int parent = 1, child = 2;
//
//    //�ڽĳ�尡 ��ũ�⺸�� �۰ų� ���� ���
//    while (child <= H->heapSize) {
//        //����1: �ڽĳ�尡 ��ũ�⺸�� ���� ���: child�� ������尡 ����
//        //����2: �������(������)�� child(����)���� ū ���
//        if (child<H->heapSize & H->heap[child + 1]>H->heap[child]) {
//            child++; //child �ε����� �� ū �ڽ����� �ٲ۴�
//        }
//
//        //�� ������ �����ϴ� ���
//        if (item >= H->heap[child]) {
//            break;
//        }
//
//        //�� ������ �������� �ʴ� ���
//        else {
//            //�θ�� �ڽ��� ��ġ�� �ٲ۴�
//            H->heap[parent] = H->heap[child];
//            parent = child;
//            child *= 2;
//        }
//    }
//    H->heap[parent] = item;
//}
//
////������ �Լ� (���ڸ�����)
////������ ������ �� ����� 0�� �ǹǷ� printHeap ���δ� ��� �Ұ�
////���� heapSort �Լ� ���ο��� ����ؾ� �Ѵ�
//void heapSort(HeapType* H) {
//    int n = H->heapSize;
//
//    for (int i = 1; i <= n; i++) {
//        //��Ʈ���� ������ ����� ���� ��ȯ�Ѵ�
//        int item = H->heap[1];
//        H->heap[1] = H->heap[H->heapSize];
//        //N���� ��� ���ϱ� ������ �ε����� heapSize ����ؾ� �Ѵ�
//        H->heap[H->heapSize] = item;
//
//        H->heapSize--;
//
//        downHeap(H);
//
//        //���
//        printf("step %d: ", i);
//        for (int i = 1; i <= n; i++) {
//            printf("(%d)", H->heap[i]);
//        }
//        printf("\n");
//    }
//}
//
////�� ��� �Լ�
//void printHeap(HeapType* H) {
//    for (int i = 1; i <= H->heapSize; i++) {
//        printf("(%d)", H->heap[i]);
//    }
//}
//
//int main(void) {
//    HeapType H;
//    init(&H);
//
//    insertItem(&H, 90);
//    insertItem(&H, 60);
//    insertItem(&H, 80);
//    insertItem(&H, 50);
//    insertItem(&H, 30);
//    insertItem(&H, 70);
//    insertItem(&H, 10);
//    insertItem(&H, 20);
//    insertItem(&H, 40);
//
//    printHeap(&H);
//    //getchar();
//    printf("\n");
//
//    //insertItem(&H,80);
//    //printHeap(&H);
//    heapSort(&H);
//
//    return 0;
//
//}