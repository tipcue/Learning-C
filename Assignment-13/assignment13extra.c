#include<stdio.h> 
#define GAME 4
#define GAMER 5

int main(){
    int score[GAME][GAMER];
    int person_score[GAMER]={0};
    for(int i=0;i<GAME;i++){
        printf("input five scores for game %d\n", i+1);
        for(int j=0;j<GAMER;j++){
            printf("Enter score of game %d for gamer %d: ", i+1, j+1);
            scanf("%d", &score[i][j]);
        }
    }
    for(int i=0;i<GAME;i++){
        for(int j=0;j<GAMER;j++){
            person_score[j] += score[i][j];
        }
    }
    int max_score = person_score[0];
    int winner = 1;
    for(int i=1;i<GAMER;i++){
        if(person_score[i]>max_score){
            max_score = person_score[i];
            winner = i+1;
        }
    }

    printf("Winner is Gamer %d with a highest average score of %.2lf\n", winner, max_score/5.0);

}