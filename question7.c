#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10];
    int j,count =10;
    int t;
    scanf("%d",&t);
    while(t--){
        count=0;
        scanf("%s",arr);
        for(j=0;j<strlen(arr)-1;j++){
            if(arr[j]!=arr[j+1]) count++;
                    
    }
    if(count<3) printf("uniform\n");
    else   printf("non-uniform\n");
    }
    return 0;}
