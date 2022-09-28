#include<bits/stdc++.h>
using namespace std;
    int main(){

       int a,b,c;
       cin>>a>>b;
       if(a>b){
        c=24-(a-b);
       cout<<"O JOGO DUROU "<<c<<" HORA(S)"<<endl;
       }else if(a<b){
        c=b-a;
       cout<<"O JOGO DUROU "<<c<<" HORA(S)"<<endl;
       }else if(a==b){
           cout<<"O JOGO DUROU "<<24<<" HORA(S)"<<endl;
       }


        return 0;
    }

