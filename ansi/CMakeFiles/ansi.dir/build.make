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
CMAKE_SOURCE_DIR = "/home/kanan/Desktop/Development Techniques/Game of Life"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/kanan/Desktop/Development Techniques/Game of Life"

# Include any dependencies generated for this target.
include ansi/CMakeFiles/ansi.dir/depend.make

# Include the progress variables for this target.
include ansi/CMakeFiles/ansi.dir/progress.make

# Include the compile flags for this target's objects.
include ansi/CMakeFiles/ansi.dir/flags.make

ansi/CMakeFiles/ansi.dir/ansi.c.o: ansi/CMakeFiles/ansi.dir/flags.make
ansi/CMakeFiles/ansi.dir/ansi.c.o: ansi/ansi.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kanan/Desktop/Development Techniques/Game of Life/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object ansi/CMakeFiles/ansi.dir/ansi.c.o"
	cd "/home/kanan/Desktop/Development Techniques/Game of Life/ansi" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ansi.dir/ansi.c.o   -c "/home/kanan/Desktop/Development Techniques/Game of Life/ansi/ansi.c"

ansi/CMakeFiles/ansi.dir/ansi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ansi.dir/ansi.c.i"
	cd "/home/kanan/Desktop/Development Techniques/Game of Life/ansi" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/kanan/Desktop/Development Techniques/Game of Life/ansi/ansi.c" > CMakeFiles/ansi.dir/ansi.c.i

ansi/CMakeFiles/ansi.dir/ansi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ansi.dir/ansi.c.s"
	cd "/home/kanan/Desktop/Development Techniques/Game of Life/ansi" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/kanan/Desktop/Development Techniques/Game of Life/ansi/ansi.c" -o CMakeFiles/ansi.dir/ansi.c.s

# Object files for target ansi
ansi_OBJECTS = \
"CMakeFiles/ansi.dir/ansi.c.o"

# External object files for target ansi
ansi_EXTERNAL_OBJECTS =

ansi/libansi.a: ansi/CMakeFiles/ansi.dir/ansi.c.o
ansi/libansi.a: ansi/CMakeFiles/ansi.dir/build.make
ansi/libansi.a: ansi/CMakeFiles/ansi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/kanan/Desktop/Development Techniques/Game of Life/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libansi.a"
	cd "/home/kanan/Desktop/Development Techniques/Game of Life/ansi" && $(CMAKE_COMMAND) -P CMakeFiles/ansi.dir/cmake_clean_target.cmake
	cd "/home/kanan/Desktop/Development Techniques/Game of Life/ansi" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ansi.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ansi/CMakeFiles/ansi.dir/build: ansi/libansi.a

.PHONY : ansi/CMakeFiles/ansi.dir/build

ansi/CMakeFiles/ansi.dir/clean:
	cd "/home/kanan/Desktop/Development Techniques/Game of Life/ansi" && $(CMAKE_COMMAND) -P CMakeFiles/ansi.dir/cmake_clean.cmake
.PHONY : ansi/CMakeFiles/ansi.dir/clean

ansi/CMakeFiles/ansi.dir/depend:
	cd "/home/kanan/Desktop/Development Techniques/Game of Life" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kanan/Desktop/Development Techniques/Game of Life" "/home/kanan/Desktop/Development Techniques/Game of Life/ansi" "/home/kanan/Desktop/Development Techniques/Game of Life" "/home/kanan/Desktop/Development Techniques/Game of Life/ansi" "/home/kanan/Desktop/Development Techniques/Game of Life/ansi/CMakeFiles/ansi.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : ansi/CMakeFiles/ansi.dir/depend

