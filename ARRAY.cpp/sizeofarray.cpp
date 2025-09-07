#include <iostream>
using namespace std;

int main(){
    int a[10];
    //To store the size of array declare a int variable n
    //int n = sizeof(a)/sizeof(a[0]);

    // To get the size of an array we use sizeof function in c++.

    //cout<<"Size of array is "<<n<<endl;

    for (int i = 0; i <10; i++){
        cin>>a[i];
    }


    //Traverse through all the elements

    for (int i = 0; i<10; i++){
        cout<<a[i]<<endl;
    }

}