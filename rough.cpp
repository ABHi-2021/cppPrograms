#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector <int> v;
    int n;
    cin>>n;
    for(int i = 0 ; i <n;i++){
        int nn;
        cin>>n;
        v.push_back(nn);
    }
    int start=0,beg,end;
    cin>>start;
    cin>>beg>>end;
    v.erase(start);
    v.erase(beg,end);
    cout<<v.size();
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}
