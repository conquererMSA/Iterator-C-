#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int* it=arr;
    cout<<*it<<endl;
    //ekhane it hocce (int arr) er first element er memory address/pointer;
    int* end=arr+5;
    cout<<*(end-1)<<endl;//5
    //ekhane end hocce (int arr) er last element er porer ghor (garbage vlue) er memory addres/pointer;
    while(it!=end){
        cout<<*it<<" ";
        // it arr er element gulur memory address hold kore rakhe, it theke value pete hole it ke dereference korte hobe.
        it++;
        //ekhane pointer ek ek kore barbe ba memory address ekghor samner dike zabe.
    }
    
    return 0;
}