  #include<bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){

    int x,y;
    float z,t;

    cin >> x>>y;
    if(x==1){
        z=4.00;
    }else if(x==2){
        z=4.50;
    }else if(x==3){
    z=5.00;
    }else if(x==4){
        z=2.00;
    }else if(x==5){
        z=1.50;
    }
    t=z*y;
        cout<<fixed;

    cout<<"Total: R$ "<<setprecision(2)<<t<<endl;


    return 0;
}

