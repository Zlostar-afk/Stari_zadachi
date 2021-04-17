#include <iostream>

using namespace std;

int main()
{
    int m;
    int n ;
    cout << "Vuvedi chislo m i chislo n kato m e po malko ot n i programata shte nameri chislata mejdu dvete koito se delqt na pet" << endl;
 cin >> m;
 cin >> n;
 if (m >= n) cout << "greshka" << endl;
 for (int i=m+1; i<= n - 1 ; i++)
 if (i%5==0) cout <<i<< endl;

}
