//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define N 10
//#define D 3 //자릿수
//
//typedef struct {
//    int data[N];
//    int front;
//    int rear;
//}QueueType;
//
////큐의 초기화
//void init(QueueType* q) {
//    q->front = 0;
//    q->rear = 0;
//}
//
////큐가 비었는지 확인
//int isEmpty(QueueType* q) {
//    return q->front == q->rear;
//}
//
////큐가 꽉 찼는지 확인
//int isFull(QueueType* q) {
//    return (q->rear + 1) % N == q->front;
//}
//
////삽입
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
////삭제
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
////기수정렬
//void radixSort(int list[]) {
//
//    int factor = 1; //factor의자리
//    int b, d, i;
//
//    QueueType q[N];
//
//    for (b = 0; b < N; b++) {
//        init(&q[b]);
//    }
//
//    //자릿수
//    for (d = 0; d < D; d++) {
//        for (i = 0; i < N; i++) {
//            enqueue(&q[(list[i] / factor) % 10], list[i]);
//        }
//
//        for (b = i = 0; b < N; b++) {
//            while (!isEmpty(&q[b])) {
//                //제자리정렬
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