#include <stdio.h>
#define MAX 100
void createArray(int arr[], int *size) {
    printf("Enter number of elements: ");
    scanf("%d", size);
    printf("Enter elements:\n");
    for (int i = 0; i < *size; i++) {
        scanf("%d", &arr[i]);
    }
}
void insertElement(int arr[], int *size) {
    int value, pos;
    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position to insert (0-indexed): ");
    scanf("%d", &pos);
    if (pos >= 0 && pos <= *size) {
        for (int i = *size; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = value;
        (*size)++;
    } else {
        printf("Invalid position!\n");
    }
}
void modifyElement(int arr[], int size) {
    int pos, newValue;
    printf("Enter index to modify: ");
    scanf("%d", &pos);
    if (pos >= 0 && pos < size) {
        printf("Enter new value: ");
        scanf("%d", &newValue);
        arr[pos] = newValue;
    } else {
        printf("Invalid index!\n");
    }
}
void deleteElement(int arr[], int *size) {
    int pos;
    printf("Enter position to delete (0-indexed): ");
    scanf("%d", &pos);
    if (pos >= 0 && pos < *size) {
        for (int i = pos; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
    } else {
        printf("Invalid index!\n");
    }
}
void displayArray(int arr[], int size) {
    printf("Current Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[MAX], size = 0, choice;
    createArray(arr, &size);
    while (1) {
        printf("\nMenu:\n1. Insert\n2. Modify\n3. Delete\n4. Display\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insertElement(arr, &size);
                break;
            case 2:
                modifyElement(arr, size);
                break;
            case 3:
                deleteElement(arr, &size);
                break;
            case 4:
                displayArray(arr, size);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
