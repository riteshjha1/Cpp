Find Displacement, Given a long string of route containg north(N), south(S), west(W) and east(E) directions, find the shortest path to reach the final destination. 

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    char route[1000];
    cin.getline(route,1000);
    int x=0;
    int y=0;

    for(int i=0;route[i]!='\0';i++){
        switch(route[i]){
            case 'N':y++;
                    break;
            case 'S':y--;
                    break;
            case 'E':x++;
                    break;
            case 'W':x--;
                    break;
        }
    }
    cout<<"Final X and Y is :"<<x<<","<<y<<endl;

    if(x>=0 and y>=0){
        while(y--)
            cout<<"N";
        while(x--)
            cout<<"E";
    }

    else if(x<0 and y>=0){
         while(y--)
            cout<<"N";
        while(x--)
            cout<<"W";
    }

    else if(x<0 and y<0){
      while(y--)
            cout<<"S";
        while(x--)
            cout<<"W";
    }

    else{
          while(y--)
            cout<<"S";
        while(x--)
            cout<<"E";
    }
	return 0;
}

