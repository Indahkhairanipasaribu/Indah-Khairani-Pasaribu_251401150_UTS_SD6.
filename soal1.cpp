#include <iostream>
using namespace std;

int main() {
    int arr[2][3][4];
    int hasil[3][4];

    int angka2 = 2;
    int angka3 = 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[0][i][j] = angka2;
            angka2 += 2;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[1][i][j] = angka3;
            angka3 += 3;
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            hasil[i][j] = arr[0][i][j] * arr[1][i][j];
        }
    }

    cout << "hasil Perkalian Layer 1 dan Layer 2:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}