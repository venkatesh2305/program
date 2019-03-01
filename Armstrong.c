#include<stdio.h>
#include<conio.h>
int main()
{
  int n,temp,r,sum=0;
  scanf("%d",&n);
  n=temp;
  while(n!=0);
  {
      r=n%10;
      sum=sum+r*r*r;
      n=n/10; 
  }
  if(sum==temp) 
  printf("yes"); 
  else
  printf("No"); 
  return 0; 
}  
  
  
    
  
