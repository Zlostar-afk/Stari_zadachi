#include <iostream>

using namespace std;

int main()
{
    int n;
    double arr[10] ,x;
    int i;
    cout << "Vuvedi broj chisla mejdu 1 i 11" << endl;
    cin >> n ;
    if (n<=1 || n>=11) {
        cout << "greshka" << endl;
        return 0; }
     cout << "Vuvedi chislo za sryvnenie" << endl;
    cin >> x ;
      cout << "Vuvedi chisla" << endl;
    for(i=0; i<n;i++) cin >> arr[i] ;
    i = 0;
    while ((arr[i]!=x) && (i < n)) i++ ;
    if ( arr[i] == x )
        cout << "YES" << endl;
    else cout << "NO" << endl;
       return 0;
}
