#include <iostream>

using namespace std;

int main()
{
    int k = 100;
    int edinici;
    int desetici;
    int stotici;
    int cqlo;
    int sborOtChisla;
    int i;
    for( i = k ; i<1000 ; i++){

       sborOtChisla = 0;

       cqlo = i;

       edinici = cqlo % 10;
       cqlo = cqlo / 10;
       sborOtChisla = sborOtChisla + edinici;


       desetici = cqlo % 10;
       cqlo = cqlo / 10;
       sborOtChisla = sborOtChisla + desetici;

       stotici = cqlo % 10;
       sborOtChisla = sborOtChisla + stotici;


        if (sborOtChisla == 1 ||sborOtChisla == 2 ||sborOtChisla == 3 ||sborOtChisla == 5 ||sborOtChisla == 7){
            cout << i << endl;
        }

        if (sborOtChisla % 2 != 0 && sborOtChisla % 3 != 0 && sborOtChisla % 5 != 0 && sborOtChisla % 7 != 0){
            cout  << i <<endl;
        }
    }

}
