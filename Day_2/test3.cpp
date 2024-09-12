#include <iostream>
using namespace std;


int main(){

    // Working on type casting
    //There are two type of type casting 
    // 1:- implicit conversion   store high data to low;
    // 2:- Explicit Conversion  store low data to high;
    
    //example
    //implicit Conversion
    float a=32.156; //float 4bytes
    double b=a;    // double 8byte easy typecase from high to low 
    cout << b << endl;

    //but in Explicit Conversion
    float aa=32.154;
//    int bb =aa   //give the errror then using
    int bb=(int)aa;
    cout << bb<<endl; 
    
    
    return 0;
}