#include <iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,9,8,7,6,0};
    //To store the size of array declare a int variable n
    int n = sizeof(a)/sizeof(a[0]);

    // To get the size of an array we use sizeof function in c++.

    cout<<"Size of array is "<<n<<endl;

    //Traverse through all the elements

    for (int i = 0; i<n; i++){
        cout<<i<<endl;
    }

}