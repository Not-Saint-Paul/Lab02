/************************************
 * Автор: Станковский П.А.          *
 * Дата: 03.10.2023                 *
 * Название: Shitcode Lab2 v2       *
 * https://onlinegdb.com/21DrvpiX0_ *
 ************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double E = 210, qoefPuas = 0.33, L = 50, dNull = 9.6, d = 1, k;

    do {
        k = (M_PI * E * (pow(dNull, 4) - pow(d, 4)))/(55.5 * (1 + qoefPuas) * L);

        cout.precision(7);
        cout << "d = " << d << "  k = " << k << endl;

        if (d < 7) {
            d += 2;
        } else {
            d += 0.5;
        }  } while (d <= 9.5)

    return 0;
}
