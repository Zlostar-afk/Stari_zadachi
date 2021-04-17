
#include <iostream>
using namespace std;

int main() {

    int n;
    int i;
    bool foundElement = false ;
    int proizvedenie = 1;
    cout << "Vuvedi broj chisla mejdu 2 i 40 " << endl;
    cin >> n ;
    if (n<=2 || n>=40)
    {
        cout << "greshka" << endl;
        return 0;
    }

    int arr[n];
        cout << "vuvedi chislata" << endl;

    for(i=0 ; i<n ; i++) {
         cin >> arr[i] ;
   } ;
    for(i=0 ; i<n ; i++)  {

        if(arr[i] % 7 == 0) {
            proizvedenie = proizvedenie * arr[i];
               foundElement = true ;
        }
    } ;
    if (!foundElement ) { cout << "nqma kratni na 7" << endl;
    return 0;
    }
    cout << "proizvedenieto na kratnite chisla na 7 ot zapisanite e " << proizvedenie << endl;

}


