#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int a=0,b=4;
    while(a<b)
    {
        int c;
        c=arr[a];
        arr[a]=arr[b];
        arr[b]=c;
        a++;
        b--;

    }
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);

    }
    return 0;

}
