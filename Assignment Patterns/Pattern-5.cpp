#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sp=0;
    cin>>n;
    while(n){
        int sp1 = sp;
        while(sp1--)
            cout<<"\t";
        int n1 = n;
        while(n1--)
            cout<<"*"<<"\t";
        sp += 2;
        cout<<endl;
        n--;
    }
    return 0;
}