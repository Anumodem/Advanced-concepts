#include <stdio.h>
#include <string.h>
void l() {}
int main()
{
    char string[100];
    int a[26]={0};
    scanf("%s",string);
    int i,n=strlen(string),fact=1;
    for(i=n-1;i>1;i--)
        fact*=i;
    for(i=0;i<n;i++)
        a[string[i]-'a']=fact;
    for(i=0;i<26;i++)
        printf("%d ",a[i]);
	return 0;
}
