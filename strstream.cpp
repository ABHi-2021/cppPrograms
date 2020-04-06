# include <iostream>
# include <sstream>// above is the header file to include string stream in the program
#include<String.h>
#include<stdio.h>
using namespace std;

int main(){
cout<<"This is the program for string stream in c++ programs"<<endl;
/*
1) the string stream is used to change the string in any data type and other data types like int to string
2) they are basically the stream
3) we use >> to read from the string stream object
4) we use << to write the value in the string stream
5) we create the object of the string stream to use the functions of the string stream
6) we use the inbuilt function clear() to clear the value in the string stream
7) we use "stringstream s(str);" - to break the string into various values in the string stream
*/

cout << "Enter the value of the integer "<<endl;
int input;
cin>>input;
cout <<"here is the int value"<<input<<endl;
stringstream sso;
string str;
sso<<input; // here we have written the value of the integer in the string stream
sso >> str; // here we have read from the string stream and added the converted value to the string variable str
cout<<"Integer value is here "<<input+2<<endl;
cout<<"String value is here" <<str+"4"<<endl;

string str1 = "44";
stringstream sso1;
sso1 << str1; // string value given in the string stream
int input1;
sso1>>input1; // string stream value is given in the integer variable
cout<< str1+"2"<< endl;
cout<< input1+2<< endl;


/*
we can use peek() to see the next element in the input stream
1) we can use the string stream as the below code
*/

cout<<"A new way of string stream values"<<endl;
string sr = "23,4,56";
stringstream ss(sr); // here we have broke down the string
char a;
int b,c,d;
ss>>b>>a>>c>>a>>d; // here the values are given as same as the stream and are stored in the variables
cout<<b<<endl<<c<<endl<<d<<endl<<a<<endl;

return 0 ;
}
