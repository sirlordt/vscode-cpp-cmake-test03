add_subdirectory(src/modules/a)   # look in module_a subdirectory for CMakeLists.txt to process
add_subdirectory(src/modules/b)   # look in module_a subdirectory for CMakeLists.txt to process

# version 3.11 or later of CMake or needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.18)

project(main)

file(GLOB SOURCES "src/*.cpp")

add_executable(main ${SOURCES})
#add_executable(main src/main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/includes)

# We need a1.h a2.h b1.h b2.h and the lib_a and lib_b library
target_link_libraries(main PRIVATE module_a)
target_link_libraries(main PRIVATE module_b)

# We need a1.h a2.h b1.h b2.h and the lib_a and lib_b library
target_link_libraries(main PRIVATE lib_a)
target_link_libraries(main PRIVATE lib_b)

# -static-libgcc -static-libstdc++

# Tell C++ compiler to use C++20 features. We don't actually use any of them.
target_compile_features(main PUBLIC cxx_std_20)