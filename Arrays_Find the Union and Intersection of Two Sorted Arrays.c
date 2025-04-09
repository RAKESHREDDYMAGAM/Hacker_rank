#include <stdio.h>

void printUnion(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0, last = 10000001; // last = outside range

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (arr1[i] != last) {
                printf("%d ", arr1[i]);
                last = arr1[i];
            }
            i++;
        } else if (arr2[j] < arr1[i]) {
            if (arr2[j] != last) {
                printf("%d ", arr2[j]);
                last = arr2[j];
            }
            j++;
        } else {
            if (arr1[i] != last) {
                printf("%d ", arr1[i]);
                last = arr1[i];
            }
            i++;
            j++;
        }
    }

    while (i < n1) {
        if (arr1[i] != last) {
            printf("%d ", arr1[i]);
            last = arr1[i];
        }
        i++;
    }

    while (j < n2) {
        if (arr2[j] != last) {
            printf("%d ", arr2[j]);
            last = arr2[j];
        }
        j++;
    }

    printf("\n");
}

void printIntersection(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0, last = 10000001, found = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            if (arr1[i] != last) {
                printf("%d ", arr1[i]);
                last = arr1[i];
                found = 1;
            }
            i++;
            j++;
        }
    }

    if (!found)
        printf("Intersection Not Possible");

    printf("\n");
}

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printUnion(arr1, n1, arr2, n2);
    printIntersection(arr1, n1, arr2, n2);

    return 0;
}
