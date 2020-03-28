#include <stdio.h>

unsigned char is_even(int num);

unsigned char is_even(int num){
  return num % 2 == 0;
}

int main(void)
{
  int num = 5;
  printf("The number is %s\n",is_even(num)?"even":"not even");
}