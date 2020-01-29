# include <iostream>
# include <sstream> /* this is the sstream header file included */
#include<stdio.h>
using namespace std;
int main(){
/* sstream is used to interchange data types for eg, from string to integer and vice versa. */
cout<< "This is the program on sstream";
stringstream strinput; // this is object of the sstream .
cout <<" enter any string"<<endl;
string s; // this is the variable for storing string that is to be entered
cin>>s;
strinput << s; // here we are writing the value of string variable in the sstream object
cout<< s+"2"<<endl;
int i;
strinput >> i; /* this is the reading from the object of the stringstream and converting string to integer*/
cout<<"this is the interger number"<< endl<<i+2<<endl;
return 0 ;
}
