#include <iostream>
using namespace std;

int main()
{
    int car;
    int carmodel;

    cout << "Hur gammal är din bil?" << endl;
    cin >> car;
    cout << "Vilken årsmodell är din bil?" << endl;
    cin >> carmodel;
    cout << "Din bil är från år: " << carmodel << endl;

    if (car >= 25)
    {
        cout << "Du ska ha Veteranförsäkring!" << endl;
    }
    else if (car > 5)
    {
        cout << "Du ska ha helförsäkring!" << endl;
    }
    else
    {
        cout << "Du ska ha halvförsäkring!" << endl;
    }
    return 0;
}
