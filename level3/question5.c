#include<stdio.h>
#include<string.h>
int main()
{
 long long i,j,k,t,n,m,q,p=0;
 char str[100001];
 scanf("%lld",&n);
 for(i=0;i<n;i++)
 {
 scanf("%s%lld",str,&t);
 k = strlen(str);
 char sty[t][100001];
 for(j=0; j<t; j++)
 {
 scanf("%s",sty[j]);
 }
 if(k!=t)
 {
 printf("NO\n");
 }
 else
 {
 for(j=0; j<t; j++)
 {
 m = strlen(sty[j]);
 for(q=0; q<m; q++)
 {
 if(str[j]==sty[j][q])
 {
 p++;
 break;
 }
 }
 }
 if(p==t)
 {
 printf("YES\n");
 }
 else
 {
 printf("NO\n");
 }
 }
 p = 0;
 }
 return 0;
}
