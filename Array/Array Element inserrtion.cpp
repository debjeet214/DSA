#include <iostream>
# define Z 50

using namespace std;

void displayArr(int arr[], int n){
   for( int i = 0; i < n; i++ ){
      cout << arr[ i ] << ", ";
   }
   cout << endl;
}
void insertAtEnd( int arr[], int &n, int e ){
   if( n < Z ) {
      arr[ n ] = e;
   }
   n = n + 1;
}

int main() {
   int arr[ Z ] = {57, 10, 14, 19, 86, 52, 32, 14, 76, 65, 32, 14};
   int n = 12;
   
   cout << "Array before insertion: ";
   displayArr( arr, n );
   
   cout << "Inserting 58 at the end:" << endl;
   insertAtEnd( arr, n, 58 );
   
   cout << "Array after insertion: ";
   displayArr( arr, n );
   
   cout << "Inserting 225 at the end:" << endl;
   insertAtEnd( arr, n, 225 );
   
   cout << "Array after insertion: ";
   displayArr( arr, n );
}
