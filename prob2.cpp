#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        long long maxv = std::max({a, b, c});
        long long minv = std:: min({a, b, c});
        long long sum = a + b + c;
        long long mid = sum - maxv - minv;
        if (maxv > minv + mid){
            maxv = minv + mid;
        }
        cout << maxv - minv << "\n";
    }
    return 0;
}