#include <iostream>

using namespace std;

int main()
{
    int bil;
    cout << "========= BILANGAN =========" <<endl <<endl;
    cout << "Masukkan Bilangan : ";
    cin >> bil;
    if (bil %2 == 0) {
        cout << "Bilangan " << bil <<" adalah bilangan genap" <<endl;
        cout << "----------------------------------------";
    }

    else {
        cout << "Bilangan " <<bil <<" adalah bilangan ganjil" <<endl;
        cout << "----------------------------------------";
    }

    return 0;
}
