//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define N 10
//#define D 3 //�ڸ���
//
//typedef struct {
//    int data[N];
//    int front;
//    int rear;
//}QueueType;
//
////ť�� �ʱ�ȭ
//void init(QueueType* q) {
//    q->front = 0;
//    q->rear = 0;
//}
//
////ť�� ������� Ȯ��
//int isEmpty(QueueType* q) {
//    return q->front == q->rear;
//}
//
////ť�� �� á���� Ȯ��
//int isFull(QueueType* q) {
//    return (q->rear + 1) % N == q->front;
//}
//
////����
//void enqueue(QueueType* q, int item) {
//    if (isFull(q)) {
//        printf("queue is full\n");
//    }
//    else {
//        q->rear = ((q->rear) + 1) % N;
//        q->data[q->rear] = item;
//    }
//}
//
////����
//int dequeue(QueueType* q) {
//    if (isEmpty(q)) {
//        printf("queue is empty\n");
//        return -1;
//    }
//    else {
//        q->front = ((q->front) + 1) % N;
//        return q->data[q->front];
//    }
//}
//
////�������
//void radixSort(int list[]) {
//
//    int factor = 1; //factor���ڸ�
//    int b, d, i;
//
//    QueueType q[N];
//
//    for (b = 0; b < N; b++) {
//        init(&q[b]);
//    }
//
//    //�ڸ���
//    for (d = 0; d < D; d++) {
//        for (i = 0; i < N; i++) {
//            enqueue(&q[(list[i] / factor) % 10], list[i]);
//        }
//
//        for (b = i = 0; b < N; b++) {
//            while (!isEmpty(&q[b])) {
//                //���ڸ�����
//                list[i++] = dequeue(&q[b]);
//            }
//        }
//
//        factor *= 10;
//    }
//}
//
//int main(void) {
//    int list[N];
//    srand(time(NULL));
//
//    for (int i = 0; i < N; i++) {
//        list[i] = rand() % 999 + 1;
//    }
//
//    for (int i = 0; i < N; i++) {
//        printf("%d ", list[i]);
//    }
//    printf("\n");
//
//    radixSort(list);
//
//    for (int i = 0; i < N; i++) {
//        printf("%d ", list[i]);
//    }
//}