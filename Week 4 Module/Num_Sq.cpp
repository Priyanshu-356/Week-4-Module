#include <iostream>
using namespace std;

int main()
{
    long long A, B;
    long long result = 1;

    cin >> A >> B;

    for (int i = 1; i <= B; i++)
    {
        result = result * A;
    }

    cout << result << endl;

    return 0;
}