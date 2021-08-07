#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node st;
void insertAtBeg8inning(st *head,int val){
    st *newNode = (st*)malloc(sizeof(st));
    newNode->data = val;
    newNode->next = head->next;
    head->next = newNode;
}

void insertAfter(st *head,int key,int val){
    if(head->next == NULL){
        printf("Empty");
    }else{
        st *newNode = (st*)malloc(sizeof(st));
        newNode->data = val;
        st *ptr = head->next;
        while(ptr != NULL){
            if(key == ptr->data){
                break;
            }
            ptr = ptr->next;
        }
        newNode->next = ptr->next;
        ptr->next = newNode;
    }
}

void insertAtBeg8inningGivenKey(st *head,int key,int val){
    if(head->next == NULL){
        printf("Empty");
    }else{
        st *newNode = (st*)malloc(sizeof(st));
        newNode->data = val;
        st *ptr = head->next;
        st *prePtr;

        while(ptr != NULL){
            if(key == ptr->data){
                break;
            }
            prePtr = ptr;
            ptr = ptr->next;
        }
        prePtr->next = newNode;
        newNode->next = ptr;
    }
}

void insertEnd(st *head,int val){
    if(head->next == NULL){
        printf("Empty");
    }else{
        st *newNode = (st*)malloc(sizeof(st));
        newNode->data = val;
        newNode->next = NULL;
        st *ptr = head->next;

        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
}

void deleteNode(st *head,int key){
    if(head->next == NULL){
        printf("Empty");
    }else{
        st *ptr = head->next;
        st *prePtr;
        while(ptr != NULL){
            if(key == ptr->data){
                break;
            }
            prePtr = ptr;
            ptr = ptr->next;
        }
        prePtr->next = ptr->next;
        free(ptr);
    }
}

void display(st *head){
    st *ptr = head->next;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main(){
    st *head = (st*)malloc(sizeof(st));
    //st *head = NULL;
    head->next = NULL;
    insertAtBeg8inning(head,12);
    insertAtBeg8inning(head,89);
    insertAtBeg8inning(head,45);
    display(head);
    insertAfter(head,89,56);
    display(head);
    insertAtBeg8inningGivenKey(head,12,37);
    display(head);
    deleteNode(head,89);
    display(head);
    insertEnd(head,55);
    display(head);
}
