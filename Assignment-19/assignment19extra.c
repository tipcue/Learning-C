#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *ptr;
    ptr = malloc(15 * sizeof(char));
    if(ptr == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    } else {
        strcpy(ptr, "Hello, World!");
        printf("%s\n", ptr);
        free(ptr);
        return 0;
    }
}