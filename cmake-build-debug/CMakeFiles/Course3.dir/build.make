# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "/Users/artemkaloev/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.3727.114/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/artemkaloev/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.3727.114/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/artemkaloev/Desktop/study/Course3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/artemkaloev/Desktop/study/Course3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Course3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Course3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Course3.dir/flags.make

CMakeFiles/Course3.dir/main.cpp.o: CMakeFiles/Course3.dir/flags.make
CMakeFiles/Course3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/artemkaloev/Desktop/study/Course3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Course3.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Course3.dir/main.cpp.o -c /Users/artemkaloev/Desktop/study/Course3/main.cpp

CMakeFiles/Course3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Course3.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/artemkaloev/Desktop/study/Course3/main.cpp > CMakeFiles/Course3.dir/main.cpp.i

CMakeFiles/Course3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Course3.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/artemkaloev/Desktop/study/Course3/main.cpp -o CMakeFiles/Course3.dir/main.cpp.s

CMakeFiles/Course3.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Course3.dir/main.cpp.o.requires

CMakeFiles/Course3.dir/main.cpp.o.provides: CMakeFiles/Course3.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Course3.dir/build.make CMakeFiles/Course3.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Course3.dir/main.cpp.o.provides

CMakeFiles/Course3.dir/main.cpp.o.provides.build: CMakeFiles/Course3.dir/main.cpp.o


# Object files for target Course3
Course3_OBJECTS = \
"CMakeFiles/Course3.dir/main.cpp.o"

# External object files for target Course3
Course3_EXTERNAL_OBJECTS =

Course3: CMakeFiles/Course3.dir/main.cpp.o
Course3: CMakeFiles/Course3.dir/build.make
Course3: CMakeFiles/Course3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/artemkaloev/Desktop/study/Course3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Course3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Course3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Course3.dir/build: Course3

.PHONY : CMakeFiles/Course3.dir/build

CMakeFiles/Course3.dir/requires: CMakeFiles/Course3.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Course3.dir/requires

CMakeFiles/Course3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Course3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Course3.dir/clean

CMakeFiles/Course3.dir/depend:
	cd /Users/artemkaloev/Desktop/study/Course3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/artemkaloev/Desktop/study/Course3 /Users/artemkaloev/Desktop/study/Course3 /Users/artemkaloev/Desktop/study/Course3/cmake-build-debug /Users/artemkaloev/Desktop/study/Course3/cmake-build-debug /Users/artemkaloev/Desktop/study/Course3/cmake-build-debug/CMakeFiles/Course3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Course3.dir/depend

