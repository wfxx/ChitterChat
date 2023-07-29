# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ChitterChat_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ChitterChat_autogen.dir\\ParseCache.txt"
  "ChitterChat_autogen"
  )
endif()
