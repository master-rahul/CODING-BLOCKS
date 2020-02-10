#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = 0, b = n-1, i =0;
    while(i < n){
        int j  =0;
        while(j <n){
            if(a == j || b == j)
                cout<<"*  ";
            else
                cout<<"   ";
            j++;
        }
        if(i < n/2) { a++; b--;}
        else { a--; b++;}
        cout<<endl;
        i++;
    }

    return 0;
}