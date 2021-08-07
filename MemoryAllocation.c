#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    p = (int*)malloc(3*sizeof(int));
    for(int i=0;i<3;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<3;i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
    printf("\n");

    int *ptr;
    ptr = (int*)calloc(3,sizeof(int));

    for(int i=0;i<3;i++){
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    printf("\n");

    int *p1;
    p1 = (int*)realloc(ptr,5*sizeof(int));



}
