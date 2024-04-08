#include<stdio.h>
int binarysearch(int *arr, int n, int key){
    int s =0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2; 
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else
        s = mid +1;
    }
    return -1;
}
int main(){
    int n;
    printf("enter the no. of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the array: ");    
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int key =-1, x =0;
    printf("enter the key elemet to search: ");
    scanf("%d", &key);
    int y = binarysearch(arr,n,key);
    printf("%d", y );
    return 0;
}
