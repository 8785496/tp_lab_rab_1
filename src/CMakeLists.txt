set(SOURCE_FILES Graph.cpp)
set(HEADER_FILES Graph.h App.h App.cpp)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})