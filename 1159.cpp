

#include <bits/stdc++.h>
using namespace std;
int main()
{


    int x;


    while(true){
            int sum=0;
        cin>>x;
        if(x==0) break;


        for(int j=0; j<5;j++){
        if(x%2 !=0) x=x+1;
          sum+=x;
          x=x+2;

        }

  cout<<sum<<endl;



    }

    return 0;
}









