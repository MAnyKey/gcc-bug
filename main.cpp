#include <iostream>

#include "test_gcc.hpp"

int main() {
  uint64_t a, s1, s2;
  while (std::cin >> a >> s1 >> s2) {
    std::cout << compare(s1, s2, a) << ' ' << part_cmp(a, s1, s2) << std::endl;
  }
}
