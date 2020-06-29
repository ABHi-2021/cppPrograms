// class and structures are almost same functionality the difference is that data members are private by default in  class
// and in structures the data members are public by default
// class is like a blue print of a object
// main is outside the class with all the functions related to the class inside the class
#include<iostream>
#include<stdio.h>
using namespace std;
class Boxs{ // this is the creation of the class
public:
    int leng ;
    int breadth;

};

int main(){
    Boxs box1;
    Boxs box2;
    // above are the object of the class created

    double area;
    double perimeter;
    // these are the variables that act as local variables

    // box 1 values calculated
    box1.breadth = 5;
    box1.leng=5;
    // accessing the variables of the class through object created for the class

    area = box1.leng*box1.breadth;
    perimeter = 2*(box1.leng+box1.breadth);

    cout<< "The area of the box 1 = " <<area<< endl;
    cout<< "The perimeter of the box 1 = " <<perimeter<< endl;

    // box 2 values calculated
    box2.breadth = 2;
    box2.leng=3;
    area = box2.leng*box2.breadth;
    perimeter = 2*(box2.leng+box2.breadth);


    cout<< "The area of the box 2 = " << area<<endl;
    cout<< "The perimeter of the box 2 = " << perimeter<<endl;
return 0;
}
