cmake_minimum_required(VERSION 3.18)
project(plexmediaserver_crack)
SET(CMAKE_BUILD_RPATH_USE_ORIGIN TRUE)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_compile_options(-Wall -Wextra -Werror)

set(SOURCES main.cpp hook.cpp)
set(HEADERS hook.hpp)

add_library(plexmediaserver_crack SHARED ${SOURCES} ${HEADERS})
set_target_properties(plexmediaserver_crack PROPERTIES PREFIX "")
set_target_properties(plexmediaserver_crack PROPERTIES LINK_FLAGS "-static-libstdc++ -static-libgcc")
set_target_properties(plexmediaserver_crack PROPERTIES OUTPUT_NAME "plexmediaserver_crack")
target_link_libraries(plexmediaserver_crack PUBLIC rt)
target_include_directories(plexmediaserver_crack PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
