#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "DML::DML" for configuration "Release"
set_property(TARGET DML::DML APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(DML::DML PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libDML.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/DML.dll"
  )

list(APPEND _cmake_import_check_targets DML::DML )
list(APPEND _cmake_import_check_files_for_DML::DML "${_IMPORT_PREFIX}/lib/libDML.dll.a" "${_IMPORT_PREFIX}/bin/DML.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
