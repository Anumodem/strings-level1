#include <stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 1000
int main()
{ int t,count = 0;
scanf("%d",&t);
while(t--){
    char a[MAX],b[MAX];
    scanf("%s",a);
    scanf("%s",b);
    int i=strlen(a);
    while(i--){
        if((a[i] == b[i])||(isalpha(a[i])!= isalpha(b[i])))
count = 1;
else{count = 0;break;}
    
}
(count == 0)?printf("No\n") : printf("Yes\n");
}
return 0;
}
