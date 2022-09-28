

#include <bits/stdc++.h>
using namespace std;
int main()
{


    int n,x,y;
    cin>>n;

    for(int i = 1;i <=n;i++){
        cin>>x>>y;
        int sum=0;


        for(int j=0; j<y;j++){
        if(x%2==0) x=x+1;
          sum+=x;
          x=x+2;

        }



        cout<<sum<<endl;

    }
    return 0;
}








