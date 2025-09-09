
#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long rev = 0; 
        
        while (x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
            
            if (rev > INT_MAX || rev < INT_MIN) {
                return 0;
            }
        }
        
        return (int)rev;
    }
};


int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;  
    cout << sol.reverse(n) << endl;

    return 0;
}