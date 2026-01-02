#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(void)
{
  //initialize vars
  char *first=(char *)malloc(MAX*sizeof(char));
  char *last=(char *)malloc(MAX*sizeof(char));

  //prompt user to input first and last name and use scanf() to store those to the initiliazed vars
  printf("Enter your first name: ");
  scanf("%99s", first);
  printf("Enter your last name: ");
  scanf("%99s", last);

  //print the welcome message!
  printf("Hello %s %s!\n", first, last);

  free(first);
  free(last);
}
