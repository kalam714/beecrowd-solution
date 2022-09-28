
#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n,i;
  int x,y;
  cin>>n;
  cout<<fixed;

             for (i=0;i<n;i++){
                cin >> x;
                cin >> y;

                if(y == 0){
                    cout<<"divisao impossivel"<<endl;
                }else{
                 cout<<setprecision(1)<<(float)x/(float)y<<endl;
                }
             }









    return 0;

}









