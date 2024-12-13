
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main(){
 int rounds,counter,lucky_number,secret_num,rem,total,score;
 float div_ans;
 counter=1;
 rounds=0;
 lucky_number=0;
 rem=0;
 score=0;
 secret_num=0;
 srand(time(0));
 printf("How many rounds do you want to play?\n");
 scanf("%d",&rounds);
 while (counter<=rounds){
 printf("Input your lucky number for round %d:\n",counter);
 scanf("%d",&lucky_number);
 do{
 secret_num = rand()%100;
 }while (secret_num == 0);
 div_ans= (float)lucky_number/(float)secret_num;
 rem = lucky_number%secret_num;
 printf("Your lucky number is: %d and the computer generated secret number
is: %d \n",lucky_number,secret_num);
 if (rem == 0){
 score+= 1;
 printf("The division answer of the two is: %.2f \n",div_ans);
 printf("The remainder of the division is: %d\n",rem);
 printf("Round No.%d is a draw!! \n",counter);
 }
 else if(rem%2 == 0){
 score+=3;
 printf("The division answer of the two is: %.2f \n",div_ans);
 printf("The remainder of the division is: %d\n",rem);
 printf("Round No.%d is a Win!! \n",counter);
 }
 else{
 score-=3;
 printf("The division answer of the two is: %.2f \n",div_ans);
 printf("The remainder of the division is: %d\n",rem);
 printf("Round No.%d is a Loss!! \n",counter);
 }

printf("----------------------------------------------------------------------\n");
 counter++;
 }
 total=rounds*3;
 printf("Your score is %d/%d\n",score,total);
 if (score>0){
 printf("YOU WON THE GAME!!\n");
 }
 else{
 printf("YOU LOST THE GAME!!\n");
 }
}
