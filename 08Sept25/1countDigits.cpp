#include <iostream>
using namespace std;

class Solution {
public:
    int countDigits(int n) {
        int count = 0;
        while (n > 0) {
            n = n / 10;   
            count++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Handle 0 as a special case
    if (n == 0) {
        cout << "Number of digits: 1" << endl;
    } else {
        cout << "Number of digits: " << sol.countDigits(n) << endl;
    }

    return 0;
}