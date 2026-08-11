#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void PrintArray(int arr[], int size){
    cout<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<", ";
    }
}

int main(){
    int arr[6] = {1, 2, 5, 8, 12, 16};

    for (int i = 0; i < 6; i+=2)
    {
        swap(arr[i], arr[i+1]);
    }
    PrintArray(arr, 6);
    

}