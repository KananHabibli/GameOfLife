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
include circular/CMakeFiles/circular.dir/depend.make

# Include the progress variables for this target.
include circular/CMakeFiles/circular.dir/progress.make

# Include the compile flags for this target's objects.
include circular/CMakeFiles/circular.dir/flags.make

circular/CMakeFiles/circular.dir/circular.c.o: circular/CMakeFiles/circular.dir/flags.make
circular/CMakeFiles/circular.dir/circular.c.o: circular/circular.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanan/Desktop/test/GameOfLife/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object circular/CMakeFiles/circular.dir/circular.c.o"
	cd /home/kanan/Desktop/test/GameOfLife/circular && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/circular.dir/circular.c.o   -c /home/kanan/Desktop/test/GameOfLife/circular/circular.c

circular/CMakeFiles/circular.dir/circular.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/circular.dir/circular.c.i"
	cd /home/kanan/Desktop/test/GameOfLife/circular && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kanan/Desktop/test/GameOfLife/circular/circular.c > CMakeFiles/circular.dir/circular.c.i

circular/CMakeFiles/circular.dir/circular.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/circular.dir/circular.c.s"
	cd /home/kanan/Desktop/test/GameOfLife/circular && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kanan/Desktop/test/GameOfLife/circular/circular.c -o CMakeFiles/circular.dir/circular.c.s

# Object files for target circular
circular_OBJECTS = \
"CMakeFiles/circular.dir/circular.c.o"

# External object files for target circular
circular_EXTERNAL_OBJECTS =

circular/libcircular.a: circular/CMakeFiles/circular.dir/circular.c.o
circular/libcircular.a: circular/CMakeFiles/circular.dir/build.make
circular/libcircular.a: circular/CMakeFiles/circular.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kanan/Desktop/test/GameOfLife/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libcircular.a"
	cd /home/kanan/Desktop/test/GameOfLife/circular && $(CMAKE_COMMAND) -P CMakeFiles/circular.dir/cmake_clean_target.cmake
	cd /home/kanan/Desktop/test/GameOfLife/circular && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/circular.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
circular/CMakeFiles/circular.dir/build: circular/libcircular.a

.PHONY : circular/CMakeFiles/circular.dir/build

circular/CMakeFiles/circular.dir/clean:
	cd /home/kanan/Desktop/test/GameOfLife/circular && $(CMAKE_COMMAND) -P CMakeFiles/circular.dir/cmake_clean.cmake
.PHONY : circular/CMakeFiles/circular.dir/clean

circular/CMakeFiles/circular.dir/depend:
	cd /home/kanan/Desktop/test/GameOfLife && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanan/Desktop/test/GameOfLife /home/kanan/Desktop/test/GameOfLife/circular /home/kanan/Desktop/test/GameOfLife /home/kanan/Desktop/test/GameOfLife/circular /home/kanan/Desktop/test/GameOfLife/circular/CMakeFiles/circular.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : circular/CMakeFiles/circular.dir/depend

