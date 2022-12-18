#include <stdio.h>
#include<string.h>

int main()
{char ch[100];
scanf("%s",ch);
int len =strlen(ch);
int i;
for(i=0;i<len;i++)
{
    if(ch[i]>='a'&&ch[i]<='z'){
        ch[i]=ch[i]-32;
    } else{
        ch[i]=ch[i]+32;
    }
}
puts(ch);
return 0;
}
