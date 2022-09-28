#include <bits/stdc++.h>
using namespace std;
int main()
{

 int a , n , s = 0;
    cin >> a >> n;
    while(n <= a){
        int temp;
        cin >> temp;
        n = temp;
    }
     for(int i = a , j = 0; j < n ; i++){

        j+=i;
        s++;
    }
    cout << s << endl;



    return 0;
}



