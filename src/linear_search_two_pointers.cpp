#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& data, int search_element) const {
    int a = 0;
    int b = static_cast<int>(data.size()) - 1;
    while (a <= b){
      if(data[a] == search_element){
        return a;
      }
      a += 1;
      if(data[b] == search_element){
        return b;
      }
      b -= 1;
    }
    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.

    return std::nullopt;
  }

}  // namespace assignment