#include <stdio.h>
int main()
{
 int hindi, english, maths;
 printf("enter your hindi marks :\n");
 scanf("%d",&hindi);
 printf("enter your english marks :\n");
 scanf("%d",&english);
 printf("enter your maths marks :\n");
 scanf("%d",&maths);
 printf("your all marks are : %d %d and %d \n",hindi,english,maths);
 printf("your total marks will be %d\n",hindi+english+maths);
 printf("your percentage is %d\n",(hindi+english+maths)/3);
 if(hindi<33 || english<33 || maths<33){
  printf ("you are failed becouse your indivisual marks are low");
 }
 else if ((hindi + english + maths)/3<40){
    printf("you are failed becous your percentage are low");
 }
 else {
    printf("you are passed!");
 }



    return 0;
}