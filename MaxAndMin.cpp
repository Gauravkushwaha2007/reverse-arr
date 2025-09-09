#include<iostream>
using namespace std;
int main (){
    int arr [] = {22,72,45,95,3,42,43,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int mx = arr[0], mini = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>mx) mx = arr[i];
        if(arr[i]<mini) mini = arr[i];
    }
    cout << "Max value is : "<< mx <<endl;
    cout<< "Minimum value is : " << mini <<endl;
    return 0;
}
