auto_add_library(hello TYPE STATIC)
auto_add_test(test_libhello SRCS tests/test_hello.cpp DEPENDS hello ${GTEST})