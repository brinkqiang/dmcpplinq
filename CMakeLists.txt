cmake_minimum_required(VERSION 3.2)

PROJECT(dmcpplinq)

LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
INCLUDE(cmake/ModuleImport.cmake)
INCLUDE(cmake/ModuleCompileOptions.cmake)
ModuleSetCompileOptions()
ModuleSetWinCompilerFlags()

SET(DMCPPLINQ_VERSION_MAJOR "1")
SET(DMCPPLINQ_VERSION_MINOR "0")
SET(DMCPPLINQ_VERSION_PATCH "1")
SET(DMCPPLINQ_VERSION "${DMCPPLINQ_VERSION_MAJOR}.${DMCPPLINQ_VERSION_MINOR}.${DMCPPLINQ_VERSION_PATCH}")

MESSAGE(STATUS "VERSION: ${DMCPPLINQ_VERSION}")

OPTION(USE_DMCPPLINQ "use dmcpplinq" OFF)
CONFIGURE_FILE(${CMAKE_CURRENT_SOURCE_DIR}/include/dmcpplinq_config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/include/dmcpplinq_config.h)

ModuleImportAll("thirdparty")
LibImport("dmcpplinq_module" "src/dmcpplinq_module")
ExeImport("test" "dmcpplinq_module")

#ADD_CUSTOM_COMMAND(
#TARGET dmcpplinqtest
#PRE_BUILD
#COMMAND ${CMAKE_COMMAND} -E copy_if_different
#${CMAKE_CURRENT_SOURCE_DIR}/config/test.csv
#$<TARGET_FILE_DIR:dmcpplinqtest>
#)

#INSTALL(DIRECTORY include/ DESTINATION include)
#INSTALL(TARGETS dmcpplinq
#        RUNTIME DESTINATION bin
#        LIBRARY DESTINATION lib
#        ARCHIVE DESTINATION lib)

#SET(DMCPPLINQ_LIBS "dmcpplinq")
#MARK_AS_ADVANCED(${DMCPPLINQ_LIBS})