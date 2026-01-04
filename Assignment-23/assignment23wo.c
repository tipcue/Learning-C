#include<stdio.h>
#include<stdlib.h>

struct data{
    int integer;
};

int main(void){
    struct data *ptr;
    struct data text;
    ptr = &text;
    text.integer=5;
    printf("%d\n",text.integer);
    ptr->integer = 78;
    printf("%d\n",text.integer);
    (*ptr).integer=90;
    printf("%d\n",text.integer);
}