project(test1)

add_executable(test1 main.cpp)
target_link_libraries(test1 ${TARGET_NAME})
cotire(test1)

