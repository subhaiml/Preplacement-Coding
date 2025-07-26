#include <stdio.h>
//Move zeros to end 
int main()
{
    int l;
    printf("Enter no of elements in array: \n");
    scanf("%d",&l);
    int arr[l];
    printf("Enter Array elements: \n");
    for(int i=0;i<l;i++){
        printf("Enter %d  element" ,i);
        scanf("%d",&arr[i]);
    }
    int t=0;
    printf("Original Array\n");
    for(int i=0;i<l;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l-1;j++){
            if(arr[i]==0){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("\n");
    printf("New Array\n");
    for(int i=0;i<l;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
}
