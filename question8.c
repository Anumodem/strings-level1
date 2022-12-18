#include <stdio.h>
#include <string.h>
int main()
{int t;
scanf("%d",&t);
while(t--)
{
    char S1[101],S2[101];
    scanf("%s %s",S1,S2);
    int i,n=strlen(S1);
    int min=0,max=0,count=0;
    for(i=0;i<n;++i)
    {
        if(S1[i]=='?'||S2[i]=='?')
        ++count;
        else if (S1[i]!=S2[i])
        ++min;
    }
    max = min + count;
    printf("%d %d\n",min,max);
    }
	return 0;
}
