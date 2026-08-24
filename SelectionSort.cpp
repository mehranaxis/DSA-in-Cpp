#include <iostream>
using namespace std;
void print(int arr[], int size){
    cout<<endl;
    for(int i = 0; i < size; i++ ){
        cout<<arr[i]<<" ";
    }
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = arr[i];
        for(int j = i+1; j<n; j++){
            if(arr[j]< arr[i])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
    int array[10] = {1,4,6,2,9,3,7,5,8,0};

    selectionSort(array, 10);
    print(array, 10);

}