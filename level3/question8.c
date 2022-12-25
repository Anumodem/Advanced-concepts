#include<stdio.h>
int main()
{
long long n;
scanf("%lld",&n);
long long no,k,i,temp,sum,a,n1,n2,nft,l;
for(i=0;i<n;i++)
{
	 	 scanf("%lld%lld",&no,&k);
	 	 if(k==1)
	 	 printf("0\n");
	 	 else if(k>=2*no)
	 	 {
	 	 	 temp=(no*(no+1))/2;
	 	 	 printf("%lld\n",temp);
	 	 }
	 	 else if(k>no)
	 	 {
	 	 	 n1=k/2;
	 	 	 temp=(n1*(n1+1))/2;
	 	 	 nft=no-n1;
	 	 	 l=k-(n1+1);
	 	 	 a=l-nft+1;
	 	 	 sum=temp+((no-n1)*(a+l))/2;
	 	 	 printf("%lld\n",sum);
	 	 }
	 	 else{
	 	 	 n1=k/2;
	 	 	 temp=(n1*(n1+1))/2;
	 	 	 n2=k-n1-1;
	 	 	 sum=temp+((n2)*(n2+1))/2;
	 	 	 printf("%lld\n",sum);
	 	 }
}
return 0;
}
