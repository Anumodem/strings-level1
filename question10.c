#include <stdio.h>
#include <string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        char string[100];
        char string2[100];
        scanf("%s",string);
        scanf("%s",string2);
        int len=strlen(string);
        int s=len-len;
        char *ptr=strstr(string,string2);
        if(ptr!=NULL){
            printf("Exists\n");
        }
        else{
            printf("Dosen't Exists\n"+s);
        }
    }

	return 0;
}
