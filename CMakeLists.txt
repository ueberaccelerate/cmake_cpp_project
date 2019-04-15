cmake_minimum_required( VERSION 3.4.3 )
project( test )

add_library (${PROJECT_NAME})

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(example)

target_compile_features( test PUBLIC cxx_std_17 )

target_include_directories( ${PROJECT_NAME} 
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
         $<INSTALL_INTERFACE:include/test>)


