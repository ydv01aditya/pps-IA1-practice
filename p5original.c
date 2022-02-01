#include<stdio.h> 
float input() 
{ 
 printf("enter the number : \n"); 
 float k; 
 scanf("%f",&k); 
 return k; 
} 
float my_sqrt(float f) 
{ 
 float sqrt; 
 float a=f/2; 
 float a2=f; 
 while(a2!=a) 
 { 
 a2=a; 
 a=(a+(f/a))/2; 
 } 
 return a;
} 
void output(float n,float sqrt) 
{ 
 printf("square root of %f is %f\n",n,sqrt); 
} 
int main() 
{ 
 float sqrt,n; 
 n=input(); 
 sqrt=my_sqrt(n); 
 output(n,sqrt); 
 return 0; 
}