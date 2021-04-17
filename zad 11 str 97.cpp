#include <iostream>

using namespace std;

int main()
{
    int k = 100;
    int edinici;
    int desetici;
    int stotici;
    int cqlo;

    for (int i = k; i < 1000; i++)
    {
        cqlo = i;

        edinici = cqlo % 10;
        cqlo = cqlo / 10;

        desetici = cqlo % 10;
        cqlo = cqlo / 10;

        stotici = cqlo % 10;


        if (edinici != 0 &&
            desetici != 0 &&
            stotici != 0 &&
            i % edinici == 0 &&
            i % desetici == 0 &&
            i % stotici == 0
            )
        {

            cout << i << endl;
        }
    }


}
