#include<iostream>
using namespace std;

int main(){
    
    int *array;
    array = new int[5];
    array[0] = 10;
    array[1] = 20;
    array[2] = 20;
    // cout<<array[0]<<endl;
    cout<<&array[0]<<endl;
    cout<<&array[1]<<endl;
    // free(&array[0]);
    free(&array);
    cout<<&array[0]<<endl;
    cout<<&array[1]<<endl;
    // cout<<array[0]<<endl;
    // cout<<array[1]<<endl;
    cout<<endl;


    return 0;
}