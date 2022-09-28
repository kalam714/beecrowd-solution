
#include <bits/stdc++.h>
using namespace std;
int main()
{


    int x, y, aux,sum = 0;
    cin>>x>>y;


                if(x > y){
                     aux = x;
                     x = y;
                     y = aux;
                }

                for(int i = x; i <=y; i++){
                       if(i%13 != 0) sum += i;
                }
                cout << sum << endl;


    return 0;

}







