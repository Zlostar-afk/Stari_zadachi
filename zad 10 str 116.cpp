#include <iostream>

using namespace std;

int main()
{
int n;
cout << "Broj na simvoli=" << endl;
cin >> n ;
char arr[n] ;
int broj = 0;
char a;
for (int i=0; i<n; i++){

    cin>> arr [i] ;
    if (arr[i] == 'a') broj++;


}
    cout<< "broj na bukvite 'a' e " << broj ;






    return 0;
}
