#include <stdio.h>
#include<stdlib.h>
 extern int isSquare(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y,int p4x,int p4y);
int i;
int cmpfunc (const void * a, const void * b) {
 return ( *(int*)a - *(int*)b );
}
 extern int isSquare(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y,int p4x,int p4y)
 {
 int s=0;
 int arr[8] = {p1x,p1y,p2x,p2y,p3x,p3y,p4x,p4y};
 qsort(arr, 8, sizeof(int), cmpfunc);
 for(i=0;i<7;i++)
 {
 if(arr[i] == arr[i+1])
 {
 s=1;
 i++;
 }
 else
 {
 s=0;
 break;
 }
 }
 if(s==0) printf("No\n");
 else printf("Yes\n");
return 0;
}
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
 int p1x,p1y,p2x,p2y,p3x,p3y,p4x,p4y;
 scanf("%d %d %d %d %d %d %d %d",&p1x,&p1y,&p2x,&p2y,&p3x,&p3y,&p4x,&p4y);
 isSquare(p1x,p1y,p2x,p2y,p3x,p3y,p4x,p4y);
 }
 return 0;
}
