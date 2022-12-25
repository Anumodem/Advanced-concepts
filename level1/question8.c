#include <stdio.h>
int main()
{ int n,arr[200],i,j,a[200],temp;
scanf("%d",&n);
n++;
for(j=0; j<n-1; j++)
{ scanf("%d",&arr[j]);
a[j]=j;
}
for(i=0; i<n-1; i++)
{ for(j=i+1; j<n-1; j++)
{ if(arr[i]>arr[j])
{ temp=a[j];
a[j]=a[i];
a[i]=temp;

temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;
}
}

printf("%d ",a[i]);

}
return 0;
}
