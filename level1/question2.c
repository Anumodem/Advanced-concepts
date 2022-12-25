#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b) 
{
    return(*(int*)b- *(int *)a);
}
void solve()
{
    int t;
    char c[100]="for(i=0;4*i<n;i++)";
    if(c[0] == 'f')
    scanf("%d",&t); 
    while(t--)
    {
        long long int n;
    int arr[1000], sum=0,i; 
    scanf("%lld",&n);
    for(i=0;i<n;i++) 
    scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),cmp); 
    for(i=0;i<n;i++)
    {
        sum+=arr[i]; 
        if(i+1<n)
        sum+=arr[i+1]; 
        i+=3;
    }
    printf("%d\n",sum);
    }
}
int main()
{solve();
return 0;
}
