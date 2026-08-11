#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = (end + start)/2;
    while(start <= end){
        if (arr[mid] == key){
            return mid;
        }
        if (arr[mid]< key){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = (start + end)/2;
       return -1;
    }
}
int main(){

    int even[] = {1,3,4,8,17,23};
    int odd[] = {2,4,9,21,34,56,99};
    int index = binarySearch(even, 6, 17);

    cout<<"index of 17"<< " is "<<index;


}