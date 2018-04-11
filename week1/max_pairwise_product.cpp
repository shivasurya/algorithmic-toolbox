#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;

int64_t MaxPairwiseProduct(const vector<int64_t>& numbers) {
  int64_t result = 0;
  vector<int64_t> vect = numbers;
  
  std::sort(vect.begin(), vect.end());
  result = vect.at(vect.size() - 1) * vect.at(vect.size() - 2);
  return result;
}

int main() {
    int n;
    cin >> n;
    vector<int64_t> numbers(n);
    for (int64_t i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int64_t result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}
