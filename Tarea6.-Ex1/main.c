#include <stdio.h>
#include <stdlib.h>
#define N 10
void AllToZero(int Array[N][N]);
void PatronNo1(int Array[N][N]);
void PatronNo2(int Array[N][N]);
void PatronNo3(int Array[N][N]);
void PatronNo4(int Array[N][N]);

int main()
{
    int Array[N][N];
    AllToZero(Array);
    PatronNo1(Array);
    AllToZero(Array);
    PatronNo2(Array);
    AllToZero(Array);
    PatronNo3(Array);
    AllToZero(Array);
    PatronNo4(Array);
    return 0;
}
void AllToZero(int Array[N][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            Array[i][j]=0;
        }
    }
}
void PatronNo1(int Array[N][N])
{
   int i,j;
   for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if((j==0)||i==0||i==N-1||(j==N-1))
            {
               Array[i][j]=1;
            }
            printf("%d",Array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void PatronNo2(int Array[N][N])
{
   int i,j;
   for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(j==i||i==j||j==N-i-1)
            {
               Array[i][j]=1;
            }
            printf("%d",Array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void PatronNo3(int Array[N][N])
{
   int i,j;
   for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if((j==0)||i==0||i==N-1||(j==N-1))//||j==N-(j+2)||i==N-(j+2)||i==N-3||j==N-3)
            {
               Array[i][j]=1;
            }
            printf("%d",Array[i][j]);
        }
        printf("\n");
    }
    printf("No pude por el momento  \n");
}

void PatronNo4(int Array[N][N])
{
   int i,j;
   for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if((i==0)||i==N-1||(j==N-1)||(i>1&&j==0))
            {
               Array[i][j]=1;
            }
            printf("%d",Array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
