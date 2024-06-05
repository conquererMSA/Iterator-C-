//print specific index element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int pos;
    cin>>pos;
    pos=pos-1;
    auto it=arr.begin();
    std::advance(it, pos);
    

    return 0;
}