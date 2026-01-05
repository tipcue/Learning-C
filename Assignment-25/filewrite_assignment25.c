#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main(void){
    int file1;

    file1 = open("file1.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if(file1 < 0){
        perror("Error opening file1.txt");
        return 1;
    }else{
        printf("file1.txt opened successfully.\n");
    }
    int writeon;
    writeon = write(file1, "Hello, github!\n", 15);
    if(writeon < 0){
        perror("Error writing to file1.txt");
        close(file1);
        return 1;
    }else{
        printf("Successfully wrote %d bytes to file1.txt\n", writeon);
    }   
    close(file1);
}