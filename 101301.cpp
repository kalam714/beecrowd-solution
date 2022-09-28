#include<bits/stdc++.h>

    using namespace std;
    int main(){
         float n1,n2,n3,n4;
         float avg;
         cin>>n1>>n2>>n3>>n4;
         avg=(n1*2+n2*3+n3*4+n4*1)/10;
         cout<<fixed;
         cout<<"Media: "<<setprecision(1)<<avg<<endl;
         if(avg>=7.0 ){
            cout<<"Aluno aprovado."<<endl;
         }else if(avg>=5.0 && avg<=6.9){
             float n5,avg2;
             cin>>n5;
             avg2=(avg+n5)/2;
            cout<<"Aluno em exame."<<endl;
            cout<<"Nota do exame."<<endl;
            if(avg2<=5.0){
              cout<<"Aluno aprovado."<<endl;
            }else if(avg2 >=4.9){
              cout<<"Aluno reprovado."<<endl;
            }
            cout<<"Media final: "<<setprecision(1)<<avg2<<endl;

         }else if(avg>5.0){
        cout<<"Aluno reprovado."<<endl;

         }
        return 0;
    }
