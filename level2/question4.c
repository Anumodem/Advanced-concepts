#include <stdio.h>
#include <stdlib.h>

void print(long long int N, long long int A[])
{
    int i;
    for(i = 0; i < N; i++)
        printf("%lld ", A[i]);
    printf("\n");
}

void castVote(long long int N, long long int A[])
{
    int i, j, count;
    long long int *B = NULL;
    B = (long long int *)calloc(N, sizeof(long long int));

    for(i=0;i<N;i++) {
        count = A[i];
        for(j = i+1; j < N; j++) {
            if(count >= 0) {
                B[j]++;
                count = count - A[j];
            }
            else
                break;
        }
        count = A[i];
        for(j = i-1; j >= 0; j--) 
            if(count >= 0) {
                B[j]++;
                count = count - A[j];
            }
            else
                break;
        
    }

    print(N, B);
    B = NULL;
}

int main()
{
    long long int T = 0, i, j;
    int N;
    long long int *A = NULL;
    scanf("%lld", &T);
    for(i = 0; i < T; i++) {

        scanf("%d",&N);
        A = (long long int *)calloc(N, sizeof(long long int));
        for(j = 0; j < N; j++)
            scanf("%lld", &A[j]);

        castVote(N, A);
        A = NULL;
        N = 0;
    }
    return 0;
}
