#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//type 01
struct student{
    char name[20];
    int age;
}s1;
typedef struct{
    char name[20];
    int age;
}student2;

struct Student3{
    int maths;
    int science;
}e1[3];

struct Student4{
    int maths;
    int science;
}*e2;


int main(){
//    s1.name = "Yohan";
    strcpy(s1.name,"Yohan");
    s1.age = 22;
    printf("Student name:%s\n",s1.name);
    printf("Student age:%d\n",s1.age);

    student2 s2;
    s2.age = 22;
    printf("Student age:%d\n",s2.age);

    e1[0].maths = 95;
    e1[0].science = 86;
    e1[1].maths = 56;
    e1[1].science = 45;

    printf("Maths marks : %d\n",e1[0].maths);
    printf("Average Maths marks : %d\n",(e1[0].maths+e1[1].maths)/2);

    e2 = (struct Student4*)malloc(2*sizeof(struct Student4));
    (e2+0)->maths = 45;
    (e2+0)->science = 87;
    (e2+1)->maths = 52;
    (e2+1)->science = 100;

    printf("Maths marks : %d\n",(e2+0)->maths);
    printf("Science marks : %d\n",(e2+0)->science);
    printf("Maths marks 1: %d\n",(e2+1)->maths);
    printf("Science marks 1: %d\n",(e2+1)->science);
}

