#include<stdio.h>
#include<stdlib.h>

struct stas {
    int points;
    int games;
};

struct stas players[5];

int count;

int main(void){
    for(count=0;count<5;count++){
        printf("Enter points for player %d: ", count + 1);
        scanf("%d", &players[count].points);
        printf("Enter games for player %d: ", count + 1);
        scanf("%d", &players[count].games);
    }

    printf("\n");

    for(count=0;count<5;count++){
        float avg = (float)players[count].points/(players[count].games);
        printf("Player %d's average points per game: %.2f\n", count + 1, avg);
    }
}