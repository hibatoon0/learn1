#include <iostream>
using namespace std;
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int N;
    cin >> N;
    for (int i=0; i < N; i++){
        long long a, b;
        cin >> a >> b;
        cout << a + b << "\n";
    }
    return 0;
}