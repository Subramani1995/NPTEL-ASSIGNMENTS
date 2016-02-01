# NPTEL-ASSIGNMENTS

//program to check whether given 2 strings are permutations to each other

#include<stdio.h>
#include<string.h>
int main()
{
  char a[101],b[101];
  scanf("%s%s",a,b);
  int i,j,len1=0,len2=0,c=9;
  for(i=0;a[i]!='\0';i++)
  {
    len1++;
  }
  for(i=0;b[i]!='\0';i++)
  {
    len2++;
  }
    
 // printf("%d %d",len1,len2);
  if(len1!=len2)
  {
    printf("no");
  }
  else
  {
    for(i=0;i<len1;i++)
    {
      for(j=0;j<len2;j++)
      {
        if(a[i]==b[j])
        {
          a[i]='*';
          b[j]='*';
        }
      }
    }
   for(i=0;i<len1;i++)
   {
     if(a[i]==b[i])
     {
       c=0;
     }
     else
     {
       c=1;
       break;
     }
   }
    if(c==0)
      printf("yes");
    else
      printf("no");
  }
  return 0;
}
