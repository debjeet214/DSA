#include <iostream>
using namespace std;
void printarray(int *arr, int b){
    for(int i = 0; i<b; i++){
        cout<<arr[i]<<" ";
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
    cout<<"enter the nunber of array element : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"before sorting the array is :"<<endl;
    printarray(arr,n);
    quicksort(arr,0, n);
    cout<<endl<<"after sorting the array is :"<<endl;
    printarray(arr,n);
    return 0;
}
