
#include <bits/stdc++.h>
using namespace std;


int main(){
    float a,b,c,d;
    cin >> a;
    cout<<fixed;
    if(a >=0.00 && a<=2000.00){
       cout<<"Isento"<<endl;
    }else if(a>2000.00 && a<=3000.00){
        b=a-2000.0;
        b=b*.08;
        cout<<"R$ "<<setprecision(2)<<b<<endl;
    }
else if(a>3000.00 && a<=4500.00){
        b=a-3000.00;

        d=b*.18+1000.00*.08;
        cout<<"R$ "<<setprecision(2)<<d<<endl;
        }else if(a>4500.00){
            b=a-4500.00;
            d=b*.28+1500*.18+1000*.08;
        cout<<"R$ "<<setprecision(2)<<d<<endl;

        }


return 0;
}

