#include<iostream>
using namespace std;
int main(){
  int arr [] = {1,2,3,4,5};
  cout<<"Given array is : " << endl;

  for(auto value : arr){ 
    cout <<value<< " "<<endl;
  }
  cout<< "Reversed Array is : " << endl;
  for(int i=4; i>=0; i--){
    cout<<arr[i]<< " " ;
  
return 0;
}
