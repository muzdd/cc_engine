# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/parallels/Desktop/3rdparty/cmake-3.15.7-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /home/parallels/Desktop/3rdparty/cmake-3.15.7-Linux-x86_64/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/parallels/Desktop/LeetCode/addTwoNumbers/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/parallels/Desktop/LeetCode/addTwoNumbers/src/build

# Include any dependencies generated for this target.
include CMakeFiles/addTwoNum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/addTwoNum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/addTwoNum.dir/flags.make

CMakeFiles/addTwoNum.dir/addTwoNumbers.cpp.o: CMakeFiles/addTwoNum.dir/flags.make
CMakeFiles/addTwoNum.dir/addTwoNumbers.cpp.o: ../addTwoNumbers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/Desktop/LeetCode/addTwoNumbers/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/addTwoNum.dir/addTwoNumbers.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/addTwoNum.dir/addTwoNumbers.cpp.o -c /home/parallels/Desktop/LeetCode/addTwoNumbers/src/addTwoNumbers.cpp

CMakeFiles/addTwoNum.dir/addTwoNumbers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/addTwoNum.dir/addTwoNumbers.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/parallels/Desktop/LeetCode/addTwoNumbers/src/addTwoNumbers.cpp > CMakeFiles/addTwoNum.dir/addTwoNumbers.cpp.i

CMakeFiles/addTwoNum.dir/addTwoNumbers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/addTwoNum.dir/addTwoNumbers.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/parallels/Desktop/LeetCode/addTwoNumbers/src/addTwoNumbers.cpp -o CMakeFiles/addTwoNum.dir/addTwoNumbers.cpp.s

# Object files for target addTwoNum
addTwoNum_OBJECTS = \
"CMakeFiles/addTwoNum.dir/addTwoNumbers.cpp.o"

# External object files for target addTwoNum
addTwoNum_EXTERNAL_OBJECTS =

libaddTwoNum.a: CMakeFiles/addTwoNum.dir/addTwoNumbers.cpp.o
libaddTwoNum.a: CMakeFiles/addTwoNum.dir/build.make
libaddTwoNum.a: CMakeFiles/addTwoNum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/Desktop/LeetCode/addTwoNumbers/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libaddTwoNum.a"
	$(CMAKE_COMMAND) -P CMakeFiles/addTwoNum.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/addTwoNum.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/addTwoNum.dir/build: libaddTwoNum.a

.PHONY : CMakeFiles/addTwoNum.dir/build

CMakeFiles/addTwoNum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/addTwoNum.dir/cmake_clean.cmake
.PHONY : CMakeFiles/addTwoNum.dir/clean

CMakeFiles/addTwoNum.dir/depend:
	cd /home/parallels/Desktop/LeetCode/addTwoNumbers/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/Desktop/LeetCode/addTwoNumbers/src /home/parallels/Desktop/LeetCode/addTwoNumbers/src /home/parallels/Desktop/LeetCode/addTwoNumbers/src/build /home/parallels/Desktop/LeetCode/addTwoNumbers/src/build /home/parallels/Desktop/LeetCode/addTwoNumbers/src/build/CMakeFiles/addTwoNum.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/addTwoNum.dir/depend
