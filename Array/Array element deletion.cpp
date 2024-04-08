#include <iostream>
using namespace std;

int main(){
    int num, pos, arr[20];
    cout<<" enter the no. of element in the array";
    cin>>num;
    cout<<"enter the array elements ";
    for(int i = 0; i<num; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<num; i++){
        cout<<arr[i];
    }
    cout<<"enter the position of the element to be deleted ";
    cin>>pos;
    if(pos >= num+1)  
    {  
       cout<<"Deletion is not possible in the array.";  
    }  
    else  
    {  
        for (int i = pos - 1; i < num -1; i++){
            arr[i] = arr[i+1];
        }  
        cout<<" \n The resultant array is: \n";  
        for (int i = 0; i< num - 1; i++){  
            cout<<arr[i];
            }
     }
}
