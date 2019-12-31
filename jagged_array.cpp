#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n, b=0,a;
  cout<< "this is the program for jagged array and vectors with dynamic storage";
  cout<<"============================="<<endl;
  std::vector<std::vector<int> > v;
  // here we have taken vactor which accepts input as vector
  cout<< "enter the value of n "<<endl;
  cin>>n;
  for(int i = 0 ; i < n ; i++){
    cout<< "enter the value of the inner vector " << endl;
    cin >> b;
    std::vector<int> temp; // we dont give the size as its a vector
    // this is the vector that is used to take the input and store in other vector named as vector
    for(int j = 0 ; j < b; j++){

      temp.push_back(i);
    }
    v.push_back(temp);

  }
for(int i = 0 ; i < v.size(); i++){
  for(int j =0 ; j < v[i].size(); j++){
    std::cout << " "<<v[i][j]; // output is same as jagged array
  }
  cout<<endl;
}

  return 0;
}
