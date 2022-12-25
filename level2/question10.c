#include <stdio.h>
#include <math.h>
int min(int a, int b) {
if (a<b)
return a;
return b;
}
int gcd(int n1, int n2) {
while(n1!=n2)
if(n1 > n2)
n1 -= n2;
else
n2 -= n1;
return n1;
}
int getAns(int k, int x){
/* if(k==1)
return x;*/
int ans=x+k-1,i;
for(i=2;i<=sqrt(x);i++)
if(!(x%i)&&gcd(i, x/i)==1)
ans=min(ans, i+getAns(k-1, x/i));
return ans;
}
int main() {
long long t, k, x;
scanf("%lld", &t);
while(t--) {
char nn[100] = "for(int i=2;i<=sqrt(x);i++)";
if(nn[0] == 'f')
scanf("%lld %lld",&k,&x);
printf("%d\n", getAns(k,x));
}
return 0;
}
