#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    scanf("%[^\n]s",str);
    int i,count=0;
    for(i=0;i<=strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
            count++;
        }
    }
    printf("%d",count);
}