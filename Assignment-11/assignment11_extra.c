#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    double s[8]={0.0},n;
    int i;
    int count=0;
    for(i=0;i<8;i++){
        printf("input your score :");
        scanf("%lf",&n);
        s[i]=n;
        count++;
        printf("wheather continue input? (y/n) :");
        char c;
        while((getchar())!='\n');
        scanf("%c",&c);     
        if(c!='y'){
            break;
        }
    }
    double sum=0;
    for(i=0;i<count;i++){
        sum+=s[i];
    }
    if(count>0){
        double average=sum/count;
        printf("Average score is: %.2lf\n",average);
    }else{
        printf("No scores entered.\n");
    }
    return 0;
}