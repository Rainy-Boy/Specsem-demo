#include <iostream>
#include <algorithm>

using namespace std;

// 5+4+3+2+1 = 15
int asum(const int &num) {
    int sum = 0;

    // Vajadzētu būt <=
    for (int i = 0; i < num; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int a = 0;

    cout << "Input a positive number: " << endl;
    cin >> a;

    int result = asum(a);
    cout << "The sum of all numbers up to " << a << " is: " << result << endl;

    return 0;
}
