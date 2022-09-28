#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y,n;
int cont=0;
int inter=0, gremio=0,emp=0;

while (true){

  cin>>x>>y;

  cout<<"Novo grenal (1-sim 2-nao)"<<endl;

  cont++;
  if(x>y){
    inter++;
  }else if(x==y){
      emp++;
  }else{
      gremio++;
  }
  cin>>n;
  if(n==1){

  continue;
  }
  if(n==2){
    break;
  }


}
cout<<cont<<" grenais"<<endl;
cout<<"Inter:"<<inter<<endl;
cout<<"Gremio:"<<gremio<<endl;
cout<<"Empates:"<<emp<<endl;

if(inter>gremio){
    cout<<"Inter venceu mais"<<endl;
}else if(inter==gremio){
    cout<<"Não houve vencedor"<<endl;

}else{
    cout<<"Gremio venceu mais"<<endl;
}

return 0;

}











