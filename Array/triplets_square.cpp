#include <bits/stdc++.h>
using namespace std;
 
// function to ind number of
// Triplets 1 <= a <= b<= c <= n,
// Such that a^2 + b^2 = c^2
int Triplets(int n)
{
    // to store required answer
    int ans = 0;
 
    // run nested loops for first two numbers.
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            int x = i * i + j * j;
 
            // third number
            int y = sqrt(x);
 
            // check if third number is perfect
            // square and less than n
            if (y * y == x && y <= n)
                ++ans;
        }
    }
 
    return ans;
}
 
// Driver code
int main()
{
 
    int n = 10;
 
    // function call
    cout << Triplets(n);
 
    return 0;
}