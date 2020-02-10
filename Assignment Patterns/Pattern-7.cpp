#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sp =n +2;
    int a = sp-1, a1=1;
    n -=2;
    while(n--){
        int sp1 = sp;
        while(sp1--){
            if(sp1 >=a || sp1 < a1)
                cout<<"*"<<"  ";
            else
                cout<<"   ";
        }
        cout<<endl;
        a--;
        a1++;
    }
    return 0;
}