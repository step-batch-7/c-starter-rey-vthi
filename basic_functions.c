#include <stdio.h>
#include <math.h>

unsigned char is_even(int num1);
unsigned char is_odd(int num1);
int square(int num1);
int cube(int num1);
int gcd(int num1,int num2);
int lcm(int num1,int num2);
float si(int principle,float interest,int time);
float ci(int principle,float interest,int time);

float ci(int p, float r, int t){
  return p * pow((1 + r/100), t) - p;
}

float si(int p,float r,int t){
  return p*t*r;
}

int lcm(int num1,int num2){
  return num1*num2/gcd(num1,num2);
}

int gcd(int num1, int num2){
  return num2!=0?gcd(num2,num1%num2):num1;
}

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
  int num2 = 3;
  int principle,time;
  float interest;
  printf("%d is %s\n",num1, is_even(num1)?"even":"not even");
  printf("%d is %s\n", num1, is_odd(num1)? "odd" : "not odd");
  printf("The square of %d is %d\n",num1,square(num1));
  printf("The cube of %d is %d\n",num1,cube(num1));
  printf("GCD of %d and %d is %d\n",num1,num2,gcd(num1,num2));
  printf("LCM of %d and %d is %d\n\n",num1,num2,lcm(num1,num2));

  printf("Enter the sum, rate of interest and time respectively to find SI and CI\n");
  scanf("%d %f %d",&principle,&interest,&time);
  printf("The SI is %f\n",si(principle,interest,time));
  printf("The CI is %f\n",ci(principle,interest,time));
}