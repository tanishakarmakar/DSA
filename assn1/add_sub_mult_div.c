#include<stdio.h>

float add(float n1, float n2);
float sub(float n1, float n2);
float mult(float n1, float n2);
float div(float n1, float n2);
float div0(float n1, float n2);

int main()
{
  float num1, num2;

  printf("Enter two numbers: ");
  scanf("%2f %2f", &num1, &num2);

  printf("%2f + %2f = %2f\n", num1, num2, add(num1, num2));
  printf("%2f - %2f = %2f\n", num1, num2, sub(num1, num2));
  printf("%2f * %2f = %2f\n", num1, num2, mult(num1, num2));
  printf("%2f / %2f = %2f\n", num1, num2, div(num1, num2));

  return 0;
}

float add(float n1, float n2)
{
  float ans;
  ans = n1 + n2;
  return ans;
}

float sub(float n1, float n2)
{
  float ans;
  ans = n1 - n2;
  return ans;
}

float mult(float n1, float n2)
{
  float ans;
  ans = n1 * n2;
  return ans;
}

float div(float n1, float n2)
{
  float ans;
  ans = n1 / n2;
  return ans;
}
