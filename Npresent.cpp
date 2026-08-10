#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int arr[] = {1,23, 4,5, 32,3, 53,2,0 , 22 ,202 , 2, 0};
    for(int i =0; i < 13; i++){
        if(arr[i]== 0){
            num++;
        }
    }
    cout<<"number of zeros are "<< num<<endl;

}