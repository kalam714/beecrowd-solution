
#include <bits/stdc++.h>
using namespace std;
int main()
{


int a=0,n;
float x;
float sum=0;

cout<<fixed;
while(true){
    cin>>x;


if(x>=0 && x<=10){
        sum+=x;
        a++;
        if(a==2){
        cout<<"media = "<<setprecision(2)<<sum/2.0<<endl;
        sum=0;
        a=0;


        while(true){
            cin>>n;
        if(n<1 || n>2){
          cout<<"novo calculo (1-sim 2-nao)"<<endl;
        }
        if(n==1 || n==2){
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
                break;

        }
        }


         if(n==2){
          break;
         }

        }

}else{
    cout<<"nota invalida"<<endl;
}



}




    return 0;

}










