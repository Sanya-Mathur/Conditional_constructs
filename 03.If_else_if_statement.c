#include <stdio.h>
main() 
{ 
  printf("RA2211042010042\n");
  int number;
  printf("Enter the value of number: ");
  scanf("%d",&number);
  if (number%2 == 0) 
  {
    printf("%d is divisible by 2 ",number);
  }
else if (number%3==0)
{
  printf("%d is divisible by 3",number);  
}
else
{
printf("%d is not divisible by 2 or 3 ",number);
} 
}
