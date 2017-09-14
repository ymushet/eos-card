file(GLOB SOURCE_FILES "*.cpp")
add_wast_target(contractcard "${SOURCE_FILES}" "${CMAKE_SOURCE_DIR}/contracts" ${CMAKE_CURRENT_SOURCE_DIR})