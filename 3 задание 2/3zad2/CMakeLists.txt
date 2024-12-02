cmake_minimum_required(VERSION 3.16)

project(3zad2 LANGUAGES C)

add_executable(3zad2 main.c
    temp.c
    temp1.c)

target_link_libraries(3zad2 m)

include(GNUInstallDirs)
install(TARGETS 3zad2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
