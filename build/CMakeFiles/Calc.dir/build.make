# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = /opt/anaconda3/lib/python3.12/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /opt/anaconda3/lib/python3.12/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/build"

# Include any dependencies generated for this target.
include CMakeFiles/Calc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Calc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Calc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Calc.dir/flags.make

CMakeFiles/Calc.dir/codegen:
.PHONY : CMakeFiles/Calc.dir/codegen

CMakeFiles/Calc.dir/calculator.cpp.o: CMakeFiles/Calc.dir/flags.make
CMakeFiles/Calc.dir/calculator.cpp.o: /Users/kareem/Desktop/University/4\ -\ Spring\ '25/CSCE\ 1101/CSCE1102/CS2-Caluclator-David-Michael/Part\ 2/calculator.cpp
CMakeFiles/Calc.dir/calculator.cpp.o: CMakeFiles/Calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Calc.dir/calculator.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calc.dir/calculator.cpp.o -MF CMakeFiles/Calc.dir/calculator.cpp.o.d -o CMakeFiles/Calc.dir/calculator.cpp.o -c "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/calculator.cpp"

CMakeFiles/Calc.dir/calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Calc.dir/calculator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/calculator.cpp" > CMakeFiles/Calc.dir/calculator.cpp.i

CMakeFiles/Calc.dir/calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Calc.dir/calculator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/calculator.cpp" -o CMakeFiles/Calc.dir/calculator.cpp.s

CMakeFiles/Calc.dir/test.cpp.o: CMakeFiles/Calc.dir/flags.make
CMakeFiles/Calc.dir/test.cpp.o: /Users/kareem/Desktop/University/4\ -\ Spring\ '25/CSCE\ 1101/CSCE1102/CS2-Caluclator-David-Michael/Part\ 2/test.cpp
CMakeFiles/Calc.dir/test.cpp.o: CMakeFiles/Calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Calc.dir/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calc.dir/test.cpp.o -MF CMakeFiles/Calc.dir/test.cpp.o.d -o CMakeFiles/Calc.dir/test.cpp.o -c "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/test.cpp"

CMakeFiles/Calc.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Calc.dir/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/test.cpp" > CMakeFiles/Calc.dir/test.cpp.i

CMakeFiles/Calc.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Calc.dir/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/test.cpp" -o CMakeFiles/Calc.dir/test.cpp.s

# Object files for target Calc
Calc_OBJECTS = \
"CMakeFiles/Calc.dir/calculator.cpp.o" \
"CMakeFiles/Calc.dir/test.cpp.o"

# External object files for target Calc
Calc_EXTERNAL_OBJECTS =

Calc: CMakeFiles/Calc.dir/calculator.cpp.o
Calc: CMakeFiles/Calc.dir/test.cpp.o
Calc: CMakeFiles/Calc.dir/build.make
Calc: CMakeFiles/Calc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Calc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Calc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Calc.dir/build: Calc
.PHONY : CMakeFiles/Calc.dir/build

CMakeFiles/Calc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Calc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Calc.dir/clean

CMakeFiles/Calc.dir/depend:
	cd "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2" "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2" "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/build" "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/build" "/Users/kareem/Desktop/University/4 - Spring '25/CSCE 1101/CSCE1102/CS2-Caluclator-David-Michael/Part 2/build/CMakeFiles/Calc.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Calc.dir/depend

