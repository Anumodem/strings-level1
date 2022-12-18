#include <stdio.h>
int main()
{ int t,n,i;
scanf("%d",&t);
while(t--){
    int c=0;
    scanf("%d",&n);
    char string;
    for(i=0;i<=n;i++){
        scanf("%c",&string);
        if(string=='1')c++;
    }
    printf("%d\n",((c+1)*c)/2);
}

	return 0;
}
