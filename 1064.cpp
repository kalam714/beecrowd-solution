
#include <bits/stdc++.h>
using namespace std;


int main(){
    float num,result=0;
    int i,sum=0;
    for(i=1;i<=6;i++){

        cin>>num;
        if(num>0){
            sum++;
            result+=num;
        }
    }
    cout<<fixed;
    cout<<sum<<" valores positivos"<<endl;
    cout<<setprecision(1)<<result/sum<<endl;


return 0;
}


