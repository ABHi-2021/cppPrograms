#include<iostream>
#include<string> // this is a string header file for string class in cPP but <string.h> is of c programming
//#include<sstring> // this is a string stream header file
// string is a sequence of characters
// last character is always null character
// use string class for the safety of the data
// use character array for the speed of the program
// string class is one of the part of stl libraries
using namespace std;
int main(){
cout<< "This is string and string stream program in cpp"<<"\n";
// to calculate the length of the string we use variable name.size() function
// this is a string program we can also use stream string
// this is a program to simple write the code for string for which we use cin and cout from the std lib

char s[5] = "aman";// we have to give an extra space for null character
/*
we can use string class and assign the values as
1) string s1 = "hello";
2) string s2 = string("hello");
3) string s3 ("hello");
*/
cout << "enter your name"<<endl;
string s1;
cin>>s1;
cout<<s1;
// here in the above code only the first name comes in the s1 object of the string class because the space is considered as exit
/*================================
Various functions in string class are :-
1. assign() - to assign a value to the string object
2. append() - to append the string to the given string
3. insert() - to insert the characters or string in a string or array of characters
4. compare() - compare the index according to the ASCII code, there can be three types of result those are (0 - same,-1- in dictionary order,1 - not in dictionary order)
5. replace() - replaces the characters at the index given
6. erase() - to erase the data in the object
7. size() - to find the length of the array or the string
8. find() - to find the characters or string in a string, it returns the index number of the first occurrence , if its -1 then its not present
9. c_str() - converts to c type of string that is char array
10.rfind() - to find the string from the reverse of the string that is from the last index
==================================
*/

return 0 ;
}
