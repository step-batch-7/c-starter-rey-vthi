#include <stdio.h>

unsigned char is_even(int num);
unsigned char is_odd(int num);
int square(int num);

int square(int num){
  return num * num;
}

unsigned char is_odd(int num){
  return !is_even(num);
}

unsigned char is_even(int num){
  return num % 2 == 0;
}

int main(void)
{
  int num = 2;
  printf("%d is %s\n",num, is_even(num)?"even":"not even");
  printf("%d is %s\n", num, is_odd(num)? "odd" : "not odd");
  printf("The square of %d is %d\n",num,square(num));
}