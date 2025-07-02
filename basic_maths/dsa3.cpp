/* here is the question
* 	check for palindrome
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    string b;
    cout << "Enter a Number := ";
    cin >> a;

    b = to_string(a);
    int c = b.size();
    int d = 0;
    int e = c / 2;

    for (int i = 0; i < e; i++) {
        if (b[i] == b[c - i - 1]) {
            d++;
        }
    }

    if (d == e) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }

    return 0;
}

