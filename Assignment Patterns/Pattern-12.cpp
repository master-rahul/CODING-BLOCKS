#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int n1 = 2*n +1, i =1,sp = n1-2, k =1;
    while(i <= n1){
        int j = 0;
        int v =n;
        while(j < k){cout<<v--<<" ";j++;}
        j= 0;
        while(j < sp){cout<<"  ";j++;}
        j=0;
        if(i == n+1){ v++; k--;}
        while(j < k){cout<<++v<<" "; j++;}
        if(i == n+1){ k++;}
        if(i <= n) {sp-=2; k++;}
        else{sp+=2;k--; }
        cout<<endl;       
        i++;
    }
    return 0;
}