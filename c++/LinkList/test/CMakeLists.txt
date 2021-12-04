#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src)
#link_directories(${CMAKE_CURRENT_BINARY_DIR}/../src)


add_executable(test main.cpp)
add_executable(test1 test.cpp)
#target_link_libraries(test addBinary)
#target_link_libraries(test addBinary)


