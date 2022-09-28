
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int cnt=0,sum=0;
    while(true){
        cin>>n;
        if(n<0) break;
        cnt++;
        sum+=n;

    }
    cout<<fixed;
    cout<<setprecision(2)<<(float) sum/(float) cnt<<endl;
    return 0;
}





