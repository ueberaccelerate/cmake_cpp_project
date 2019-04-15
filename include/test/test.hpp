#ifndef TEST_HPP
#define TEST_HPP

#include <memory>

namespace test::core {
class Test {
  public:
    Test();
    int get() const;
    ~Test();
  private:
    class Impl;
    std::unique_ptr<Impl> impl_;
};
}
#endif /* TEST_HPP */
