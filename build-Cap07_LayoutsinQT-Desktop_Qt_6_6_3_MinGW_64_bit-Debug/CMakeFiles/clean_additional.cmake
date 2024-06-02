# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Cap07_LayoutsinQT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Cap07_LayoutsinQT_autogen.dir\\ParseCache.txt"
  "Cap07_LayoutsinQT_autogen"
  )
endif()
