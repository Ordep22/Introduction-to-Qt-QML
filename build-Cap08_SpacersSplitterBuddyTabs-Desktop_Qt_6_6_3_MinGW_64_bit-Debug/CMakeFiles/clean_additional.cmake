# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Cap08_SpacersSplitterBuddyTabs_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Cap08_SpacersSplitterBuddyTabs_autogen.dir\\ParseCache.txt"
  "Cap08_SpacersSplitterBuddyTabs_autogen"
  )
endif()
