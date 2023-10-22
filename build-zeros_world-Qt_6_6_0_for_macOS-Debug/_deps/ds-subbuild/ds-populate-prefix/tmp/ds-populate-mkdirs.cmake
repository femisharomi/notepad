# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/femi/Documents/GitHub/zero/build-zeros_world-Qt_6_6_0_for_macOS-Debug/_deps/ds-src"
  "/Users/femi/Documents/GitHub/zero/build-zeros_world-Qt_6_6_0_for_macOS-Debug/_deps/ds-build"
  "/Users/femi/Documents/GitHub/zero/build-zeros_world-Qt_6_6_0_for_macOS-Debug/_deps/ds-subbuild/ds-populate-prefix"
  "/Users/femi/Documents/GitHub/zero/build-zeros_world-Qt_6_6_0_for_macOS-Debug/_deps/ds-subbuild/ds-populate-prefix/tmp"
  "/Users/femi/Documents/GitHub/zero/build-zeros_world-Qt_6_6_0_for_macOS-Debug/_deps/ds-subbuild/ds-populate-prefix/src/ds-populate-stamp"
  "/Users/femi/Documents/GitHub/zero/build-zeros_world-Qt_6_6_0_for_macOS-Debug/_deps/ds-subbuild/ds-populate-prefix/src"
  "/Users/femi/Documents/GitHub/zero/build-zeros_world-Qt_6_6_0_for_macOS-Debug/_deps/ds-subbuild/ds-populate-prefix/src/ds-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/femi/Documents/GitHub/zero/build-zeros_world-Qt_6_6_0_for_macOS-Debug/_deps/ds-subbuild/ds-populate-prefix/src/ds-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/femi/Documents/GitHub/zero/build-zeros_world-Qt_6_6_0_for_macOS-Debug/_deps/ds-subbuild/ds-populate-prefix/src/ds-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
