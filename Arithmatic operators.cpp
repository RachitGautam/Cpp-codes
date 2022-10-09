#include<iostream>
using namespace std;
int main(){
    int a=1,b=3;
    //Arithmatic operators
    //endl or \n= New line character
    cout<<"the value of a+b is "<<a+b<<endl; //addition
    cout<<"the value of a-b is "<<a-b<<endl; //subtraction  
    cout<<"the value of a*b is "<<a*b<<endl; //multiplication
    cout<<"the value of a/b is "<<a/b<<endl; //division
    cout<<"the value of a%b is "<<a%b<<endl; //Modulus operator--produces the remainder of an integer division
    cout<<"the value of a++ is "<<a++<<endl; //post-increment operator//first print the value of a and then add it by 1
    cout<<"the value of a-- is "<<a--<<endl; //post-decrement operator//first print the vlue of a and then subtract it by 1
    cout<<"the value of ++a is "<<++a<<endl; //pre-increment operator//first add value by 1 and then print
    cout<<"the value of --a is "<<--a<<endl; //pre-decrement operator//first subract value by 1 and then print
    return 0;
}

