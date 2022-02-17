#include "hello/hello.hpp"
#include <iostream>

using namespace std;
using namespace hello;

int main() {
  cout << Hello().hello("world") << endl;
}