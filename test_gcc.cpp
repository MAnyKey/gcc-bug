#include "test_gcc.hpp"

int64_t part_cmp(uint64_t a, uint64_t s1, uint64_t s2)
{
  if (a < s1)
    return -1;
  else
  {
    const uint64_t diff = a - s1;
    if (diff < s2)
      return -1;
    else if (diff > s2)
      return 1;
    else
      return 0;
  }
}

int64_t compare(uint64_t s1, uint64_t s2, uint64_t a)
{
  return -part_cmp(a, s1, s2);
}
