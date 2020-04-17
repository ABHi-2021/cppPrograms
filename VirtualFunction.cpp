#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    //VIRTUAL FUNCTIONS :
    //These are the functions that are used to implement run time polymorphism in C++.
    //These are the functions that are declared in public and use virtual as the key word
    //We should override the virtual functions in the child class but that is not always needed.
    /*These are the functions that are used so that when we create a pointer to child class and call the functions of child class which are present in parent class also
     these pointers since are declared as parent type start pointing the functions of the parent class therefore to prevent it and point to the child class function we
     created and they can be used.
    */
    /* virtual functions use concept of late and early binding. Early binding means that the pointer points to the functions of the parent class as the memory is not
        allocated therefore the pointer do not know that the address has been changed earlier and therefore it sees for the type of the pointer and finds it as
        parent class type therefore by the concept of early binding it points to the function of the parent class and not the child class.

        in Late binding the functions in parent class are declared using virtual functions therefore we tell that the pointer will be given the address to this function
        at the end. In late binding the memory address is given at the run time of the program and there we use the concept of virtual functions.

        pure virtual functions are used to implement the concept of abstract class therefore we use them, since there is no way like to declare a class abstract therefore
        we use this to tell the compiler that abstract class is this and thus it has no body for the functions.

        Abstract classes are needed so that we can have common functions for the classes that belong to same type like teacher and student, etc.

        we have to override the functions in the child class as the abstract class are inherited therefore we can access the functions of the abstract class therefore to avoid it
        we use this, we use pure virtual functions there fore we cant use them.
         syntax for pure virtual function : virtual void sum()=0; // these are pure virtual function
    */
    /*
        1) we use -> operator to use the functions of the object if we are using pointer to the object.
    */

    class A{
    int f1(){
        cout<<"this is the f1 function from class A "<<endl;
        return 1;}

    virtual int f2(){
    cout<<"this is the f2 function from class A "<<endl;
    return 2;}
    };

    class B: public A{
        int f1(){
        cout<<"this is the f1 function from class B "<<endl;
        return 11;
        }
         int f2(){ // these functions have by default virtual written so we no need to write virtual again... this is because we have declared this function as virtual in the parent class
         cout<<"this is the f2 function from class B "<<endl;
         return 22;
         }
    };
    int main(){
        A *p;
        B b;
        p = &b;
        p->f1(); // static binding or compile time binding
        p->f2();// this is run time or dynamic binding
    return 0;
    }

}
