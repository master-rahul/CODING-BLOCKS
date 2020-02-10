#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a=1,j=1;
    cin>>n;
    while(n--){
        
        int v =n;
        while(v--)
            cout<<"\t";
        int a1= a;
        while(a1--){
            if(a1==0 || a1 ==a-1)
                cout<<j<<"\t";
            else
                cout<<"0"<<"\t";
        }
        cout<<endl;
        a+=2;
        j++;
    }
    return 0;
}