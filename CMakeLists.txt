cmake_minimum_required(VERSION 3.9)
project(C_Learning_Stuff C)

set(CMAKE_C_STANDARD 17)

project(test)

include(CTest)
enable_testing()

set(REPO ${CMAKE_CURRENT_SOURCE_DIR})

#set(gtest_disable_pthreads on) #needed in MinGW
include(${REPO}/DownloadProject/DownloadProject.cmake)

download_project(
        PROJ                googletest
        GIT_REPOSITORY      https://github.com/google/googletest.git
        GIT_TAG             master
)

set(test_SOURCES
        g_test_main.cpp vector.cpp vector.h)

set(test_HEADERS
        vector.cpp vector.h vector_test.hpp)

set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH})

add_executable(UnitTests ${test_SOURCES} ${test_HEADERS})

target_link_libraries(UnitTests gtest gmock ${PROTOBUF_LIBRARIES})

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR} EXCLUDE_FROM_ALL)
