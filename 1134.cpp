
#include <bits/stdc++.h>
using namespace std;
int main()
{

   int x;
   int al=0,gas=0,die=0;
   while(true){
    cin>>x;
    if(x<0 || x>=5){

    continue;
    }else{

     if(x==1) al++;
     if(x==2) gas++;
     if(x==3) die++;
     if(x==4) break;



    }

   }
   cout<<"MUITO OBRIGADO"<<endl;
   cout<<"Alcool: "<<al<<endl;
   cout<<"Gasolina: "<<gas<<endl;
   cout<<"Diesel: "<<die<<endl;



    return 0;

}









