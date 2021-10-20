
#include <stdio.h>

int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int isprime[n+1];
    for(int i=0;i<=n;i++)_GCC_SIZE_T
        isprime[i]=1;
    isprime[0]=isprime[1]=0;
    for(int i=2;i<n;i++)
    {
        if(isprime[i]==1)
        {
            for(int j=2;j*i<=n;i++)
            {
                isprime[i*j]=0;
            }
        }
    }
    for(int i=0;i<=n;i++)
      printf("%d %d\n",i,isprime[i]);
      

    return 0;
}