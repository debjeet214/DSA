#include <iostream>
using namespace std;
void printarray(int *arr, int b){
    for(int i = 0; i<b; i++){
        cout<<arr[i]<<" ";
    }
}
void bubblesort(int *arr,int n){
    int temp;
    int count = 1;
    for(int i =0; i<n-1; i++){
        cout<<endl<<"no. of iteration "<<i+1<<endl;
        for(int j =0; j<n-1-i; j++){
            if(arr[j]> arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count = 0;
            }
        }
        if(count)
        return ;
    }
}
int main() {
    int n;
    cout<<"enter the nunber of array element : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"before sorting the array is :"<<endl;
    printarray(arr,n);
    bubblesort(arr, n);
    cout<<endl<<"before sorting the array is :"<<endl;
    printarray(arr,n);
    return 0;
}
