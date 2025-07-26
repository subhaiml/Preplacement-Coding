#include <stdio.h>
int main(){
int n;
int i=0;
int j=0;
printf("Enter matrix length N*N");
scanf("%d",&n);
int m[n][n];
int r[n][n];
printf("Enter elements");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d",&m[i][j]);
}
}
printf("Original Matrix: ");
printf("\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ",m[i][j]);
}
printf("\n");
}
int c=n-1;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
r[i][j]=m[j][c];
}
printf("\n");
c=c-1;
}
printf("New Matrix: ");
printf("\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ",r[i][j]);
}
printf("\n");
}
}
