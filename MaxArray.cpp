#include <iostream>
using namespace std;
int main(){
    int num[5];

    for (int i =0 ;i<5 ;i++){
        cout<<"enter number for " <<i<< " index"<<endl;
        cin>>num[i];
    }
    int max = num[0];
    for(int j = 0; j<4; j++ ){
        if (num[j]> num[j+1])
        {
            max = num[j];
        }
        else{
            max = num[j+1];
        }
        
    }
    cout<<"maximun number in array is "<<max<<endl;
}