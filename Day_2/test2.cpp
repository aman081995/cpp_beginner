#include <iostream>
using namespace std;

int main(){
    int age=28;  //4byte
    char sub = 'n';  //1byte
    float pi=3.14; //4byte
    double distance=3.125468; //8byte
    bool name=true ; //or false and 1byte

    cout << age <<"\n"<< sub <<"\n"<< pi<<"\n"<<  distance<<"\n" <<name <<endl;
    
    return 0;
    }