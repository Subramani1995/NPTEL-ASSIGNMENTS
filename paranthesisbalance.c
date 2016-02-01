# NPTEL-ASSIGNMENTS

//count no of enclosures ()

#include<stdio.h>
#include<string.h>
int main()
{
  char a[1000]={0};
  int i,j,c1=0,c2=0,len=0,k;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    len++;
  }
  for(i=0;i<len;i++)
  {
    if((a[i]>=97)&&(a[i]<=122))
    {
      k=i;
      for(j=0;j<k;j++)
      {
        if(a[j]=='(')
        {
          c1++;
        }
        else if(a[j]==')')
        {
          c1--;
        }
      }
      
     printf("%d ",c1);
      c1=0;
    }
  }
  printf(" #");
  return 0;
}
  
