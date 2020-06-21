#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
  std::cout<<"this is a program on vectors in c++"<<endl;
  // VECTOR is a linear data collection but is dynamic in nature that means its size can be changed.
  std::vector<int> v0; /* this is a simple declaration of the vector.
                        this is a vector with a value as null and capacity of zero.
                        after the value of the vector is given and it exceeds the capacity we have to
                        change the memory of the vector that means that the vector increases the size of it
                        by doing this it changes the size of the vector as the double of the previous size
                        of the vector */
  std::vector<int> v1{10 , 20, 30};
                                  // this is a vector with a value in it.
                                  // this vector has a capacity of 3 as the initial capacity.
                                  // therefore when the memory value of the vector increases it
                                  // increases as 3, 6, 12, 24,,,
  std::vector<int> v2(4); // here the vector has vector as the initial capacity blocks as 4 that is.
                          // here we get 4 blocks to save the value initially.
  std::vector<int> v3(5,0); // here there are 5 blocks as the initial capacity with 0 in it .
 // to print the value of the vector we can use the same as in array for eg: v3[1]; here []is used to access it.
for(int i : v3) // this is for each form of for loop
 cout << v3[i]<< endl; // printing all the value of the vector in new line as 0.

 std::vector<string>v4(3,"hello"); // this is a vector with string values to store
 for(int j =0; j < 3 ; j++){
 std::cout << v4[j] << endl;
 /* we can use the relational operators with vectors also they are as follows :
    <, >, >=, <=, !=, == */
}
std::cout << "====================================" << '\n';
  //=========================================================================
  // ========================================================================
  // function pre defined in vector class
  // 1 . push_back();
  // 2 . pop_back();
  // 3 . <vector name>.capacity();
  // 4 . <vector name>.size();
  // 5 . clear();
  // 6 . front();
  // 7 . back();
  // 8 . iterator; // in the next program.
  // =========================================================================
  // =========================================================================
  // 1. push_back(): this is used to enter the value at the end of the vector or dynamic array
  // 2. pop_back(): this is used to delete the element from the end of the vector.
  // 3. capacity(): this tells the capacity or storage space of the vector or the blocks of the vector.
  //                this capacity does not not change even if we pop the elements from the vector.
  // 4. size(): this tells us about the number of elements in the vector.
  // 5. clear(): this clears all the value in the vector i.e. size = 0 but capacity does not change.
  // 6. front(): this returns the value at the beginning of the vector.
  // 7. back(): this returns the value at the last of the vector or the dynamic array.
  //==========================================================================
  std::vector<int> v5;
  std::cout << "this is the size of the vector before "<<v5.size() << '\n';
  cout <<"this is the size of the v5 before" <<v5.size()<<endl;
  cout<<"this is the capacity of the vactor v4 " <<v4.capacity()<<endl;
  // =======================================================================
  std::cout << "====================================" << '\n';
  v5.push_back(10);
  v5.push_back(20);
  v5.push_back(30);
  v5.push_back(40);
  v5.push_back(50);
  v5.push_back(60);
  v5.push_back(70);
  std::cout << "the size of the vetor v5 after is "<<v5.size() << '\n';
  std::cout << "the capacity of the vector v5 after is "<<v5.capacity() << '\n';
  for(int j =0; j < v5.size() ; j++){
  std::cout << v5[j] << endl;
  }
  std::cout << "====================================" << '\n';
  std::cout << "the front of the vector v5 is "<<v5.front() << '\n';
  std::cout << "the last element of the vector v5 is "<<v5.back() << '\n';
  //===========================================================================

  /* vector <int> v;
  cout<<"This is how we sort the vector in cpp"<<endl;
  int n;
  cout<<"Enter the number of variables in the array or vector"<<endl;
  cin>>n;
  for(int i  = 0 ; i < n;i++){
        int nn;
  cin>>nn;
    v.push_back(nn);
  }
  sort(v.begin(),v.end());
  cout<<"The Sorted vector!!!"<<endl;
  for(auto i : v){ // this is the for-each loop with the vectors
    cout<<i<<endl;
  }
  sort(v.begin(),v.end(),greater<int>()); // this is the function how we sort the vector in descending order
  // greater<type> : - is a function that is used with the sort function to sort the vector in descending order
  cout<<"The sorting of the vector in descending order"<<endl;
  for(auto i: v){
    cout<<i<<" ";
  }*/
  //============================================================================

  cout<<"Here is about the vector erase!!!"<<endl;
  // vector erase is used to remove the value from the vector
  // there can be two types of remove from a vector these are either from a position or from a range for that we use erase function
  // the erase function is different from clear function as clear function deletes every value in the vector but the erase function don't delete all the value
  // syntax are v.erase(position); & vector_name.erase(start_pos,end_pos);
  vector <int> v6{1,2,3,4,5,6,7};



 return 0 ;
}
