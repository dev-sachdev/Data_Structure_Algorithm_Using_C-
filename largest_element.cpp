// code for finding the largest element from the array.


#include <iostream>
using namespace std;

int smallest(int array[]){

    int largest = INT_MIN;

    for (int i = 0; i<10; i++){
        if (array[i] < Smallest){
            Smallest = array[i];
        }
    }
    return Smallest;

}


int main(){
    int a[10];
    for (int i = 0; i<10; i++){
        cin>>a[i];
    }

    cout<<smallest(a);
    return 0;

}