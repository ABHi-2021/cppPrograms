#include<iostream>
#include<vector>
#include<iterator>

using namespace std;
 int main(){
 cout<<"This is the program for iterators"<<endl;
 /* iterators are used to point at the memory address of the containers they are mostly used with sequence of numbers, characters, etc. They are used to
 reduce the complexity and the execution time of the program */
 /* here are few points that will clear more about iterators :
 1) iterators are basic need between algorithms and data structures or containers
 2) they reduce the time and complexity of the program
 3) they are used to traverse through the elements in the container
 4) they are common interface for all the containers type
 5) they make the algorithms independent of the type of container used
 6) iterators have different functions like advanced, begin, difference, previous, next, end
 7) to use iterators we need to include <iterator.h> header file
 8) they are different than pointers as, iterators are super class of pointers or more general form of pointers
 9) syntax : type_of_container<Data_type> :: iterator iterator_name;
 10) the iterators are referencing types that is they point to the memory address of the container
 11) therefore to use the actual value we need to dereference it that is we need to use "*" operator
 */



 return 0;
 }
