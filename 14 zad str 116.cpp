
#include <iostream>
using namespace std;

int main() {

    int n;
    int i;
    int broj = 0 ;
    int x;
    cout << "Vuvedi broj chisla mejdu 2 i 30 " << endl;
    cin >> n ;
    if (n<=2 || n>=30)
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
        if(arr[i] < 0) broj ++ ;
    } ;

    cout << "Broqt na nechetnite e:" << broj << endl;
    return 0;
}
