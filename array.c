#include <stdio.h>

void fibonacci(unsigned int *, int);

void fibonacci(unsigned int *array, int count){
  array[0] = 0;
  if(count == 1)
    return;
  array[1] = 1;
  if(count == 2)
    return;
  for (int index = 2; index < count; index++)
  {
    array[index] = array[index-1]+array[index-2];
  }
}

void print_list(unsigned int *array, int count){
for (int index = 0; index < count ; index++){
    printf("%d\n", array[index]);
  }
}

int main(void){
  int count;

  printf("Enter the number of elements you want in fibonacci\n");
  scanf("%d", &count);
  unsigned int a[count];
  fibonacci(a, count);
  print_list(a, count);
}