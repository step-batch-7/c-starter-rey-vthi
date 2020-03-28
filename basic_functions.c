#include <stdio.h>

unsigned char is_even(int num);
unsigned char is_odd(int num);

unsigned char is_odd(int num){
  return !is_even(num);
}

unsigned char is_even(int num){
  return num % 2 == 0;
}

int main(void)
{
  int num = 2;
  printf("The number is %s\n",is_even(num)?"even":"not even");
  printf("The number is %s\n", is_odd(num)? "odd" : "not odd");
}