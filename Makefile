# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/local/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/local/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/local/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/local/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/local/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

.PHONY : list_install_components/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/local/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/local/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "/home/kanan/Desktop/Development Techniques/Game of Life/CMakeFiles" "/home/kanan/Desktop/Development Techniques/Game of Life/CMakeFiles/progress.marks"
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "/home/kanan/Desktop/Development Techniques/Game of Life/CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named game_of_life

# Build rule for target.
game_of_life: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 game_of_life
.PHONY : game_of_life

# fast build rule for target.
game_of_life/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/build
.PHONY : game_of_life/fast

#=============================================================================
# Target rules for targets named ansi

# Build rule for target.
ansi: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 ansi
.PHONY : ansi

# fast build rule for target.
ansi/fast:
	$(MAKE) $(MAKESILENT) -f ansi/CMakeFiles/ansi.dir/build.make ansi/CMakeFiles/ansi.dir/build
.PHONY : ansi/fast

#=============================================================================
# Target rules for targets named clipped

# Build rule for target.
clipped: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clipped
.PHONY : clipped

# fast build rule for target.
clipped/fast:
	$(MAKE) $(MAKESILENT) -f clipped/CMakeFiles/clipped.dir/build.make clipped/CMakeFiles/clipped.dir/build
.PHONY : clipped/fast

#=============================================================================
# Target rules for targets named circular

# Build rule for target.
circular: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 circular
.PHONY : circular

# fast build rule for target.
circular/fast:
	$(MAKE) $(MAKESILENT) -f circular/CMakeFiles/circular.dir/build.make circular/CMakeFiles/circular.dir/build
.PHONY : circular/fast

ansi/ansi.o: ansi/ansi.c.o

.PHONY : ansi/ansi.o

# target to build an object file
ansi/ansi.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/ansi/ansi.c.o
.PHONY : ansi/ansi.c.o

ansi/ansi.i: ansi/ansi.c.i

.PHONY : ansi/ansi.i

# target to preprocess a source file
ansi/ansi.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/ansi/ansi.c.i
.PHONY : ansi/ansi.c.i

ansi/ansi.s: ansi/ansi.c.s

.PHONY : ansi/ansi.s

# target to generate assembly for a file
ansi/ansi.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/ansi/ansi.c.s
.PHONY : ansi/ansi.c.s

circular/circular.o: circular/circular.c.o

.PHONY : circular/circular.o

# target to build an object file
circular/circular.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/circular/circular.c.o
.PHONY : circular/circular.c.o

circular/circular.i: circular/circular.c.i

.PHONY : circular/circular.i

# target to preprocess a source file
circular/circular.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/circular/circular.c.i
.PHONY : circular/circular.c.i

circular/circular.s: circular/circular.c.s

.PHONY : circular/circular.s

# target to generate assembly for a file
circular/circular.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/circular/circular.c.s
.PHONY : circular/circular.c.s

clipped/clipped.o: clipped/clipped.c.o

.PHONY : clipped/clipped.o

# target to build an object file
clipped/clipped.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/clipped/clipped.c.o
.PHONY : clipped/clipped.c.o

clipped/clipped.i: clipped/clipped.c.i

.PHONY : clipped/clipped.i

# target to preprocess a source file
clipped/clipped.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/clipped/clipped.c.i
.PHONY : clipped/clipped.c.i

clipped/clipped.s: clipped/clipped.c.s

.PHONY : clipped/clipped.s

# target to generate assembly for a file
clipped/clipped.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/clipped/clipped.c.s
.PHONY : clipped/clipped.c.s

main.o: main.c.o

.PHONY : main.o

# target to build an object file
main.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/main.c.o
.PHONY : main.c.o

main.i: main.c.i

.PHONY : main.i

# target to preprocess a source file
main.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/main.c.i
.PHONY : main.c.i

main.s: main.c.s

.PHONY : main.s

# target to generate assembly for a file
main.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/game_of_life.dir/build.make CMakeFiles/game_of_life.dir/main.c.s
.PHONY : main.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... ansi"
	@echo "... circular"
	@echo "... clipped"
	@echo "... game_of_life"
	@echo "... ansi/ansi.o"
	@echo "... ansi/ansi.i"
	@echo "... ansi/ansi.s"
	@echo "... circular/circular.o"
	@echo "... circular/circular.i"
	@echo "... circular/circular.s"
	@echo "... clipped/clipped.o"
	@echo "... clipped/clipped.i"
	@echo "... clipped/clipped.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

