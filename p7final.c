#include <stdio.h>
typedef struct complex
{
  float real;
  float imaginary;
}complex;

complex input()
{
  complex a;
  printf("enter the real no.\n");
  scanf("%f",&a.real);
  printf("Enter the imaginary no.\n");
  scanf("%f",&a.imaginary);
  return a;
}

complex add(complex a,complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}

void output(complex a,complex b,complex sum)
{
  printf("sum is :\n%.1f+%.1fi + %.1f+%.1fi = %0.1f+%0.1fi",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}

int main()
{
  complex a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}
