#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {

    int a = 0;
    int b = static_cast<int>(data.size()) - 1;
    while (a < b){
      if (data[a] + data[b] == sum ) {
        return std::make_pair(a, b);
      }
      else if (data[a] + data[b] < sum){
        a += 1;
      }
      else{
        b -= 1;
      }
    }

    // Tips: для создания пары (pair) используйте функцию std::make_pair

    return std::nullopt;
  }

}  // namespace assignment