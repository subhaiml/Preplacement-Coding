#include <stdio.h>
int main() {
    int a[50], b[50], merged[100];
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);
    for (int i = 0; i < n1; i++) merged[i] = a[i];
    for (int i = 0; i < n2; i++) merged[n1 + i] = b[i];
    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);
    return 0;
}
