#include <iostream>
using namespace std;

int main()
{
    int bilMil;
    float bilLiter = 2158.5;

    cout << "Vad är bilens milantal idag?: ";
    cin >> bilMil;
    cout << "Vad var bilens milantal förra året?: ";
    cin >> bilMil;

    cout << "" << endl;

    cout << "Antal körda mil: " << bilMil << endl;
    cout << "Antal liter bensin: " << bilLiter << endl;
    cout << "Förbrukning per mil: " << bilLiter / bilMil << endl;

    return 0;
}
