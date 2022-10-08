// print all permutations of an array using bit manupulation
#include <bits/stdc++.h>
using namespace std;
void printper(vector<int> &v,int n){
    cout<<"here";
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++)
            {
            if(i & (1<<j))
            cout<<v[j]<<" ";
            }
    cout<<endl;
    }
    
}
int main() {
    // Write C++ code here
    vector<int> v;
    int n,tmp;
    cout<<"enter the number of elements\n";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
        cin>>tmp;
        v.push_back(tmp);
    }

    printper(v,v.size());
    return 0;
}