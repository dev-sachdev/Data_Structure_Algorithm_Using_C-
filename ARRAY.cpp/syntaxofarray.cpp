#include <iostream>
using namespace std;

int main(){
    int a[5]; //Declare the array of size 5 elements
    //How to initialize the elements???
    //We can access the elements using the indexes if the elements

    //for example we can pass on the value to the array

    a[0] = 3;
    a[1] = 7;
    a[2] = 8;
    a[3] = 10;
    a[4] = 5;

    //now printing the array's value
    cout<<a[4]<<endl<<endl; //accessing the value of array at index 4


    cout<<"-------------------------------------------------------"<<endl;

    //Using for loop for acessing the elements of array.

    for(int i = 0; i<5; i++){
        cout<<"The value at index "<<i<<" is "<<a[i]<<endl;
    }
}


//remeber that array index starts from 0 only.