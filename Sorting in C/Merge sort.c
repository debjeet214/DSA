#include<stdio.h>
void printarray(int *arr, int b){
    for(int i = 0; i<b; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void merge(int* a, int mid, int low, int high){
    int i, j, k, b[100];
    i = low;
    j = mid +1;
    k = low;
    while(i<= mid && j<=high){
        if(a[i]<a[j]){
        b[k]=a[i];
        i++;
        k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        b[k] = a[i];
        k++;
        i++;
    }
    while(j<=high){
        b[k] = a[j];
        k++;
        j++;
    }
    for(int i = low; i<=high; i++){
        a[i] = b[i];
    }
}
void mergesort(int a[], int low, int high){
    int mid;
    if(low<high){
        mid =(high+low)/2;
        mergesort(a, low, mid);
        mergesort(a, mid+1, high);
        merge(a, mid, low, high);
    }
}
int main() {
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("enter the Array Elements: \n");
    for(int i =0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printarray(a,n);
    mergesort(a,0,n);
    printarray(a,n);
    return 0;
}
