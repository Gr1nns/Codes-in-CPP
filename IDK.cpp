#include<iostream>
using namespace std;
int main() {
    int A[25], B[25], C[25]; 
    int a = 0, b = 0, c = 0;
    int q = 0;
    int sp = 0;
    int mad = 0;
    int sa = 0;
    int pm40 = 0;

    while (q < 25) {
        cout << "Digite a idade da pessoa " << q + 1 << ": ";
        cin >> A[a];
        if (A[a] > 50) {
            sp++;
        }
        a++;
        q++;
    }

    q = 0;
    while (q < 25) {
        cout << "Digite a altura (em cm) da pessoa " << q + 1 << ": ";
        cin >> B[b];
        if (A[q] >= 10 && A[q] <= 20) {
            sa += B[b];
            mad++;
        }
        b++;
        q++;
    }

    q = 0;
    while (q < 25) {
        cout << "Digite o peso (em kg) da pessoa " << q + 1 << ": ";
        cin >> C[c];
        if (C[c] < 40) {
            pm40++;
        }
        c++;
        q++;
    }

    float mas = 0;
    if (mad > 0) {
        mas = sa / (float)mad;
    }
    float ppm40 = (pm40 * 100.0) / 25;

    cout << "\nQuantidade de pessoas com mais de 50 anos: " << sp << endl;
    cout << "Media das alturas das pessoas entre 10 e 20 anos: " << mas << " cm" << endl;
    cout << "Percentual de pessoas com peso inferior a 40kg: " << ppm40 << "%" << endl;

    return 0;
}
