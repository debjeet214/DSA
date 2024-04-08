#include <iostream>
using namespace std;
void printarray(int *arr, int b){
    for(int i = 0; i<b; i++){
        cout<<arr[i]<<" ";
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
    cout<<"enter the nunber of array element : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"before sorting the array is :"<<endl;
    printarray(arr,n);
    insertionsort(arr, n);
    cout<<endl<<"before sorting the array is :"<<endl;
    printarray(arr,n);
    return 0;
}
