  #include<bits/stdc++.h>

    using namespace std;

    int main(){
        int x,y;


        cin>>x;
        cout<<x<<endl;
        cout<<x/100 << " nota(s) de R$ 100,00\n";
        y=x%100;
        cout<<y/50 << " nota(s) de R$ 50,00\n";
        y=y%50;
        cout<<y/20 << " nota(s) de R$ 20,00\n";
        y=y%20;
        cout<<y/10 << " nota(s) de R$ 10,00\n";
        y=y%10;
        cout<<y/5 << " nota(s) de R$ 5,00\n";
         y=y%5;

        cout<<y/2 << " nota(s) de R$ 2,00\n";
        y=y%2;
        cout<<y/1 << " nota(s) de R$ 1,00\n";
        return 0;
    }


