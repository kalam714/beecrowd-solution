
#include <bits/stdc++.h>
using namespace std;
int main()
{


    int x, y, aux;
    int sum;



             while(true){

                cin >> x;
                cin >> y;
                if(x <= 0) break;
                if(y <= 0) break;

                if(x > y){
                     aux = x;
                     x = y;
                     y = aux;
                }
                sum = 0;
                for(int i = x; i <= y; i++){
                     cout<<i<<" ";
                    sum += i;

                }
                cout <<"Sum="<<sum<<endl;
              }




    return 0;

}







