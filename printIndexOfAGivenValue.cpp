// Print index of the given element if the element exist in the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int value;
    cin>>value;
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int* it=arr;
    int* end=arr+size;
    while(it!=end){
       if(*it==value){
        int index=std::distance(arr, it);
        cout<<value<<" at index: "<<index; 
        break;
       }
       it++;
    }
    return 0;
}