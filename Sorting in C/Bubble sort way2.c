#include <stdio.h>
int main() {
    int n;
    printf("enter the nunber of array element : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array elements: ");
    for(int i = 0; i<n; i++){
    	scanf("%d", &arr[i]);
    }
    int count =1;
    int temp = 0;
    while(count<n){
        for(int i =0; i<n-count; i++){
            if(arr[i]> arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }
    for(int i = 0; i<n; i++){
        printf("%d\t", arr[i]);;
    }
    return 0;
}
