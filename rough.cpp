#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iterator>
#include<stdio.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector <int> v;
    int n;
    cin>>n;
    for(int i = 0 ; i <n;i++){
        int nn;
        cin>>nn;
        v.push_back(nn);
    }
    vector<int> :: iterator i = v.begin();
    int a;
    cin>>a;
    v.erase(v.begin()+a);
    int b,c;
    cin>>b>>c;
    v.erase(v.begin()+b,v.begin()+c);
    cout<<v.size()<<endl;
    for(auto g: v){
        cout<<g<<" ";
    }
    return 0;
}
