# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/1336/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1336/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alexandra/PAOO

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alexandra/PAOO/build

# Include any dependencies generated for this target.
include CMakeFiles/carte.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/carte.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/carte.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/carte.dir/flags.make

CMakeFiles/carte.dir/src/main.cpp.o: CMakeFiles/carte.dir/flags.make
CMakeFiles/carte.dir/src/main.cpp.o: /home/alexandra/PAOO/src/main.cpp
CMakeFiles/carte.dir/src/main.cpp.o: CMakeFiles/carte.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alexandra/PAOO/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/carte.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/carte.dir/src/main.cpp.o -MF CMakeFiles/carte.dir/src/main.cpp.o.d -o CMakeFiles/carte.dir/src/main.cpp.o -c /home/alexandra/PAOO/src/main.cpp

CMakeFiles/carte.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/carte.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alexandra/PAOO/src/main.cpp > CMakeFiles/carte.dir/src/main.cpp.i

CMakeFiles/carte.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/carte.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alexandra/PAOO/src/main.cpp -o CMakeFiles/carte.dir/src/main.cpp.s

# Object files for target carte
carte_OBJECTS = \
"CMakeFiles/carte.dir/src/main.cpp.o"

# External object files for target carte
carte_EXTERNAL_OBJECTS =

carte: CMakeFiles/carte.dir/src/main.cpp.o
carte: CMakeFiles/carte.dir/build.make
carte: CMakeFiles/carte.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/alexandra/PAOO/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable carte"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/carte.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/carte.dir/build: carte
.PHONY : CMakeFiles/carte.dir/build

CMakeFiles/carte.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/carte.dir/cmake_clean.cmake
.PHONY : CMakeFiles/carte.dir/clean

CMakeFiles/carte.dir/depend:
	cd /home/alexandra/PAOO/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alexandra/PAOO /home/alexandra/PAOO /home/alexandra/PAOO/build /home/alexandra/PAOO/build /home/alexandra/PAOO/build/CMakeFiles/carte.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/carte.dir/depend

