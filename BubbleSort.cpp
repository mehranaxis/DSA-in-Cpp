#include <iostream> 
using namespace std;
void swap (int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Bubblesorting(int arr[], int size){
    for(int i = 0; i < size; i++){
        //int num = 0;
        for(int j = 0; j < size - i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
               
            }
           //  num++;
        }
    }
}
void PrintArray(int arr[], int size){
    cout<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {12, 43, 23, 45, 76, 32, 56, 3,12, 333};
    Bubblesorting(arr, 10);
    PrintArray(arr, 10);


}