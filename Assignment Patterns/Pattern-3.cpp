#include<bits/stdc++.h>
using namespace std;

int main(){
    int val;
    cin>>val;
    int a = 1;
    while(val--){
        int v = val;
        while(v--){
            cout<<"\t";
        }
        int a1= a;
        while(a1--){
            if(a1%2 ==0)
                cout<<"*"<<"\t";
            else
                cout<<"!"<<"\t";
        }
        a +=2;
        cout<<endl;
    }
    return 0;
}