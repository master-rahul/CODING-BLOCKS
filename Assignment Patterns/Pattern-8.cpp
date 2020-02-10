#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = n/2, b = n/2;
    int i =0;
    while(i < n){
        int j = 0;
        while(j < n){
            if(a == j || b ==j)
                cout<<"*";
            cout<<"   ";
            j++;
        }        
        if(i < n/2){ a -= 1; b += 1; }
        else{ a +=1; b -= 1; }
        cout<<endl;
        i++;
    }
    return 0;
}