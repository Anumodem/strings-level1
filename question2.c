#include <stdio.h>
#include <string.h>
int main()
{
   char s[100001];
   int i,c=0;
   int t;
   scanf("%d",&t);
   while(t!=0)
   {c=0;
   scanf("%s",s);
   for(i=0;i<=strlen(s)-1;i++)
   {
       if(s[i]==s[i+1]) 
       c++;
    }
    printf("%d\n",c);
    t--;
    }return 0;
   }
