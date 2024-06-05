// //print specific index element
// //int arr[5]={1,2,3,4,5}; erokom array er jonno STL e built in iterator nei. onno container data typer er jonno iterator ache.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(int);
//     int userPos;
//     cin>>userPos;
//     int* end=arr+size;
//     int* indexValuePointer=arr+userPos-1;
//     if(end!=indexValuePointer){
//         cout<<*indexValuePointer;
//     }
//     else{
//         cout<<"out of bounds";// only works for input 6;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(int);
//     int userPos;
//     cin>>userPos;
//     if(userPos>0 && userPos<=size){
//       int* end=arr+size;
//       int* indexValuePointer=arr+userPos-1;
//       cout<<*indexValuePointer<<endl;
//     }
//     else{
//         cout<<"out of bounds";
//     }
// }