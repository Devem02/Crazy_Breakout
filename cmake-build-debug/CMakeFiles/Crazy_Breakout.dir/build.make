# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/umi/Downloads/CLion-2021.2.1/clion-2021.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/umi/Downloads/CLion-2021.2.1/clion-2021.2.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/umi/Documents/Crazy_Breakout

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/umi/Documents/Crazy_Breakout/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Crazy_Breakout.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Crazy_Breakout.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Crazy_Breakout.dir/flags.make

CMakeFiles/Crazy_Breakout.dir/main.cpp.o: CMakeFiles/Crazy_Breakout.dir/flags.make
CMakeFiles/Crazy_Breakout.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/umi/Documents/Crazy_Breakout/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Crazy_Breakout.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Crazy_Breakout.dir/main.cpp.o -c /home/umi/Documents/Crazy_Breakout/main.cpp

CMakeFiles/Crazy_Breakout.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Crazy_Breakout.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/umi/Documents/Crazy_Breakout/main.cpp > CMakeFiles/Crazy_Breakout.dir/main.cpp.i

CMakeFiles/Crazy_Breakout.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Crazy_Breakout.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/umi/Documents/Crazy_Breakout/main.cpp -o CMakeFiles/Crazy_Breakout.dir/main.cpp.s

CMakeFiles/Crazy_Breakout.dir/Server.cpp.o: CMakeFiles/Crazy_Breakout.dir/flags.make
CMakeFiles/Crazy_Breakout.dir/Server.cpp.o: ../Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/umi/Documents/Crazy_Breakout/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Crazy_Breakout.dir/Server.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Crazy_Breakout.dir/Server.cpp.o -c /home/umi/Documents/Crazy_Breakout/Server.cpp

CMakeFiles/Crazy_Breakout.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Crazy_Breakout.dir/Server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/umi/Documents/Crazy_Breakout/Server.cpp > CMakeFiles/Crazy_Breakout.dir/Server.cpp.i

CMakeFiles/Crazy_Breakout.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Crazy_Breakout.dir/Server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/umi/Documents/Crazy_Breakout/Server.cpp -o CMakeFiles/Crazy_Breakout.dir/Server.cpp.s

CMakeFiles/Crazy_Breakout.dir/Cliente.cpp.o: CMakeFiles/Crazy_Breakout.dir/flags.make
CMakeFiles/Crazy_Breakout.dir/Cliente.cpp.o: ../Cliente.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/umi/Documents/Crazy_Breakout/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Crazy_Breakout.dir/Cliente.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Crazy_Breakout.dir/Cliente.cpp.o -c /home/umi/Documents/Crazy_Breakout/Cliente.cpp

CMakeFiles/Crazy_Breakout.dir/Cliente.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Crazy_Breakout.dir/Cliente.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/umi/Documents/Crazy_Breakout/Cliente.cpp > CMakeFiles/Crazy_Breakout.dir/Cliente.cpp.i

CMakeFiles/Crazy_Breakout.dir/Cliente.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Crazy_Breakout.dir/Cliente.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/umi/Documents/Crazy_Breakout/Cliente.cpp -o CMakeFiles/Crazy_Breakout.dir/Cliente.cpp.s

CMakeFiles/Crazy_Breakout.dir/mainCliente.cpp.o: CMakeFiles/Crazy_Breakout.dir/flags.make
CMakeFiles/Crazy_Breakout.dir/mainCliente.cpp.o: ../mainCliente.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/umi/Documents/Crazy_Breakout/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Crazy_Breakout.dir/mainCliente.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Crazy_Breakout.dir/mainCliente.cpp.o -c /home/umi/Documents/Crazy_Breakout/mainCliente.cpp

CMakeFiles/Crazy_Breakout.dir/mainCliente.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Crazy_Breakout.dir/mainCliente.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/umi/Documents/Crazy_Breakout/mainCliente.cpp > CMakeFiles/Crazy_Breakout.dir/mainCliente.cpp.i

CMakeFiles/Crazy_Breakout.dir/mainCliente.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Crazy_Breakout.dir/mainCliente.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/umi/Documents/Crazy_Breakout/mainCliente.cpp -o CMakeFiles/Crazy_Breakout.dir/mainCliente.cpp.s

# Object files for target Crazy_Breakout
Crazy_Breakout_OBJECTS = \
"CMakeFiles/Crazy_Breakout.dir/main.cpp.o" \
"CMakeFiles/Crazy_Breakout.dir/Server.cpp.o" \
"CMakeFiles/Crazy_Breakout.dir/Cliente.cpp.o" \
"CMakeFiles/Crazy_Breakout.dir/mainCliente.cpp.o"

# External object files for target Crazy_Breakout
Crazy_Breakout_EXTERNAL_OBJECTS =

Crazy_Breakout: CMakeFiles/Crazy_Breakout.dir/main.cpp.o
Crazy_Breakout: CMakeFiles/Crazy_Breakout.dir/Server.cpp.o
Crazy_Breakout: CMakeFiles/Crazy_Breakout.dir/Cliente.cpp.o
Crazy_Breakout: CMakeFiles/Crazy_Breakout.dir/mainCliente.cpp.o
Crazy_Breakout: CMakeFiles/Crazy_Breakout.dir/build.make
Crazy_Breakout: CMakeFiles/Crazy_Breakout.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/umi/Documents/Crazy_Breakout/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Crazy_Breakout"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Crazy_Breakout.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Crazy_Breakout.dir/build: Crazy_Breakout
.PHONY : CMakeFiles/Crazy_Breakout.dir/build

CMakeFiles/Crazy_Breakout.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Crazy_Breakout.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Crazy_Breakout.dir/clean

CMakeFiles/Crazy_Breakout.dir/depend:
	cd /home/umi/Documents/Crazy_Breakout/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/umi/Documents/Crazy_Breakout /home/umi/Documents/Crazy_Breakout /home/umi/Documents/Crazy_Breakout/cmake-build-debug /home/umi/Documents/Crazy_Breakout/cmake-build-debug /home/umi/Documents/Crazy_Breakout/cmake-build-debug/CMakeFiles/Crazy_Breakout.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Crazy_Breakout.dir/depend

