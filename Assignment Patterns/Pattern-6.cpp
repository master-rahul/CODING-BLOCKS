#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,n2;
    cin>>n;
    n2 =n;
    int st = 1, ed = n*n + 1, lo =n*n -1;
    while(n--){
        int n1 = n2 - n; 
        while(n1--)
            cout<<"-";
        int l1 = lo;
        int ed1 = ed;
        while(l1--){
            if(l1 > lo/2 && l1%2 == 0)
                cout<<st++;
            else if(l1 <= lo/2 && l1%2 == 0)
                cout<<ed1++; 
            else
                cout<<"*";
        }
        cout<<endl;
        ed -= n;
        lo -= n2;
    } 
    return 0;
}