#include<iostream>
#include<string>
#include<sstream>
/*
1) we use #include<string.h> if we have to use the c libraries of the string
2) we use stream to convert string to integer and vice versas
*/
/* About the sstream :
The following operators/functions are commonly used here

Operator >> Extracts formatted data.
Operator << Inserts formatted data.
Method str() Gets the contents of underlying string device object.
Method str(string) Sets the contents of underlying string device object.
Its header file is sstream.
One common use of this class is to parse comma-separated integers from a string(e.g., "23,4,56").
this library allows us to use
1) istring stream - input string stream
2) ostring stream - ouput string stream
3) string string - allow us to use both string anf string functions
*/

using namespace std;

int main(){
cout<< "This is a program for string streams in cpp"<<endl;
cout<<"Enter an Integer value"<< endl;
int input;
cin>> input; // this is having a interger value

stringstream sso;
sso >>

return 0;
}
