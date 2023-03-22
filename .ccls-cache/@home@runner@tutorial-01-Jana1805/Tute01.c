
#include <stdio.h>

int main()
{
  float mark1, mark2, average;

  printf("Enter the marks of subject 1: ");
  scanf("%f", &mark1);

  printf("Enter the marks of subject 2: ");
  scanf("%f", &mark2);

  average = (mark1 + mark2) / 2.0;
  printf("The average of the two marks is: %f", average);

  return 0;
}
