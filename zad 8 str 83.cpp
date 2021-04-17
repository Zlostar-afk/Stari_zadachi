#include <iostream>

using namespace std;

int main()
{
    int mounth ;
    int year ;

    cout << "Vuvedi mesec a posle godina i programata shte opredeli kolko dni ima v meseca" << endl;
    cin >> mounth ;
    cin >> year ;

    switch (mounth) {
      case 1:
        cout << "31"; //January
        break;
      case 2:
          if( year % 4 != 0 )
          {
           cout << "28" ;
          }
          else if ( year % 100 == 0 && year % 400 != 0 ){
              cout << "28"; // February
          }
            else {
                cout << "29";
            }

        break;
      case 3:
        cout << "31";
        break;
      case 4:
        cout << "30";
        break;
      case 5:
        cout << "31";
        break;
      case 6:
        cout << "30";
        break;
      case 7:
        cout << "31";
        break;
      case 8:
        cout << "31";
        break;
      case 9:
        cout << "30";
        break;
      case 10:
        cout << "31";
        break;
      case 11:
        cout << "30";
        break;
      case 12:
        cout << "31";
        break;
    }
}
