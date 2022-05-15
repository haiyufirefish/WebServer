cmake_minimum_required(VERSION 3.0.0)
project(WebServer VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories("${PROJECT_SOURCE_DIR}/code")
add_subdirectory(code)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
add_executable(server main.cpp)
target_link_libraries(server webserver mysqlclient Threads::Threads)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
