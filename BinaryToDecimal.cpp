#include<bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n){
    int digit,x=1,ans=0;
    while(n>0){
        digit=n%10;
        ans+=digit*x;
        x*=2;
        n=n/10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<BinaryToDecimal(n)<<endl;


}