# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Admin\Documents\prog_git\C_Z7\bit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Admin\Documents\prog_git\C_Z7\bit\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bit.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bit.dir/flags.make

CMakeFiles/bit.dir/main.c.obj: CMakeFiles/bit.dir/flags.make
CMakeFiles/bit.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\Documents\prog_git\C_Z7\bit\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bit.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\bit.dir\main.c.obj   -c C:\Users\Admin\Documents\prog_git\C_Z7\bit\main.c

CMakeFiles/bit.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bit.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Admin\Documents\prog_git\C_Z7\bit\main.c > CMakeFiles\bit.dir\main.c.i

CMakeFiles/bit.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bit.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Admin\Documents\prog_git\C_Z7\bit\main.c -o CMakeFiles\bit.dir\main.c.s

# Object files for target bit
bit_OBJECTS = \
"CMakeFiles/bit.dir/main.c.obj"

# External object files for target bit
bit_EXTERNAL_OBJECTS =

bit.exe: CMakeFiles/bit.dir/main.c.obj
bit.exe: CMakeFiles/bit.dir/build.make
bit.exe: CMakeFiles/bit.dir/linklibs.rsp
bit.exe: CMakeFiles/bit.dir/objects1.rsp
bit.exe: CMakeFiles/bit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Admin\Documents\prog_git\C_Z7\bit\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bit.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bit.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bit.dir/build: bit.exe

.PHONY : CMakeFiles/bit.dir/build

CMakeFiles/bit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bit.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bit.dir/clean

CMakeFiles/bit.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Admin\Documents\prog_git\C_Z7\bit C:\Users\Admin\Documents\prog_git\C_Z7\bit C:\Users\Admin\Documents\prog_git\C_Z7\bit\cmake-build-debug C:\Users\Admin\Documents\prog_git\C_Z7\bit\cmake-build-debug C:\Users\Admin\Documents\prog_git\C_Z7\bit\cmake-build-debug\CMakeFiles\bit.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bit.dir/depend

