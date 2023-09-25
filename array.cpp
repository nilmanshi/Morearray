// INSERTING AND INDEXING OF AN ARRAY 
#include<iostream>
using namespace std ;

int main(){
  int arr[5];
  int n = 5;
  for (int i =0; i <n; i++){
    cout<<"enter a value of n "<<i <<" : ";
    cin>>arr[i];
    cout<<endl;
  }
  cout<<" printing an array "<<endl;
  for (int i = 0; i <n ; i++)
    cout<<arr[i]<<" " ;
  return 0 ;
}