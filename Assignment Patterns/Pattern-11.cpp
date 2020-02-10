#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int n1 = 2*n -1,i = 0, sp = n-1;
    while(i < n1){
        int j = 0;
        while(j < sp){ cout<<"     "; j++;}
        j = 0;
        while(j < sp+1){cout<<"*    ";j++;}
        if(i < n-1) {sp--;}
        else{sp++;};
        i++;
        cout<<endl;
    }
    return 0;
}