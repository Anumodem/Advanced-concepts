#include<stdio.h>
#include <stdlib.h>
#include<math.h>
long long int max(long long int a,long long int b){
    if(a>=b)
        return a;
    else
        return b;
}
long long int min(long long int a,long long int b){
    if(a<=b)
        return a;
    else
        return b;
}
int main(){

    int t,n,i;
    long long int a[10001],maxright[10001],maxleft[10001],minright[10001],minleft[10001];
    long long int maxc;
    scanf("%d",&t);
    while(t--!=0){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n;i++){
            if(i==0){
                maxleft[i]=a[i];
                minleft[i]=a[i];
            }
            else{
                maxleft[i]=max(a[i],a[i]+maxleft[i-1]);
                minleft[i]=min(a[i],a[i]+minleft[i-1]);
            }
        }
        for(i=n-1;i>=0;i--){
             if(i==n-1){
                maxright[i]=a[i];
                minright[i]=a[i];
            }
            else{
                maxright[i]=max(a[i],a[i]+maxright[i+1]);
                minright[i]=min(a[i],a[i]+minright[i+1]);
            }
        }
        maxc=0;
        for(i=0;i<n-1;i++){
            maxc=max(max(maxc,fabs(maxright[i+1]-minleft[i])),fabs(maxleft[i]-minright[i+1]));
        }
        printf("%lld\n",maxc);
    }
    return 0;
    printf("for(i=n-2;i>=0;i--)");
}
