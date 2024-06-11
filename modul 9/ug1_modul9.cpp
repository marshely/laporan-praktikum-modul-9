#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int jumlah_simpul;
    cout << "Silahkan masukkan jumlah simpul : ";
    cin >> jumlah_simpul;
    vector<string> marshelyayuiswanto_2311102073(jumlah_simpul);
    vector<vector<int>> bobot(jumlah_simpul,
                              vector<int>(jumlah_simpul));
    for (int i = 0; i < jumlah_simpul; ++i)
    {
        cout << "Silahkan masukkan nama simpul " << i + 1 << " :   ";
                cin >>
            marshelyayuiswanto_2311102073[i];
    }
    cout << "Silahkan masukkan bobot antar simpul\n";
    for (int i = 0; i < jumlah_simpul; ++i)
    {
        for (int j = 0; j < jumlah_simpul; ++j)
        {
            cout <<  marshelyayuiswanto_2311102073[i] << "-->" <<  marshelyayuiswanto_2311102073[j] << " : ";
            cin >> bobot[i][j];
        }
    }
    cout << "\n\t";
    for (int i = 0; i < jumlah_simpul; ++i)
    {
        cout <<  marshelyayuiswanto_2311102073[i] << "\t";
    }
    cout << "\n";
    for (int i = 0; i < jumlah_simpul; ++i)
    {
        cout <<  marshelyayuiswanto_2311102073[i] << "\t";
        for (int j = 0; j < jumlah_simpul; ++j)
        {
            cout << bobot[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}