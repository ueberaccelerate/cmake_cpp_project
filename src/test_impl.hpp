#ifndef TEST_IMPL_HPP
#define TEST_IMPL_HPP

#include <test/test.hpp>

namespace test::core {

class Test::Impl {
  public:
    Impl();
    
    int get() const;
    
    ~Impl();

};

}

#endif /* TEST_IMPL_HPP */
