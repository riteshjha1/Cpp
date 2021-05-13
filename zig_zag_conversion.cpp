#include<iostream>
using namespace std;

string convert(string s, int numRows) {
        
       int len=s.length();
       int step=2*numRows-2;
       string result="";
       if(len<=numRows || numRows==1)
            return s;
        else{
            for(int i=0;i<numRows;i++){
                for(int j=i;j<len;j+=step){
                    result.push_back(s[j]);
                if (i != 0 && i != numRows - 1 && ((j + step) - (2 * i)) < s.length())
                    result.push_back(s[(j + step) - (2 * i)]);
                    }
            }
                return result;
             }
            }
int main(){
    string Question , ans  ;
    int r;
    cout<<"ENTER A STRING AND NO OF ROWS : ";
    cin>>Question>>r;
    
    ans=convert(Question ,r);
    cout<<"THE ZIGZAG CONVERTED ANSWER IS :"<< ans;
    return 0;
}