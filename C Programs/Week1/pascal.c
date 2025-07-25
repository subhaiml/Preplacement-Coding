#include <stdio.h>
void pascal_triangle(int n) {
    for (int i = 0; i < n; i++) {
        int val = 1;
        for (int k = 0; k < n - i; k++) printf(" ");
        for (int j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    pascal_triangle(rows);
    return 0;
}
