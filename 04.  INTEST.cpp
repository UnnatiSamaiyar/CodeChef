#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin>>N>>K;
    int count=0;
    
    for(int i=0; i<N; i++){
        int a;
        cin>>a;
        if(a%K==0) count++;
    }
    cout<<count;
}
