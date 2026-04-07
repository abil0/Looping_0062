#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int x;
    cout << "perulangan for" << endl;

    for (int i = 0; i <= 4; i++) {
        cout << "Teknologi informasi UMY" << endl;
    }
    cout << endl;

    srand(time(0));
    int x = rand() % 10;
    cout << "angka acak: " << x << endl;

    for (int i = 1; i <= x; i++) {
        cout << i << endl;
    }
}