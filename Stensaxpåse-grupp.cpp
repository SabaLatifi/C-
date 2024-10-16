#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



void spel()
{
    string val[] = {"Sten", "sax", "påse"};

    srand(time(0));

    int poang_spelare = 0, poang_dator = 0;
   
    while (poang_spelare < 3 && poang_dator < 3)
    {
        int val_dator =rand() %3;
        int val_spelare;
        cout << "sten(0), sax(1) eller påse(2)? - Markera 4 ifall du vill avbryta spelet" << endl;
        cin >> val_spelare;

        if (val_spelare == 4)
        {
            cout << "Du har avbrutit spelet" << endl;
            break;
        }

        if (val_spelare > 2)
        {
            cout << "Fel inmatning. Försök igen!" << endl;
            break;
        }

        if (val_spelare == val_dator)
        {
            cout << "Ni har valt lika. Försök igen" << endl;
            cout << "Ni valde " << val[val_dator] << endl;
        }

        else if ((val_spelare == 0 && val_dator == 1) ||
                 (val_spelare == 1 && val_dator == 2) ||
                 (val_spelare == 2 && val_dator == 0))
        {
            cout << "Du vann!" << endl;
            cout << "Datorn valde " << val[val_dator] <<" " <<val_dator<< endl;
            poang_spelare++;
        }
        else
        {
            cout << "Datorn vann! Datorn valde " << val[val_dator] << " " << val_dator << endl;
            poang_dator++;
        }
    }

    if (poang_spelare == 3)
    {
        cout << "Grattis. Du vann spelet med: " << poang_spelare << " antal poäng" << endl;  
    }
    else if(poang_dator == 3)
    {
        cout << "Datorn vann spelet med: " << poang_dator << " antal poäng" << endl;
    
    }

    
}

int main()
{
    int spela_igen;
    do 
    {
        spel();
        cout << "Vill du spela igen? - Markera med 1" << endl;
        cin >> spela_igen;
    }

    while (spela_igen == 1);

cout <<"Spelet är över! Tack för ditt deltagande." << endl;
return 0;
}
