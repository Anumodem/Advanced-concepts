#include <stdio.h>
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37} ;
typedef long long LL ;
void i(){if(0)printf("for(i=0;i<Size_of_Array;i++)");}
int main()

{
int Num_Cases,i,ii,j ;
scanf("%d", &Num_Cases) ;
while(Num_Cases--)
{
int Size_of_Array ;
scanf("%d", &Size_of_Array) ;
int Array[Size_of_Array] ;
for(i = 0 ; i < Size_of_Array ; i++)
scanf("%d",&Array[i]);
long long moves[99999] = {0} ;
for(i = 0 ; i < Size_of_Array ; i++)
for(j = 0 ; j < 12 ; j++)
if(Array[i] % primes[j] == 0)
{
moves[i] |= (1LL << i) << primes[j] ;
moves[i] |= (1LL << i) >> primes[j] ;}
int Moves_Left ;
scanf("%d", &Moves_Left) ;
LL Current_Index = 1 ;
for(ii = 0 ; ii < Moves_Left ; ii++)
{
LL Next_Index = 0 ;
for (i = 0 ; i < Size_of_Array ; i++)
{
if(Current_Index & (1LL << i))
{
Next_Index |= moves[i] ;
}
}
Current_Index = Next_Index ;

}
if(( 1LL << (Size_of_Array - 1) ) & Current_Index)
printf("YES\n");
else
{
printf("NO\n");
}
}
return 0;}
