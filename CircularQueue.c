#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int cirQueue[MAX],rear=0,front=0,size=0;
void enQueue(int value){
    if(size == MAX){
        printf("Queue is full\n");
    }else{
        cirQueue[rear] = value;
        rear = (rear+1)%MAX;
        size++;
    }
}
void deQueue(){
    if(size == 0){
        printf("Queue is empty\n");
    }else{
        front = (front+1)%MAX;
        size--;
    }
}
void display(){
    int count = size;
    int f = front;
    while(count>0){
        printf("%d ",cirQueue[f]);
        f = (f+1)%MAX;
        count--;
    }
    printf("\n");
}

int main(){
    enQueue(18);
    enQueue(45);
    enQueue(90);
    enQueue(42);
    display();
    deQueue();
    display();
}
