#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int sum=1;
    cin>>n;
   if(n>0 && n<13){

    for(int i=1;i<n;i++){
      sum*=n-i;

    }
    cout<<sum*n<<endl;
   }
    return 0;
}





