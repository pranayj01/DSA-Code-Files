#include<stdio.h>
int countsort(int *a, int n,int e)
{
    int count[10]={0};
    int output[n];
    for(int i=0;i<n;i++)
    {
        count[((*(a+i))/e)%10]++;
    }
    for(int i=1;i<10;i++)count[i]=count[i]+count[i-1];

    for(int i=n-1;i>=0;i--)
    {
        output[--count[((*(a+i))/e)%10]]=*(a+i);
    }
    for(int i=0;i<n;i++)
    {
        *(a+i) = output[i];
    }
}

void printarray(int* a,int n)
{
    for(int i=0;i<n;i++)printf("%d ",*(a+i));
    printf("\n");
}

void radixsort(int *a, int n)
{
    int maxi = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxi)maxi=a[i];
    }
    for(int e=1;maxi/e > 0; e*=10)
    {
        countsort(a,n,e); 
    }
}

int main()
{
    int a[] = {136,487,358,469,570,247,598,639,205,609};
    int n= sizeof(a)/sizeof(a[0]);
    radixsort(a,n);
    printf("Sorted array: ");
    printarray(a,n);
}
