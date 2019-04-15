cmake_minimum_required( VERSION 3.4.3 )
project( test )

set (TARGET_VERSION 0.1)
set (TARGET_NAME ${PROJECT_NAME}_${TARGET_VERSION})

add_library (${TARGET_NAME} STATIC)

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(example)

target_compile_options ( ${TARGET_NAME} PUBLIC -fsanitize=address -fexceptions -Wall) 
target_compile_features( ${TARGET_NAME} PUBLIC cxx_std_17 )
target_include_directories ( ${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries ( ${TARGET_NAME} PUBLIC asan)
