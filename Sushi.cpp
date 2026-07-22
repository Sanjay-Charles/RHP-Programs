#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int m1[a], m2[b];

    for(int i = 0; i < a; i++) {
        cin >> m1[i];
    }

    for(int j = 0; j < b; j++) {
        cin >> m2[j];
    }

    int c = 0;

    sort(m1, m1 + a);
    sort(m2, m2 + b);

    int i = a - 1;
    int j = b - 1;

    while(i >= 0 && j >= 0) {
        if(m2[j] <= 2 * m1[i]) {
            c++;
            i--;
            j--;
        } else {
            j--;
        }
    }

    cout << c << endl;
    return 0;
}
