#include <stdio.h>
void printarray(int *arr, int b){
    for(int i = 0; i<b; i++){
        printf("%d\t",arr[i]) ;
    }
}
void insertionsort(int *arr,int n){
    int current, j;
    for(int i =1; i<n ; i++){
        current = arr[i];
        j = i-1;
        while(arr[j]>current && j>= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}
int main() {
    int n;
    printf("enter the number of array element : ");
	scanf("%d", &n);
    int arr[n];
	printf("enter the array elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n Before sorting the array: ");
    printarray(arr,n);
    insertionsort(arr, n);
    printf("\n After sorting the array: ");
    printarray(arr,n);
    return 0;
}
