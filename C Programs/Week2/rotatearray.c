#include <stdio.h>
int main()
{
    int l;
    printf("Enter no of elements in array: \n");
    scanf("%d",&l);
    int arr[l];
    printf("Enter Array elements: \n");
    for(int i=0;i<l;i++){
        printf("Enter %d  element : " ,i);
        scanf("%d",&arr[i]);
    }
    int t=0;
    printf("Original Array\n");
    for(int i=0;i<l;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    t=arr[l-1];
    for(int i=l-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=t;
    printf("\n");
    printf("New Array\n");
    for(int i=0;i<l;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
}
