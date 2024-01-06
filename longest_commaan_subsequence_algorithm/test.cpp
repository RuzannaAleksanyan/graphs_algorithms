#include <iostream>
#include "my_lcs.h"

int main() {
    std::string s1 = "AGGTAB";
    std::string s2 = "GXTXAYB";
    
    int m = s1.size();
    int n = s2.size();
 
    std::cout << "Length of LCS is " << lcs(s1, s2, m, n);
}
