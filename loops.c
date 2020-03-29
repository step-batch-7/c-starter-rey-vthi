#include <stdio.h>

unsigned long int factorial(int num);
int fibonacci(int count);
void odd_series(int limit);
void even_series(int limit);
void multiplication_table(int multiplicand, int limit);
long int summation(int start, int to);
long int product(int start, int end);

long int product(int start, int end){
  long int product = 1;
  for(int num = start; num <= end; num++) {
    product *= num;
  }
  return product;
}

long int summation(int start, int end){
  long int sum = 0;
  for(int num = start; num <= end; num++) {
    sum += num;
  }
  return sum;
}


void multiplication_table(int multiplicand, int limit){
  for(int multiplier = 1; multiplier <= limit; multiplier++)
  {
    printf("%d x %d = %d\n", multiplicand, multiplier, multiplicand * multiplier);
  }
}

void odd_series(int limit){
  printf("Odd numbers from 1 to %d are: \n",limit);
  for(int odd = 1; odd <= limit; odd += 2){
    printf("%d\n", odd);
  }
} 

void even_series(int limit)
{
  printf("Even numbers from 1 to %d are: \n",limit);
  for(int even = 2; even <= limit; even += 2){
    printf("%d\n", even);
  }
}

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
  int num,count,multiplicand,limit,start,end;
  printf("Enter a number to find factorial\n");
  scanf("%d", &num);
  printf("Factorial of %d is %lu\n",num,factorial(num));

  printf("Enter the count to print fibonacci series\n");
  scanf("%d", &count);
  fibonacci(count);

  printf("Enter a number to print odd numbers till that\n");
  scanf("%d", &num);
  odd_series(num);

  printf("Enter a number to print even numbers till that\n");
  scanf("%d", &num);
  even_series(num);

  printf("enter the multiplicand and max multiplier to print table till that\n");
  scanf("%d%d", &multiplicand, &limit);
  multiplication_table(multiplicand, limit);

  printf("Enter starting and ending number to find summation of those\n");
  scanf("%d %d", &start, &end);
  printf("summation is %ld\n",summation(start, end));

  printf("Enter starting and ending number to find product of those\n");
  scanf("%d %d", &start, &end);
  printf("summation is %ld\n",product(start, end));
  return 0;
}
