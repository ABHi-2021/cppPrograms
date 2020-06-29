// this is a program for creating user defined exception in c++ programs . we are using exception class to create this program
#include<iostream>
#include<exception>
#include<string>
using namespace std;

class OverSpeed : public exception{ // here we are inheriting the exception class so that we can create the user defined exceptions
private:
    int speed;
public:
    const char* what(){ // this is user defined exception and we will throw this exception only
    return "check your car speed!!!\nyour are over speeding!!!\n";
    }
    void getSpeed(){
        cout<<"This is you car speed "<<speed<<endl;
    }
    void setSpeed(int speed){
        this->speed = speed; // this where we are using the this key word to use the instance variable
    }
};

class Car{
    int speed;
public:
    Car(){
    speed =0;
    cout<<"The speed of the car is zero!!!"<<endl;
    }
    void accelarate(){
    for(;;){
            speed +=10;
        cout<<"The speed of the car is ="<<speed<<endl;
        if(speed>=200){
            OverSpeed s;// here we have created the object of the car and called its member functions for checking the exceptions
            s.setSpeed(speed);
            throw s; // here we throw the exception
        }
    }
    }
};
int main(){
Car anilscar;
try{
anilscar.accelarate();
}
catch(OverSpeed s){ // here we receive the exception of type OverSpeed
cout<<s.what()<<endl;
s.getSpeed();
}
return 0;
}

/* if we want to throw any other kind of exceptions then we need to throw empty that is like this ---- throw; and we need to create a catch block that
has no argument like----------- catch(...){} like this ;
*/
