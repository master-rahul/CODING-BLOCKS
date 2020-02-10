#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int n1 = 2*n -1, i = 1, j = 1,k=1;
    while(i <= n1){
        if(i < n){
            int l = 0;
            while(l<j){
                if(l%2 == 0 ){cout<<k<<"  ";}
                else{cout<<"*  ";}
                l++;
            }
            k++;
            j+=2;
        }
        else{
            int l = 0;
            while(l<j){
                if(l%2 == 0 ){cout<<k<<"  ";}
                else{cout<<"*  ";}
                l++;
            }
            k--;
            j-=2;
        }
        cout<<endl;
        i++;
    }
    return 0;
}