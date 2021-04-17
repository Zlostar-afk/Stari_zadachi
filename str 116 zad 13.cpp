#include <iostream>
using namespace std;

int main() {

    int n;
    bool foundElemen = false ; 
    int i;
    int poziciq=0;
    int x;
    cout << "Vuvedi broj chisla mejdu 1 i 36 " << endl;
    cin >> n ;
    if (n<=1 || n>=36)
    {
        cout << "greshka" << endl;
        return 0;
    }
    double arr[n];
        cout << "vuvedi chislata" << endl;

    for(i=0 ; i<n ; i++) {
         cin >> arr[i] ;
    }
        cout << "vuvedi chislo za sravnqvane" << endl;
        cin >> x ;


    for(i=0 ; i<n ; i++) {
    poziciq ++ ;
    if (arr[i]== x ) 
    {
		cout << "poziciqta e:" << poziciq << endl;
		foundElemen = true;	
    }
   
    }
    if (!foundElemen )  cout << "nqma takova v redicata" << endl;
    return 0;
}
