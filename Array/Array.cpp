#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the no. of elements required: ";
    cin>>n;
    int arr[n]; 
    cout<<"enter the elements";
     for(int i =0; i<n; i++){
         cin>>arr[i];
        cout<<"the "<<(i+1)<<" no. array element is "<<arr[i]<<endl;
    }
    return 0;
}
