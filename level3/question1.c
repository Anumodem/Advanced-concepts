#include <stdio.h>
#include <string.h>
#define MAX 1000009
int tree[MAX];
void update(int x)
{
 while(x<MAX)
 {
 tree[x]++;
 x=x+(x & -x);
 }
}
int sum(int idx)
{
 int s=0;
 while(idx>0)
 {
 s+=tree[idx];
 idx=idx-(idx & -idx);
 }
 return s;
}
int main()
{
 int test,n;
 scanf("%d",&test);
 while(test--)
 {
 int i;
 memset(tree,0,sizeof(tree));
 scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);}
 for(i=n-1;i>=0;i--)
 {
 int s=sum(arr[i]-1);
 update(arr[i]);
 arr[i]=s;
 }
 for(i=0;i<n;i++)
 printf("%d ",arr[i]);
 printf("\n");
 }
return 0;
}
