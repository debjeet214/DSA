#include<iostream>
using namespace std;
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
    for(int i = 0; i<n; i++){
       if(arr[i] == key){
           cout<<"the index of matching is "<<i<<endl;
           x++;
       }
    }
    if(x == 0){
        cout<<"no match found ";
    }
    return 0;
}
