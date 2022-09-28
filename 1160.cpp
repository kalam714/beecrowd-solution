

#include <bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    int p,p1;
    float g,g1;
    int diff;
   cin>>n;

    for(int i=0;i<n;i++){

      cin>>p>>p1;
        cin>>g>>g1;

      int cnt=0;
        while(p<=p1){

         p=p+((p*g)/100);
         p1=p1+((p1*g1)/100);

         cnt++;
         if(cnt > 100){
            cout<<"Mais de 1 seculo."<<endl;
            break;
         }



        }
 if(cnt <=100) cout<<cnt<<" anos."<<endl;





    }





    return 0;
}










