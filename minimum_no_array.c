#include <stdio.h>

int main() {
    int arr[100], n, i, min;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    //min = arr[0]; // Assume first element is the smallest
printf("Odd numbers in the array are:\n");
    for(i=0;i<n; i++) {
        if(arr[i]%2!=0) {
            printf("%d ",arr[i]);
        }
    }



    return 0;
}
