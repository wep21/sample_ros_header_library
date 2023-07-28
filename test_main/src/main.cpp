#include <iostream>

#include "test_header_library/test_header_library.hpp"

int main()
{
  geometry_msgs::msg::Transform t;
  auto et = tf2::transformToEigen(t);
  std::cout << et.matrix() << std::endl;
  return 0;
}
