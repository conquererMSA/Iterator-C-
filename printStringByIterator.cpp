#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="fdyxc";
    string:: iterator it;
    // cout<<*(s.begin()+1); //d, *s.begin()=f
    //ekhane it name ekta iterator declare korlam zeti string data type er iterator.
    for(it=s.begin(); it<s.end(); it++){
        //s.begin(): ekahne s.begin() function call kore it iterator variable e string s er first charcter er memory address set kora hoyeche.
        // it: it iterable variable ek ek kore string s er onno cahrecter (seraially) gulur memory address hold kore. s.begin()+1/2/3/4 evabe
        //s.end(): zokhon string er null value cole asbe tokhon s.end() function it variable e null er memory address set kore dibe and iteration stop hoye zabe.
        cout<<*it<<" ";
        // it ekti pointer: za kuno ekti variable er memory address hold kore rakhe. Pointer ke dereference kore value access korte hoy.
    }

    return 0;
}

//reverse printing of a string by iteration
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="abcde";
//     for(auto it=s.rbegin(); it<s.rend(); it++){
//         cout<<*it<<endl;
//     }
//     return 0;
// }