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
    int pdt=1;
    for(int i=n-1;i>n-4;i--){
        pdt=pdt*a[i];
    }
    printf("Largest triplet mul: %d",pdt);
}