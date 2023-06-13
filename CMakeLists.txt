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

add_library(aws-sdk-s3 STATIC IMPORTED)
set_target_properties(aws-sdk-s3 PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-cpp-sdk-s3.a)

add_library(aws-sdk-transfer STATIC IMPORTED)
set_target_properties(aws-sdk-transfer PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-cpp-sdk-transfer.a)

add_library(aws-sdk-s3-crt STATIC IMPORTED)
set_target_properties(aws-sdk-s3-crt PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-cpp-sdk-s3-crt.a)

add_library(aws-crt-cpp STATIC IMPORTED)
set_target_properties(aws-crt-cpp PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-crt-cpp.a)

add_library(aws-c-cal STATIC IMPORTED)
set_target_properties(aws-c-cal PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-c-cal.a)

add_library(aws-c-auth STATIC IMPORTED)
set_target_properties(aws-c-auth PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-c-auth.a)

add_library(aws-c-compression STATIC IMPORTED)
set_target_properties(aws-c-compression PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-c-compression.a)

add_library(aws-c-common STATIC IMPORTED)
set_target_properties(aws-c-common PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-c-common.a)

add_library(aws-c-event-stream STATIC IMPORTED)
set_target_properties(aws-c-event-stream PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-c-event-stream.a)

add_library(aws-c-io STATIC IMPORTED)
set_target_properties(aws-c-io PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-c-io.a)

add_library(aws-c-http STATIC IMPORTED)
set_target_properties(aws-c-http PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-c-http.a)

add_library(aws-c-mqtt STATIC IMPORTED)
set_target_properties(aws-c-mqtt PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-c-mqtt.a)

add_library(aws-checksums STATIC IMPORTED)
set_target_properties(aws-checksums PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-checksums.a)

add_library(aws-c-s3 STATIC IMPORTED)
set_target_properties(aws-c-s3 PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libaws-c-s3.a)

add_library(aws-s2n STATIC IMPORTED)
set_target_properties(aws-s2n PROPERTIES IMPORTED_LOCATION ${THIRDPARTY_DIR}/lib64/libs2n.a)


