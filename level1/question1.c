#include <stdio.h>
#define mod 1000000007
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        unsigned long long x,y,op=1,j;
        scanf("%llu %llu",&x,&y);
        for(j=1;j<=y;j++)
        op=op*x;
        op=op%mod;
        printf("%llu\n",op);
    }
	return 0;
}
