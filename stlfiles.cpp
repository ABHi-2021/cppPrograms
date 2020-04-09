#include<iostream>
#include<vector>
#include<iterator>
#include<stdio.h>
#include<list> // this is the header file for list
#include<algorithm> // to use the inbuilt algorithms we need to use the algorithms function
#include<map>
using namespace std;

int main(){
// this is the program about the stl functions that are used in cpp programming like lower & upper bound, pair,map and many more

/* lower bound : - this is a a function that returns a value equal to or greater than the value that is being searched in the vector
upper bound :- this is a function that returns a value greater than the value being searched in the vector
binary search :- we use this to search the value in vector using binary search , this is done in log(n) complexity
NOTE :- we use " greater<int>" function to check the value or sort the value in decreasing order that is in descending order
*/
/* About the STL Libraries :- Standard Template Library is a library. It is one of the most used library used in c++.
1) It separates data and data manipulations, here data structures are called containers and data manipulation is known for algorithms.
2) These two don't interact with each other directly so they use iterators to interact.
3) Here, containers can be of two types sequence :- store in sequence (vector, list, forward list,etc) and associative which are store value as key value pair (map,set, ordered and unordered - sorted and unsorted way).
4) We should use the STL because
*/
vector <int> v{1,2,3,4,5,9,8,7,6,9};
// this is sequence container
int l = v.size();
// vector is a container and containers are accessed by iterators so each vector has its iterators
// iterators are same as pointers
vector <int>::iterator itr = v.begin();
// these iterators return the address the of the pointer pointing
// so we have to use * if we want to use the value

//=======================================================
// list and vector difference is that list is a double linked list and vector is like unlimited array store
// we need to include the header file for list that is list.h
// SYNTAX :- list<int> itr = v.begin();
// list has same functions as vector like : list <int>ls; ls.push_back(10); ls.size(); etc.
// we can use auto in place of data types and list<int>.
//=======================================================

// STL MAPS : Maps , multi-maps, ordered and unordered maps,etc;
// we need to include the header file for maps that is <map>
// for creating a map we need to provide the SYNTAX :- map<key,value> mp;
map <int,int> mp;



// to iterate the map we use the below code

return 0;
}
