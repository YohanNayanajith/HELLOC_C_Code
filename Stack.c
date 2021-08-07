#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack[MAX],top = -1;
//isFull
//isEmpty
//push
//pop
//display
int isFull(){
    if(top == MAX-1){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}
void push(int value){
    if(isFull()){
        printf("Stack is full");
    }else{
        top++;
        stack[top] = value;
    }
}
void pop(){
    if(isEmpty()){
        printf("Stack is empty");
    }else{
        top--;
    }
}
void display(){
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int main(){
    push(22);
    push(78);
    push(98);
    push(2);
    display();
    pop();
    display();
}
