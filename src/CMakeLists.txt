
#a.cpp
#b.cpp
#c.cpp
#test_impl.cpp
#test_impl.hpp

target_sources( ${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR}/test.cpp
  ${CMAKE_CURRENT_LIST_DIR}/test_impl.cpp ${CMAKE_CURRENT_LIST_DIR}/test_impl.hpp)

