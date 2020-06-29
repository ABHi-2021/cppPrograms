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
 6) iterators have different functions like advanced, begin, difference, prev, next, end
 7) to use iterators we need to include <iterator.h> header file
 8) they are different than pointers as, iterators are super class of pointers or more general form of pointers
 9) syntax : type_of_container<Data_type> :: iterator iterator_name;
 10) the iterators are referencing types that is they point to the memory address of the container
 11) therefore to use the actual value we need to dereference it that is we need to use "*" operator
 12) begin and end functions are also returning the address of the iterator
 */

 vector<int> v{1,2,3,4,5,6};
 vector<int>::iterator ftr = v.begin();
 vector<int>::iterator ltr = v.end();

 // printing the entire vector using the iterators
 vector<int>::iterator i;
 cout<<"The values in the vector using the iterator "<<endl;
 for(i = ftr;i<ltr;i++){
    cout<<*i<<" ";
 }
 cout<<endl;

 // advance function
 // this function is used to iterate the the iterator n times
 vector<int> :: iterator i1= v.begin();
 advance(i1,3);
 cout<<"the value of the advance itrator is = "<< *i1<<endl;

 // using next() to return the new iterator
 //points to 3rd element in the vector
 vector<int>:: iterator itr = next(ftr,3);
 cout<<"The value of the new next iterator = "<<*itr<<endl;

 // using previous function to return the value previous to the iterator position
 // point 2 less
 vector<int> :: iterator itr1 = prev(itr,2);
cout<<"The value of the next previous iterator is = "<<*itr1<<endl;
 return 0;
 }
