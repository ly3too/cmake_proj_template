#include "hello/hello.hpp"

namespace hello {

std::string Hello::hello(std::string name) {
  return std::string("hello ") + name;
}

}