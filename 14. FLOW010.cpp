#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    char ch;
	    cin>>ch;
	    switch(ch){
	        case 'B':
	        case 'b':
	            cout<<"BattleShip"<<endl;
	        case 'C':
	        case 'c':
	            cout<<"Cruiser"<<endl;
	        case 'D':
	        case 'd':
	            cout<<"Destroyer"<<endl;
	        case 'F':
	        case 'f':
	            cout<<"Frigate"<<endl;
	    }
	}
	return 0;
}
