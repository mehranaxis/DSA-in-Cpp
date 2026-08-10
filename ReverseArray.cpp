#include <iostream>
using namespace std;
    
int main(){
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    for( int i = 0; i < 3; i++){
        swap(arr[i], arr[(6-i)]);
    }
    for (int  i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
   
}
 void swap(int a, int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }