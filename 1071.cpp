
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,n2, i,sum=0;
    cin>>n>>n2;

    if(n>=n2){

        for(i=n2+1;i<n;i++){

            if(i%2 !=0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
     if(n<n2){
        for(i=n+1;i<n2;i++){
            if(i%2 !=0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
