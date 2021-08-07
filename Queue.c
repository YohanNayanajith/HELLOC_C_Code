#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX],rear=-1,front=-1;
int isFull(){
    if(MAX-1 == rear){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(){
    if(rear == -1 && front==-1){
        return 1;
    }else{
        return 0;
    }
}
void enQueue(int value){
    if(isFull()){
        printf("Queue is full\n");
    }else{
        if(front == -1 && rear == -1){
            front++;
        }
        rear++;
        queue[rear] = value;
    }
}
void deQueue(){
    if(isEmpty()){
        printf("Queue is empty\n");
    }else{
        front++;
    }
}
void display(){
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main(){
    enQueue(12);
    enQueue(22);
    enQueue(34);
    enQueue(89);
    display();
    deQueue();
    display();
}
