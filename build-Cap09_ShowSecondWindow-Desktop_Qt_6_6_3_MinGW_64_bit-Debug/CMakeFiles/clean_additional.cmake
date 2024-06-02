# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Cap09_ShowSecondWindow_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Cap09_ShowSecondWindow_autogen.dir\\ParseCache.txt"
  "Cap09_ShowSecondWindow_autogen"
  )
endif()
