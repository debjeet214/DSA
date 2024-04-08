#include <stdio.h>
void printarray(int *arr, int b){
    for(int i = 1; i<=b; i++){
        printf("%d\t",arr[i]);
    }
}
int part(int *a, int low, int high){
    int pivot = a[low];
    int i = low+1;
    int j = high;
    int temp;
    do{
    while(a[i]<= pivot){
        i++;
    }
    while(a[j]>pivot){
        j--;
    }
    if(i<j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    }while(i<j);
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quicksort(int *a, int low, int high){
    int partindex;
    if(low<high){
        partindex = part(a, low, high);
        quicksort(a, low, partindex-1);
        quicksort(a, partindex+1, high);
    }
}
int main() {
    int n;
    printf("enter the number of the array element:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array element: \n");
    for(int i = 1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Before sorting the array: \n");
    printarray(arr,n);
    quicksort(arr,0, n);
    printf("\n");
    printf("After sorting the array: \n");
    printarray(arr,n);
    return 0;
}
