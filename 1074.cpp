
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, a;
    cin >> x;
    for(int i = 0; i < x; i++){
            cin >> a;
            if(a>0){
                if(a%2==0){
                    cout<<"EVEN POSITIVE"<<endl;
                }else{
                cout<<"ODD POSITIVE"<<endl;
                }
            }else if(a==0){
                cout<<"NULL"<<endl;
            }else if(a<0){
                if(a%2==0){
                    cout<<"EVEN NEGATIVE"<<endl;
                }else{
                cout<<"ODD NEGATIVE"<<endl;
                }
            }
    }


    return 0;
}



