#include<bits/stdc++.h>
using namespace std;

int main(){
    int val,a=1;
    cin>>val;
    int st=val;
    while(val){
        int v = st;
        while(v){
            if(v == a)
                cout<<"*"<<"\t";
            else
                cout<<v<<"\t";
            v--;
        }
        val--;
        a++;
        cout<<endl;
    }
    return 0;
}