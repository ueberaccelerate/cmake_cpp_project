#include <test/test.hpp>

#include "test_impl.hpp"


namespace test::core {
    
    Test::Test() : impl_(std::make_unique<Test::Impl>()) {
        
    }
    
    int Test::get() const {
        return impl_->get();
    }
    
    Test::~Test() = default;
}
