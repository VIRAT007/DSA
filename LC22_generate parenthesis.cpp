//LC22 Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses. LUV47
#include <bits/stdc++.h>
using namespace std;
vector<string> str;
void generate(string &s,int open,int close){
if(open==0 & close==0)
    str.push_back(s); ;
if(open>0){
    s.push_back('(');
    generate(s,open-1,close);
    s.pop_back();
}
if(close>0){
    if(open<close){
    s.push_back(')');
    generate(s,open,close-1);
    s.pop_back();
        
    }
}

    
}

int main() {
    // Write C++ code here
    string s="";
 generate(s,3,3);
 for(auto it:str)
    cout<<it<<endl;
    return 0;
}