#include <stdio.h>

unsigned long int factorial(int num);

unsigned long int factorial(int num){
  return (num == 1) ? 1 : num * factorial(num - 1);
}

int main(void)
{
  int num;
  printf("Enter a number to find factorial\n");
  scanf("%d", &num);
  printf("Factorial of %d is %lu\n",num,factorial(num));
}
