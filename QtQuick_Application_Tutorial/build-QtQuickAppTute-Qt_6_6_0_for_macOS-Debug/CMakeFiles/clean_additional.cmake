# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appQtQuickAppTute_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appQtQuickAppTute_autogen.dir/ParseCache.txt"
  "appQtQuickAppTute_autogen"
  )
endif()
