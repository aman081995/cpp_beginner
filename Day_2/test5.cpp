#include <iostream>

using namespace std;
//Arthematic Operators
int main(){

    int a=9,b=6;
    
    //Arthematic Operators
    cout<<"Arthematic Operators are ----------- "<<endl;
    cout << "Sum :- "<< (a+b) <<endl;
    cout << "Subtraction :- "<< (a-b) <<endl;
    cout << "Product :- "<< (a*b) <<endl;
    cout << "division :- "<< (a/b) <<endl;
    cout << "division with float :- "<< (a/(float)b) <<endl;
    cout << "Modulo :- "<< (a%b) <<endl;
//Relation Operator are < , <= , > , >= , == , != give output always true or false
    int c=20,d=30;
    cout <<"Relation Operators are -------------"<<endl;
    cout << "c < d :- " << (c < d) << endl;
    cout << "c <= d :- " << (c <= d) << endl;
    cout << "c > d :- " << (c > d) << endl;
    cout << "c >= d :- " << (c >= d) << endl;
    cout << "c== d :- " << (c == d) << endl;
    cout << "c != d :- " << (c != d) << endl;

//Logical operator or ||,and && and not ! 
   

    return 0;
}