#include<iostream>
using namespace std;
int binarysearch(int *arr, int n, int key){
    int s =0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2; // if there is 5 array element the mid is 0+5/2 = 2.5 = 2 nd element 
        // if there is 4 array element the mid is 0+4/2 = 2nd element 
        if(arr[mid]==key){
            return mid; // only the index value in array
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
    cout<<"enter the no. of elements ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int key =-1, x =0;
    cout<<"enter the key ";
    cin>>key;
    cout<<binarysearch(arr,n,key);
    return 0;
}
