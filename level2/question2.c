#include <stdio.h>
#include <string.h>
typedef enum boool{
YES,NO
}BOOOL;
BOOOL mystrcmp(char str[],char str1[],int st1,int st2,int len)
{
int i;
if(st1+len>strlen(str)||st2+len>strlen(str1))
return 0;
for(i=0;i<len;i++)
if(str[st1+i]!=str1[st2+i])
return NO;
return YES;
}
void clear(char arr[],int i,int l)
{
int j;
for(j=0;j<l;j++)
arr[i+j]=' ';
}
long int calc(char str1[],char str2[],int len)
{
int i,j,l1=strlen(str1),l2=strlen(str2);
long ans;
ans=0;
for(i=0;i<l1-len+1;i++)
for(j=0;j<l2-len+1;j++)
if(mystrcmp(str1,str2,i,j,len)==YES)
ans++;
return ans;
}
int main()
{
int test,i,len;
char arr1[100000],arr2[1000000];
scanf("%d",&test);
while(test--)
{
scanf("%s",arr1);
scanf("%s",arr2);
scanf("%d",&len);
for(i=1;i<=len;i++)
printf("%ld ",calc(arr1,arr2,i));
printf("\n");
}
	return 0;
}
