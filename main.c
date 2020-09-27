#include <stdio.h>
 
int main(void) {
float score;
printf("Enter score=");
scanf("%f",&score);

switch((int)score/10){
  case 8:
  printf("A");
  break;

  case 7:
  if(score>=75 && score<80)
  printf("B+");
  else
  printf("B");
  break;

  case 6:
  if(score>=65 && score<70)
  printf("C+");
  else
  printf("C");
  break;

  case 5:
  if(score>=55 && score<60)
  printf("D+");
  else
  printf("D");
  break;

  default:
  if(score>=0 && score<50)
  printf("F");
}
 
return 0;
}