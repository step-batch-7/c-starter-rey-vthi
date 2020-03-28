#include <stdio.h>

unsigned char is_even(int num1);
unsigned char is_odd(int num1);
int square(int num1);
int cube(int num1);

int cube(int num1){
  return square(num1)*num1;
}

int square(int num1){
  return num1 * num1;
}

unsigned char is_odd(int num1){
  return !is_even(num1);
}

unsigned char is_even(int num1){
  return num1 % 2 == 0;
}

int main(void)
{
  int num1 = 2;
  printf("%d is %s\n",num1, is_even(num1)?"even":"not even");
  printf("%d is %s\n", num1, is_odd(num1)? "odd" : "not odd");
  printf("The square of %d is %d\n",num1,square(num1));
  printf("The cube of %d is %d\n",num1,cube(num1));

}