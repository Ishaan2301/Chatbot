#include <stdio.h>
int main ()
{
    int T, N, A, B;
    scanf ("%d", &T);
    while (T--)
    {
        scanf("%d %d %d", &N, &A, &B);
        int s[N];
        for (int i=0; i<N; i++)
        {
            scanf ("%d",&s[i]);
            printf ("%d", s[i]);
        }
        
    }
}