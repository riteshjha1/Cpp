#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
    string c = "";
    string carry = "0";
    int i = a.size() - 1;
    int j = b.size() - 1;
    
    while(i >= 0 && j >= 0){
        if(a[i] != b[j]){
            if(carry[0] == '0')
                c.insert(0,"1");
            else{
                c.insert(0,"0");
                carry = "1";
            }
        }
        else if(a[i] == b[j] && a[i] == '0'){
            if(carry[0] == '0')
                c.insert(0,"0");
            else{
                c.insert(0,"1");
                carry = "0";  
            }
        }
        else if(a[i] == b[j] && a[i] == '1'){
            if(carry[0] == '0'){
                c.insert(0,"0");
                carry = "1";                 
            }
            else{
                c.insert(0,"1");
                carry = "1";                    
            }

        }              
        i--;
        j--;
    }
    
    while(i >= 0){
        if( a[i] == '1' && carry[0] == '1'){
            c.insert(0,"0");
            carry = "1";   
        }
        else if( a[i] == '0' && carry[0] == '1' ){
            c.insert(0,"1");
            carry = "0";  
        }
        else if(carry[0] == '0'){
            c.insert(0,a,0,i+1);
            break;
        }
        i--;
    }
    
    while(j >= 0){
        if( b[j] == '1' && carry[0] == '1'){
            c.insert(0,"0");
            carry = "1";  
        }
        else if( b[j] == '0' && carry[0] == '1' ){
            c.insert(0,"1");
            carry = "0";  
        }
        else if(carry[0] == '0'){
            c.insert(0,b,0,j+1);
            break;
        }
        j--;
    }
    
    if(carry[0] == '1'){
        c.insert(0,carry);                 
    }
    
    return c;
}
int main(){
    string A,B;
    cout<<"Enter the first string :"<<endl;
    cin>>A;
    cout<<"Enter the second string : "<<endl;
    cin>>B;
    cout<<"Your answer is : "<<addBinary(A,B)<<endl;
    return 0;
}