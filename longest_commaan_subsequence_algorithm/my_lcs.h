#ifndef LCS
#define LCS

#include <string>

int max(int a, int b) { 
    return (a > b) ? a : b; 
}

int lcs(std::string X, std::string Y, int m, int n) {
    if(m == 0 || n == 0) {
        return 0;
    }

    if (X[m - 1] == Y[n - 1]) {
		return 1 + lcs(X, Y, m - 1, n - 1);

    }
    return max(lcs(X, Y, m, n - 1),
            lcs(X, Y, m - 1, n));
}

#endif  // LCS
