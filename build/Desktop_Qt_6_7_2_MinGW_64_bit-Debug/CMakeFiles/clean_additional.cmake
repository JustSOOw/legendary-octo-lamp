# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QTF_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QTF_autogen.dir\\ParseCache.txt"
  "QTF_autogen"
  )
endif()
