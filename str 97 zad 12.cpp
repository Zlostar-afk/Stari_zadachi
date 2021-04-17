#include <iostream>

#include <iostream>

using namespace std;

int main()
{
    int sborOtchisla = 0;
    int k = 1000;
    for (int i = k; i <= 9999; i++)
    {
        sborOtchisla = 0;
        //1234
        int calo = i;

        int ostatyk = calo % 10;
        sborOtchisla = sborOtchisla + ostatyk;//4
        calo = calo / 10; //123

        ostatyk = calo % 10; //3
        sborOtchisla = sborOtchisla + ostatyk;//7
        calo = calo / 10; //12


        ostatyk = calo % 10; //2
        calo = calo / 10; //1
        sborOtchisla = sborOtchisla + ostatyk;//9

        ostatyk = calo % 10; //1

        sborOtchisla = sborOtchisla + ostatyk;//10


        if (
            (9 < sborOtchisla) &&
            (sborOtchisla  < 100) &&
            ( sborOtchisla % 2 == 0)
          )
        {
            cout << i << endl;
        }


    }



}
