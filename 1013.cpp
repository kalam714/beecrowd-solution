#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;


    cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3)
        cout <<n1<<" eh o maior ";

    if(n2 >= n1 && n2 >= n3)
        cout <<n2<<" eh o maior ";

    if(n3 >= n1 && n3 >= n2)
        cout <<n3<<" eh o maior ";

    return 0;
}
