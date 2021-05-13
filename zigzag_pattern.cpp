 #include<iostream>
 using namespace std;
 void pattern(int n){
     for(int i=1;i<=5;i++){
         for(int j=1;j<=n;j++){
             if((i+j)%4==0 || i==2 && j%4==0 || i==4 && j%2==0) 
                 cout<<" * ";
            else
                cout<<"   ";
         }
         cout<<endl;
     }

 }
 int main(){
     int n;
     cout<<"ENTER A NUMBER :";
     cin>>n;
     pattern(n);
     return 0;
 }