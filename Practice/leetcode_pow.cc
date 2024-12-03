#include <iostream> 
using namespace std; 

int main() {
    double x, n, ans, i;
    cin >> x >> n;
    
    if (n > 0) { 
        for (i =1; i <=n; i++) {
            ans = ans * x; 
        }
        return ans;
    }
    else if( n < 0) {
        for (i = 0; i > n; i--) {
            ans = ans / x;
        }
        return ans;      
    }
        
}
    