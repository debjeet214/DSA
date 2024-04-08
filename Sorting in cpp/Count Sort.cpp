#include <iostream>
#include<climits>
using namespace std;
void printarray(int *arr, int b){
    for(int i = 0; i<b; i++){
        cout<<arr[i]<<" ";
    }
}
int maximum(int *a, int n){
    int max = INT_MIN;
    for(int i =0; i<n ; i++){
        if(max <a[i]){
            max = a[i];
        }
    }
    return max;
}
void countsort(int *a, int n){
    int i, j;
    int max = maximum(a, n);
    int *count = (int*)malloc((max+1)* sizeof(int));
    for(int i =0; i<max+1; i++){
        count[i] =0;
    }
    for(int i = 0; i<n; i++){
        count[a[i]] = count[a[i]] +1;
    }
    i =0, j=0;
    while(i<max){
        if(count[i]>0){
            a[j] = i;
            count[i] = count[i]-1;
            j++;
        }
        else
        i++;
    }
}
int main() {
    int a[] = {9, 21,17,6,51,98,76,50};
    int n = 8;
    printarray(a,n);
    cout<<endl;
    countsort(a,n);
    printarray(a,n);
    return 0;
}
