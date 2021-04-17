#include <iostream>

using namespace std;

int main()
{
    int n;
    double arr[10];
    int i;
    double sum = 0;
    cout << "Vuvedi broj chisla mejdu 2 i 10 vkluchitelno" << endl;
    cin >> n ;
    if (n<2 || n>10)
    {
        cout << "greshka" << endl;
        return 0;
    }


    cout << "vuvedi chislata" << endl;

    for(i=0 ; i<n ; i++) {
         cin >> arr[i] ;
    }


    for(i=0 ; i<n ; i++)
    {
        if (arr[i]<0)
        {
            sum = sum + arr[i];
        }

    }

    cout <<"sumata e"<< sum<< endl;
}
