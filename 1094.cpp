
#include<bits/stdc++.h>
using namespace std;
    int main(){

     int a,b,i;
     int coelhos=0,ratos=0,sapos=0;
     int cobaias;
     char c;
     cin>>a;

     for(i=0;i<a;i++){
        cin>>b>>c;
        if(c=='C'){
           coelhos+=b;
        }else if(c=='R'){
            ratos+=b;
        }else if(c=='S'){
            sapos+=b;
        }

     }
     cobaias=coelhos+ratos+sapos;
     cout<<"Total: "<<cobaias<<" cobaias"<<endl;
     cout<<"Total de coelhos: "<<coelhos<<endl;
     cout<<"Total de ratos: "<<ratos<<endl;
     cout<<"Total de sapos: "<<sapos<<endl;
     cout<<fixed;
     cout<<"Percentual de coelhos: "<<setprecision(2)<<(coelhos*100.0)/cobaias<<" %"<<endl;
     cout<<"Percentual de ratos: "<<setprecision(2)<<(ratos*100.0)/cobaias<<" %"<<endl;
     cout<<"Percentual de sapos: "<<setprecision(2)<<(sapos*100.0)/cobaias<<" %"<<endl;



        return 0;
    }

