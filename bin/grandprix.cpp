/**
 * @file grandprix.cpp
 *
 * @version 01.01 2020-10-19
 *
 * @brief https://training.olinfo.it/#/task/grandprix/statement
 *
 * @ingroup grandprix
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

// Includes
#include <bits/stdc++.h>
using namespace std;

// Variabiles
int N, M, tmp, tmp1, tmp2;
vector <int> cars;


// Main code
int main()
{
    // Cncomment the following lines if you want to read/write from files
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Input
    cin >> N >> M;
    cars.resize(N);

    for (size_t i = 0; i < N; ++i)
    {
        cin >> tmp;
        cars[tmp - 1] = i;
    }

    for (size_t i = 0; i < M; ++i) {
        cin >> tmp >> tmp1;
        tmp2 = cars[tmp - 1];
        cars[tmp - 1] = cars[tmp1 - 1];
        cars[tmp1 - 1] = tmp2;
    }

    for (size_t i = 0; i < N; ++i)
        if (cars[i] == 0)
            cout << i + 1 << endl;

    // End
    return 0;
}
