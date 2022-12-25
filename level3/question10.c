#include <stdio.h>
int main()
{
 int t;
 scanf("%d",&t);
 while(t--){
 long long int n,p,count=0,i,j;
 scanf("%lld %lld",&n,&p);
 long long int a[p];
 for(i=0;i<p;i++){
 scanf("%lld",&a[i]);}
 for(i=1;i<=n;i++){
 for(j=0;j<p;j++){
 if(i%a[j]==0){
 count++;
 break;
 }
 }
 }
 printf("%lld\n",count);
}
return 0;
}
