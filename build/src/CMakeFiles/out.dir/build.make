# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.22.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.22.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/xuzhang/work/LEETCODE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/xuzhang/work/LEETCODE/build

# Include any dependencies generated for this target.
include src/CMakeFiles/out.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/out.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/out.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/out.dir/flags.make

src/CMakeFiles/out.dir/main.cpp.o: src/CMakeFiles/out.dir/flags.make
src/CMakeFiles/out.dir/main.cpp.o: ../src/main.cpp
src/CMakeFiles/out.dir/main.cpp.o: src/CMakeFiles/out.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xuzhang/work/LEETCODE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/out.dir/main.cpp.o"
	cd /Users/xuzhang/work/LEETCODE/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/out.dir/main.cpp.o -MF CMakeFiles/out.dir/main.cpp.o.d -o CMakeFiles/out.dir/main.cpp.o -c /Users/xuzhang/work/LEETCODE/src/main.cpp

src/CMakeFiles/out.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/out.dir/main.cpp.i"
	cd /Users/xuzhang/work/LEETCODE/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xuzhang/work/LEETCODE/src/main.cpp > CMakeFiles/out.dir/main.cpp.i

src/CMakeFiles/out.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/out.dir/main.cpp.s"
	cd /Users/xuzhang/work/LEETCODE/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xuzhang/work/LEETCODE/src/main.cpp -o CMakeFiles/out.dir/main.cpp.s

src/CMakeFiles/out.dir/0015_three_sum.cpp.o: src/CMakeFiles/out.dir/flags.make
src/CMakeFiles/out.dir/0015_three_sum.cpp.o: ../src/0015_three_sum.cpp
src/CMakeFiles/out.dir/0015_three_sum.cpp.o: src/CMakeFiles/out.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xuzhang/work/LEETCODE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/out.dir/0015_three_sum.cpp.o"
	cd /Users/xuzhang/work/LEETCODE/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/out.dir/0015_three_sum.cpp.o -MF CMakeFiles/out.dir/0015_three_sum.cpp.o.d -o CMakeFiles/out.dir/0015_three_sum.cpp.o -c /Users/xuzhang/work/LEETCODE/src/0015_three_sum.cpp

src/CMakeFiles/out.dir/0015_three_sum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/out.dir/0015_three_sum.cpp.i"
	cd /Users/xuzhang/work/LEETCODE/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xuzhang/work/LEETCODE/src/0015_three_sum.cpp > CMakeFiles/out.dir/0015_three_sum.cpp.i

src/CMakeFiles/out.dir/0015_three_sum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/out.dir/0015_three_sum.cpp.s"
	cd /Users/xuzhang/work/LEETCODE/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xuzhang/work/LEETCODE/src/0015_three_sum.cpp -o CMakeFiles/out.dir/0015_three_sum.cpp.s

# Object files for target out
out_OBJECTS = \
"CMakeFiles/out.dir/main.cpp.o" \
"CMakeFiles/out.dir/0015_three_sum.cpp.o"

# External object files for target out
out_EXTERNAL_OBJECTS =

../bin/out: src/CMakeFiles/out.dir/main.cpp.o
../bin/out: src/CMakeFiles/out.dir/0015_three_sum.cpp.o
../bin/out: src/CMakeFiles/out.dir/build.make
../bin/out: src/CMakeFiles/out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/xuzhang/work/LEETCODE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/out"
	cd /Users/xuzhang/work/LEETCODE/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/out.dir/build: ../bin/out
.PHONY : src/CMakeFiles/out.dir/build

src/CMakeFiles/out.dir/clean:
	cd /Users/xuzhang/work/LEETCODE/build/src && $(CMAKE_COMMAND) -P CMakeFiles/out.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/out.dir/clean

src/CMakeFiles/out.dir/depend:
	cd /Users/xuzhang/work/LEETCODE/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/xuzhang/work/LEETCODE /Users/xuzhang/work/LEETCODE/src /Users/xuzhang/work/LEETCODE/build /Users/xuzhang/work/LEETCODE/build/src /Users/xuzhang/work/LEETCODE/build/src/CMakeFiles/out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/out.dir/depend

