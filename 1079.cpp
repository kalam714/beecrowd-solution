
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    float a,b,c,avg;

    cin >> x;
    cout<<fixed;
    for(int i = 0; i < x; i++){
           cin>>a>>b>>c;
           avg=(a*2+b*3+c*5)/10;
           cout<<setprecision(1)<<avg<<endl;
    }


    return 0;
}


