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
CMAKE_COMMAND = "/Applications/CLion 2020.2 EAP.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Applications/CLion 2020.2 EAP.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/chal2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chal2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chal2.dir/flags.make

CMakeFiles/chal2.dir/main.c.o: CMakeFiles/chal2.dir/flags.make
CMakeFiles/chal2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/chal2.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/chal2.dir/main.c.o   -c /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/main.c

CMakeFiles/chal2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/chal2.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/main.c > CMakeFiles/chal2.dir/main.c.i

CMakeFiles/chal2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/chal2.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/main.c -o CMakeFiles/chal2.dir/main.c.s

CMakeFiles/chal2.dir/s9c2.c.o: CMakeFiles/chal2.dir/flags.make
CMakeFiles/chal2.dir/s9c2.c.o: ../s9c2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/chal2.dir/s9c2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/chal2.dir/s9c2.c.o   -c /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/s9c2.c

CMakeFiles/chal2.dir/s9c2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/chal2.dir/s9c2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/s9c2.c > CMakeFiles/chal2.dir/s9c2.c.i

CMakeFiles/chal2.dir/s9c2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/chal2.dir/s9c2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/s9c2.c -o CMakeFiles/chal2.dir/s9c2.c.s

# Object files for target chal2
chal2_OBJECTS = \
"CMakeFiles/chal2.dir/main.c.o" \
"CMakeFiles/chal2.dir/s9c2.c.o"

# External object files for target chal2
chal2_EXTERNAL_OBJECTS =

chal2: CMakeFiles/chal2.dir/main.c.o
chal2: CMakeFiles/chal2.dir/s9c2.c.o
chal2: CMakeFiles/chal2.dir/build.make
chal2: CMakeFiles/chal2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable chal2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chal2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chal2.dir/build: chal2

.PHONY : CMakeFiles/chal2.dir/build

CMakeFiles/chal2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chal2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chal2.dir/clean

CMakeFiles/chal2.dir/depend:
	cd /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2 /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2 /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/cmake-build-debug /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/cmake-build-debug /Users/leanneiannucci/CLionProjects/UdemyCCourse/Sec9/chal2/cmake-build-debug/CMakeFiles/chal2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chal2.dir/depend

