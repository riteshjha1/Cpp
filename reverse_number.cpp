#include<iostream>
using namespace std;
    int main(){
       int x;
        cout<<"ENTER A NUMBER :";
        cin>>x;
        
        if(x>INT_MAX || x<INT_MIN)
        return 0;
        int type=0;
        int number=0;
        
        if(x<0){
             type=1;
             x=abs(x);
        }
        
        while(x>0)
        {
            int digit=x%10;
            number=number*10+digit;
            x=x/10;
        }
        
        if(type==1)
            cout<<-number;
        else
            cout<<number;
    return 0;
        
    }
