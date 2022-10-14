//print n to 1, sum of n naturals with parameter/func
#include <iostream>
using namespace std;
void ulto(int n){
    if(n==0){
    return;
    }
    cout<<n<<" ";
    ulto(n-1);
}
int sumofN(int n){
    if(n==0)
    return 0;
    return n+sumofN(n-1);
}

int sumofNWP(int n,int &sum){
    if(n==0)
    return sum;
    sum+=n;
    sumofNWP(n-1,sum);
    
    
}
int main() {
    int sum=0;
    ulto(3);
    cout<<"\nsumofN="<<sumofN(10);
    sumofNWP(5,sum);
    cout<<"\nsumofNWP="<<sum;
    return 0;
}