#include <stdio.h>

void breakdown_currency(unsigned int);

void breakdown_currency(unsigned int amount)
{
  printf("%d x Rs.2000\n", amount / 2000);
  amount = amount % 2000;
  printf("%d x Rs.500\n", amount / 500);
  amount = amount % 500;
  printf("%d x Rs.200\n", amount / 200);
  amount = amount % 200;
  printf("%d x Rs.100\n", amount / 100);
  amount = amount % 100;
  printf("%d x Rs.50\n", amount / 50);
  amount = amount % 50;
  printf("%d x Rs.10\n", amount / 10);
  amount = amount % 10;
  printf("%d x Rs.5\n", amount / 5);
  amount = amount % 5;
  printf("%d x Rs.1\n", amount / 1);
}

int main(void)
{
  unsigned int amount;

  printf("Enter an amount to breakdown into denominations: ");
  scanf("%u",&amount);
  breakdown_currency(amount);
  
  return 0;
}