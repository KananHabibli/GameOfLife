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
CMAKE_SOURCE_DIR = "/home/kanan/Desktop/Development Techniques/GameOfLife"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/kanan/Desktop/Development Techniques/GameOfLife"

# Include any dependencies generated for this target.
include CMakeFiles/game_of_life.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/game_of_life.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game_of_life.dir/flags.make

CMakeFiles/game_of_life.dir/main.c.o: CMakeFiles/game_of_life.dir/flags.make
CMakeFiles/game_of_life.dir/main.c.o: main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kanan/Desktop/Development Techniques/GameOfLife/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/game_of_life.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/game_of_life.dir/main.c.o   -c "/home/kanan/Desktop/Development Techniques/GameOfLife/main.c"

CMakeFiles/game_of_life.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/game_of_life.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/kanan/Desktop/Development Techniques/GameOfLife/main.c" > CMakeFiles/game_of_life.dir/main.c.i

CMakeFiles/game_of_life.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/game_of_life.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/kanan/Desktop/Development Techniques/GameOfLife/main.c" -o CMakeFiles/game_of_life.dir/main.c.s

CMakeFiles/game_of_life.dir/ansi/ansi.c.o: CMakeFiles/game_of_life.dir/flags.make
CMakeFiles/game_of_life.dir/ansi/ansi.c.o: ansi/ansi.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kanan/Desktop/Development Techniques/GameOfLife/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/game_of_life.dir/ansi/ansi.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/game_of_life.dir/ansi/ansi.c.o   -c "/home/kanan/Desktop/Development Techniques/GameOfLife/ansi/ansi.c"

CMakeFiles/game_of_life.dir/ansi/ansi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/game_of_life.dir/ansi/ansi.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/kanan/Desktop/Development Techniques/GameOfLife/ansi/ansi.c" > CMakeFiles/game_of_life.dir/ansi/ansi.c.i

CMakeFiles/game_of_life.dir/ansi/ansi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/game_of_life.dir/ansi/ansi.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/kanan/Desktop/Development Techniques/GameOfLife/ansi/ansi.c" -o CMakeFiles/game_of_life.dir/ansi/ansi.c.s

CMakeFiles/game_of_life.dir/clipped/clipped.c.o: CMakeFiles/game_of_life.dir/flags.make
CMakeFiles/game_of_life.dir/clipped/clipped.c.o: clipped/clipped.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kanan/Desktop/Development Techniques/GameOfLife/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/game_of_life.dir/clipped/clipped.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/game_of_life.dir/clipped/clipped.c.o   -c "/home/kanan/Desktop/Development Techniques/GameOfLife/clipped/clipped.c"

CMakeFiles/game_of_life.dir/clipped/clipped.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/game_of_life.dir/clipped/clipped.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/kanan/Desktop/Development Techniques/GameOfLife/clipped/clipped.c" > CMakeFiles/game_of_life.dir/clipped/clipped.c.i

CMakeFiles/game_of_life.dir/clipped/clipped.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/game_of_life.dir/clipped/clipped.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/kanan/Desktop/Development Techniques/GameOfLife/clipped/clipped.c" -o CMakeFiles/game_of_life.dir/clipped/clipped.c.s

CMakeFiles/game_of_life.dir/circular/circular.c.o: CMakeFiles/game_of_life.dir/flags.make
CMakeFiles/game_of_life.dir/circular/circular.c.o: circular/circular.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kanan/Desktop/Development Techniques/GameOfLife/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/game_of_life.dir/circular/circular.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/game_of_life.dir/circular/circular.c.o   -c "/home/kanan/Desktop/Development Techniques/GameOfLife/circular/circular.c"

CMakeFiles/game_of_life.dir/circular/circular.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/game_of_life.dir/circular/circular.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/kanan/Desktop/Development Techniques/GameOfLife/circular/circular.c" > CMakeFiles/game_of_life.dir/circular/circular.c.i

CMakeFiles/game_of_life.dir/circular/circular.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/game_of_life.dir/circular/circular.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/kanan/Desktop/Development Techniques/GameOfLife/circular/circular.c" -o CMakeFiles/game_of_life.dir/circular/circular.c.s

CMakeFiles/game_of_life.dir/sdl/sdl.c.o: CMakeFiles/game_of_life.dir/flags.make
CMakeFiles/game_of_life.dir/sdl/sdl.c.o: sdl/sdl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kanan/Desktop/Development Techniques/GameOfLife/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/game_of_life.dir/sdl/sdl.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/game_of_life.dir/sdl/sdl.c.o   -c "/home/kanan/Desktop/Development Techniques/GameOfLife/sdl/sdl.c"

CMakeFiles/game_of_life.dir/sdl/sdl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/game_of_life.dir/sdl/sdl.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/kanan/Desktop/Development Techniques/GameOfLife/sdl/sdl.c" > CMakeFiles/game_of_life.dir/sdl/sdl.c.i

CMakeFiles/game_of_life.dir/sdl/sdl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/game_of_life.dir/sdl/sdl.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/kanan/Desktop/Development Techniques/GameOfLife/sdl/sdl.c" -o CMakeFiles/game_of_life.dir/sdl/sdl.c.s

# Object files for target game_of_life
game_of_life_OBJECTS = \
"CMakeFiles/game_of_life.dir/main.c.o" \
"CMakeFiles/game_of_life.dir/ansi/ansi.c.o" \
"CMakeFiles/game_of_life.dir/clipped/clipped.c.o" \
"CMakeFiles/game_of_life.dir/circular/circular.c.o" \
"CMakeFiles/game_of_life.dir/sdl/sdl.c.o"

# External object files for target game_of_life
game_of_life_EXTERNAL_OBJECTS =

game_of_life: CMakeFiles/game_of_life.dir/main.c.o
game_of_life: CMakeFiles/game_of_life.dir/ansi/ansi.c.o
game_of_life: CMakeFiles/game_of_life.dir/clipped/clipped.c.o
game_of_life: CMakeFiles/game_of_life.dir/circular/circular.c.o
game_of_life: CMakeFiles/game_of_life.dir/sdl/sdl.c.o
game_of_life: CMakeFiles/game_of_life.dir/build.make
game_of_life: ansi/libansi.a
game_of_life: clipped/libclipped.a
game_of_life: circular/libcircular.a
game_of_life: sdl/libsdl.a
game_of_life: /usr/local/lib/libSDL2main.a
game_of_life: /usr/local/lib/libSDL2.so
game_of_life: CMakeFiles/game_of_life.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/kanan/Desktop/Development Techniques/GameOfLife/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable game_of_life"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game_of_life.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game_of_life.dir/build: game_of_life

.PHONY : CMakeFiles/game_of_life.dir/build

CMakeFiles/game_of_life.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game_of_life.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game_of_life.dir/clean

CMakeFiles/game_of_life.dir/depend:
	cd "/home/kanan/Desktop/Development Techniques/GameOfLife" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kanan/Desktop/Development Techniques/GameOfLife" "/home/kanan/Desktop/Development Techniques/GameOfLife" "/home/kanan/Desktop/Development Techniques/GameOfLife" "/home/kanan/Desktop/Development Techniques/GameOfLife" "/home/kanan/Desktop/Development Techniques/GameOfLife/CMakeFiles/game_of_life.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/game_of_life.dir/depend

