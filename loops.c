#include <stdio.h>

unsigned long int factorial(int num);
int fibonacci(int count);

int fibonacci(int count) {
  int first = 0, second = 1;
  printf("Fibonacci Series :\n");
  for(int index = 1; index <= count; index++) {
    printf("%d\n", first);
    int temp = second;
    second += first;
    first = temp;
  }
  return 0;
}

unsigned long int factorial(int num){
  return (num == 1) ? 1 : num * factorial(num - 1);
}

int main(void)
{
  int num,count;
  printf("Enter a number to find factorial\n");
  scanf("%d", &num);
  printf("Factorial of %d is %lu\n",num,factorial(num));

  printf("Enter the count to print fibonacci series\n");
  scanf("%d", &count);
  fibonacci(count);

  return 0;
}
