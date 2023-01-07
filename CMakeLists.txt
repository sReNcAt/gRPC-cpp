
set(CMAKE_TOOLCHAIN_FILE "/Users/dmoong/devtools/vcpkg/scripts/buildsystems/vcpkg.cmake"
CACHE STRING "Vcpkg toolchain file")


add_executable(main

    main.cpp
    dist/exam1.pb.cc
)

find_package(protobuf REQUIRED)
target_link_libraries(main PRIVATE google::protobuf::libprotobuf)
