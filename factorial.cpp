#include<iostream>
using namespace std ;
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;

}

int main()
{
    int n;
    cout<<"ENTER A NUMBER :";
    cin>>n;

    cout<<"FACTORIAL OF : " <<n <<" is " <<fact(n);
    return 0;


}