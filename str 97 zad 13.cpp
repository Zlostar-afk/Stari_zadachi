#include <iostream>
#include <string>
using namespace std;

void myFunction() {
	std::cout << "I just got executed!";
}

int main()
{
    int hiladi;
    int stotici;
    int desetici;
    int edinici;

    int cailo;

    int k = 1000;
    for (int i = k; i < 10000; i++)
    {
        cailo = i;

        int edinici = cailo % 10;

        cailo = cailo / 10;

        int desetici = cailo % 10;

        cailo = cailo / 10;

        int stotici = cailo % 10;

        cailo = cailo / 10;

        int hiladi = cailo % 10;



        if (
            edinici == desetici || edinici == stotici || edinici == hiladi ||
            desetici == stotici || desetici == hiladi ||
            stotici == hiladi
            )
        {
            cout << i << endl;
        }

    }



}
