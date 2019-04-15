#include "test_impl.hpp"


namespace test::core {
    
    Test::Impl::Impl() {
        
    }
    int Test::Impl::get() const {
        return 42;
    }
    Test::Impl::~Impl() = default;
    
    
}

