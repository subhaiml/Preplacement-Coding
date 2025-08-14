#include <stdio.h>
int main()
{
    int n;
    printf("Enter array range: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter Array Elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int t;
    for(int pass=0; pass < n-1; pass++) 
    { 
        for(int i=0; i < n-1; i++) 
        {      
            if(a[i] > a[i+1]) 
            {
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
    }
    printf("\nSorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    if(n%2==0){
        
    for(int i=0;i<n;i=i+2){
        t=a[i+1];
        a[i+1]=a[i];
        a[i]=t;
    }
    }
    else{
        
    for(int i=0;i<n-1;i=i+2){
        t=a[i+1];
        a[i+1]=a[i];
        a[i]=t;
    }
    }
    printf("\nWeb Array array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}