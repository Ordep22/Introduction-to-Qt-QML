# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Cap05_SignalsAndSlots_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Cap05_SignalsAndSlots_autogen.dir\\ParseCache.txt"
  "Cap05_SignalsAndSlots_autogen"
  )
endif()
