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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kanan/Desktop/test/GameOfLife

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kanan/Desktop/test/GameOfLife

# Include any dependencies generated for this target.
include clipped/CMakeFiles/clipped.dir/depend.make

# Include the progress variables for this target.
include clipped/CMakeFiles/clipped.dir/progress.make

# Include the compile flags for this target's objects.
include clipped/CMakeFiles/clipped.dir/flags.make

clipped/CMakeFiles/clipped.dir/clipped.c.o: clipped/CMakeFiles/clipped.dir/flags.make
clipped/CMakeFiles/clipped.dir/clipped.c.o: clipped/clipped.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanan/Desktop/test/GameOfLife/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object clipped/CMakeFiles/clipped.dir/clipped.c.o"
	cd /home/kanan/Desktop/test/GameOfLife/clipped && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/clipped.dir/clipped.c.o   -c /home/kanan/Desktop/test/GameOfLife/clipped/clipped.c

clipped/CMakeFiles/clipped.dir/clipped.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/clipped.dir/clipped.c.i"
	cd /home/kanan/Desktop/test/GameOfLife/clipped && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kanan/Desktop/test/GameOfLife/clipped/clipped.c > CMakeFiles/clipped.dir/clipped.c.i

clipped/CMakeFiles/clipped.dir/clipped.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/clipped.dir/clipped.c.s"
	cd /home/kanan/Desktop/test/GameOfLife/clipped && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kanan/Desktop/test/GameOfLife/clipped/clipped.c -o CMakeFiles/clipped.dir/clipped.c.s

# Object files for target clipped
clipped_OBJECTS = \
"CMakeFiles/clipped.dir/clipped.c.o"

# External object files for target clipped
clipped_EXTERNAL_OBJECTS =

clipped/libclipped.a: clipped/CMakeFiles/clipped.dir/clipped.c.o
clipped/libclipped.a: clipped/CMakeFiles/clipped.dir/build.make
clipped/libclipped.a: clipped/CMakeFiles/clipped.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kanan/Desktop/test/GameOfLife/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libclipped.a"
	cd /home/kanan/Desktop/test/GameOfLife/clipped && $(CMAKE_COMMAND) -P CMakeFiles/clipped.dir/cmake_clean_target.cmake
	cd /home/kanan/Desktop/test/GameOfLife/clipped && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clipped.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
clipped/CMakeFiles/clipped.dir/build: clipped/libclipped.a

.PHONY : clipped/CMakeFiles/clipped.dir/build

clipped/CMakeFiles/clipped.dir/clean:
	cd /home/kanan/Desktop/test/GameOfLife/clipped && $(CMAKE_COMMAND) -P CMakeFiles/clipped.dir/cmake_clean.cmake
.PHONY : clipped/CMakeFiles/clipped.dir/clean

clipped/CMakeFiles/clipped.dir/depend:
	cd /home/kanan/Desktop/test/GameOfLife && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanan/Desktop/test/GameOfLife /home/kanan/Desktop/test/GameOfLife/clipped /home/kanan/Desktop/test/GameOfLife /home/kanan/Desktop/test/GameOfLife/clipped /home/kanan/Desktop/test/GameOfLife/clipped/CMakeFiles/clipped.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : clipped/CMakeFiles/clipped.dir/depend

