#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a=0;
    cin>>n;
    int val = 2*n -1;
    while(n){
        int a1=a;
        while(a1){
            cout<<"\t";
            a1--;
        }
        a++;
        int v= val;
        while(v--)
            cout<<"*"<<"\t";
        cout<<endl;
        val = val-2;
        n--;
    }
    return 0;
}