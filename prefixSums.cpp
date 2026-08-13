#include <iostream>
#include <vector>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::vector<int> nums = {3,6,7,5,9,8,7,4,0,2,9,3,8,4,7,9,3,2};
    int n = nums.size();
    std::vector<long long> sums(n+1, 0);
    for (int i = 0; i < n; i++){
       sums[i + 1] = sums[i] + nums[i];
    }
    int A = 1, H = 3;
    long long result = sums[H] - sums[A - 1];
    std::cout << "the prefix sum is: " << result;
    return 0;
}