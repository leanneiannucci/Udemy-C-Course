# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Chal5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Chal5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Chal5.dir/flags.make

CMakeFiles/Chal5.dir/main.c.o: CMakeFiles/Chal5.dir/flags.make
CMakeFiles/Chal5.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Chal5.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Chal5.dir/main.c.o   -c /Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5/main.c

CMakeFiles/Chal5.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Chal5.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5/main.c > CMakeFiles/Chal5.dir/main.c.i

CMakeFiles/Chal5.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Chal5.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5/main.c -o CMakeFiles/Chal5.dir/main.c.s

# Object files for target Chal5
Chal5_OBJECTS = \
"CMakeFiles/Chal5.dir/main.c.o"

# External object files for target Chal5
Chal5_EXTERNAL_OBJECTS =

Chal5: CMakeFiles/Chal5.dir/main.c.o
Chal5: CMakeFiles/Chal5.dir/build.make
Chal5: CMakeFiles/Chal5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Chal5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Chal5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Chal5.dir/build: Chal5

.PHONY : CMakeFiles/Chal5.dir/build

CMakeFiles/Chal5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Chal5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Chal5.dir/clean

CMakeFiles/Chal5.dir/depend:
	cd /Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5 /Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5 /Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5/cmake-build-debug /Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5/cmake-build-debug /Users/leanneiannucci/CLionProjects/Udemy-C-Course/Advanced/Sec8/Chal5/cmake-build-debug/CMakeFiles/Chal5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Chal5.dir/depend

