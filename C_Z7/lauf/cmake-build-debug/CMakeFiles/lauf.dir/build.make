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
CMAKE_SOURCE_DIR = C:\Users\Admin\CLionProjects\lauf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Admin\CLionProjects\lauf\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lauf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lauf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lauf.dir/flags.make

CMakeFiles/lauf.dir/main.c.obj: CMakeFiles/lauf.dir/flags.make
CMakeFiles/lauf.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\lauf\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lauf.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\lauf.dir\main.c.obj   -c C:\Users\Admin\CLionProjects\lauf\main.c

CMakeFiles/lauf.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lauf.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Admin\CLionProjects\lauf\main.c > CMakeFiles\lauf.dir\main.c.i

CMakeFiles/lauf.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lauf.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Admin\CLionProjects\lauf\main.c -o CMakeFiles\lauf.dir\main.c.s

# Object files for target lauf
lauf_OBJECTS = \
"CMakeFiles/lauf.dir/main.c.obj"

# External object files for target lauf
lauf_EXTERNAL_OBJECTS =

lauf.exe: CMakeFiles/lauf.dir/main.c.obj
lauf.exe: CMakeFiles/lauf.dir/build.make
lauf.exe: CMakeFiles/lauf.dir/linklibs.rsp
lauf.exe: CMakeFiles/lauf.dir/objects1.rsp
lauf.exe: CMakeFiles/lauf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Admin\CLionProjects\lauf\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lauf.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lauf.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lauf.dir/build: lauf.exe

.PHONY : CMakeFiles/lauf.dir/build

CMakeFiles/lauf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lauf.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lauf.dir/clean

CMakeFiles/lauf.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Admin\CLionProjects\lauf C:\Users\Admin\CLionProjects\lauf C:\Users\Admin\CLionProjects\lauf\cmake-build-debug C:\Users\Admin\CLionProjects\lauf\cmake-build-debug C:\Users\Admin\CLionProjects\lauf\cmake-build-debug\CMakeFiles\lauf.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lauf.dir/depend

