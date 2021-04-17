#include <iostream>
using namespace std;

int main() {

    int n;
    int i;
    double sbor = 0;
    double sredno_aritmetichno ;
    cout << "Vuvedi broj chisla mejdu 2 i 25 " << endl;
    cin >> n ;
    if (n<=2 || n>=25)
    {
        cout << "greshka" << endl;
        return 0;
    }

    double arr[n];
        cout << "vuvedi chislata" << endl;

    for(i=0 ; i<n ; i++) {
         cin >> arr[i] ;
    } ;
    for(i=0 ; i<n ; i++)  {

        if(arr[i] > 0)
            sbor = sbor + arr[i];
    } ;
    sredno_aritmetichno = sbor / n ;
    cout << "srednoto aritmetichnoo e " << sredno_aritmetichno << endl;

}
