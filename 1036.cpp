
  #include<bits/stdc++.h>
#include <math.h>

    using namespace std;

    int main(){
        double a,b,c,d,r1,r2;


        cin>>a>>b>>c;
        d=pow(b,2)-4*a*c;

        if(!a==0 && d>0 ){
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);

        cout<<fixed;

       cout<<"R1 = "<<setprecision(5)<< r1<<endl;
       cout<<"R2 = "<<setprecision(5)<< r2<<endl;


        }else{
        cout<<"Impossivel calcular"<<endl;
        }


        return 0;
    }



