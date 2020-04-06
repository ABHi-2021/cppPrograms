#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

int main() {
cout<<"This is the rough c++ program"<<endl;
string str = "Hello this is Abhishek Tripathi!!!";
stringstream sso (str);
vector <string> v;
string temp;
while(sso>>temp){
    v.push_back(temp);
}
int l = v.size();
for(int i = 0; i<l;i++){
 cout<<v[i]<<endl;
}

int a =44;
sso<<a;
string s;
sso>>s;
cout<<"This is the string form of the number!!!"<<s<<endl;
    return 0;
}
