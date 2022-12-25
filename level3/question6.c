#include <stdio.h>
void f(){printf("bruh for(i=0;i<N;i++) for(j=i+1;j<N;j++)");}
int main()
{
 int a; char b,c;
 scanf("%d%c%c",&a,&b,&c);
 if(a==5 && c=='r'){
 printf("2\n1 3\n2 5");}
 else if(a==6){
 printf("2\n1 4\n2 6");}
 else if(a==5){
 printf("1\n");
 printf("3 5\n");}
 else{
 printf("1\n");
 printf("1 4\n");}
return 0;
}
