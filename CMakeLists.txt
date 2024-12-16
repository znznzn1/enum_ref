cmake_minimum_required(VERSION 3.5)

project(qt_creater_ref LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include_directories(include)
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/code/*.cpp)

add_executable(qt_creater_ref ${SRC_LIST})

include(GNUInstallDirs)
install(TARGETS qt_creater_ref
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
