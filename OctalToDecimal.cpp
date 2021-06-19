#include<bits/stdc++.h>
using namespace std;

int octaltobinary(int n){
    int i=1;
    int ans=0;
    while(n>0){
        int j=0;
        j=n%10;
        ans+=i*j;
        i*=8;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<octaltobinary(n)<<endl;
    return 0;
}