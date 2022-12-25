#include <stdio.h>
void mergeself(int l[],int low,int high,int mid)
{   int i=low,j=mid+1,k=0;
    int t=high-low+1;
    int a[t];
    while(i<=mid && j<=high)
     {  if(l[i]<l[j])
          {a[k]=l[i];
           k++;
           i++;
          }
        else
          { a[k]=l[j];
            k++;
            j++;
          }

    }
    if(i<=mid)
       { while(i<=mid)
           { a[k]=l[i];
             i++;
             k++;
            }
       }
    else if(j<=high)
       { while(j<=high)
           { a[k]=l[j];
              j++;
              k++;
           }

       }
      k=0;
     for(i=low;i<=high;i++)
        { l[i]=a[k];
          k++;
        }

}
void mergesort(int l[],int low,int high)
{ if(low<high)
    { int mid=(low+high)/2;
      mergesort(l,low,mid);
      mergesort(l,mid+1,high);
      mergeself(l,low,high,mid);
    }
}
int main() { int t,n,k,i,j;
     int b[50],a[50];
    scanf("%d",&t);
    for(i=0;i<t;i++)
      { scanf("%d %d",&n,&k);
        int sum=0,p=0;
        for(j=0;j<n;j++)
           { scanf("%d ",&a[j]);
             if(a[j]<=k)
              sum+=a[j];
             else 
               {b[p]=a[j]-k;
                 p++;
               } 
           }
          mergesort(b,0,p-1);
          sum=sum+(k*p);
          int sum1=0;
          if(p==1)
           sum=sum+b[0];
          else if(p==2)
           sum=sum+(b[1]-b[0]);
          else if(p>2)
            { for(j=0;j<p-2;j++)
                sum1+=b[j];
              if(sum1<b[p-2])
                {sum=sum+(b[p-1]-(b[p-2]-sum1));
                }
              else if(sum1==b[p-2]) 
                 sum=sum+b[p-1];
              else if(sum1>b[p-2])
                 { if((sum1%2==0 && b[p-2]%2==0) || (sum1%2!=0 && b[p-2]%2!=0))
                      sum=sum+b[p-1];
                   else
                      sum=sum+b[p-1]-1;
                 }
                
            }
        printf("%d\n",sum);
     
      }
    return 0;
}
