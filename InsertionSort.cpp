#include <iostream>
using namespace std;
void insertionsort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j >=0; j--){
            if (arr[j]> temp){
                arr[j+1] = arr[j];   
            }
            else{
                break;
            }

        }
        arr[j+1] = temp;
    }
}
void print(int arr[], int size){
    cout<<endl;
    for(int i = 0; i < size; i++ ){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {12, 342, 23, 43,13, 23,5,-9, 33, 2};
    insertionsort(arr, 10);
    print(arr, 10);

}