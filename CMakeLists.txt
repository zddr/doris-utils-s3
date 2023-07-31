cmake_minimum_required (VERSION 2.8)

project (demo)

set(THIRDPARTY_DIR "/mnt/datadisk0/zhangdong/incubator-doris/thirdparty/installed")
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

aux_source_directory(src SRC_LIST)
include_directories (include)
include_directories(
        ${THIRDPARTY_DIR}/include
)
add_executable(main ${SRC_LIST})

add_library(aws-sdk-core STATIC IMPORTED)
set_target_properties(aws-sdk-core PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-cpp-sdk-core.a)


