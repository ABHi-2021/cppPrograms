#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    vector<int> v(n);
    for(auto i : v){
        int nn;
        cin>>nn;
        v.push_back(nn);
    }

    for(auto i:v){
        cout<<&i<<endl;
    }
    return 0;
}
