# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\lucbp\CLionProjects\uHIsystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lucbp\CLionProjects\uHIsystem\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/uHIsystem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/uHIsystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/uHIsystem.dir/flags.make

CMakeFiles/uHIsystem.dir/main.c.obj: CMakeFiles/uHIsystem.dir/flags.make
CMakeFiles/uHIsystem.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lucbp\CLionProjects\uHIsystem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/uHIsystem.dir/main.c.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\uHIsystem.dir\main.c.obj   -c C:\Users\lucbp\CLionProjects\uHIsystem\main.c

CMakeFiles/uHIsystem.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uHIsystem.dir/main.c.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\lucbp\CLionProjects\uHIsystem\main.c > CMakeFiles\uHIsystem.dir\main.c.i

CMakeFiles/uHIsystem.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uHIsystem.dir/main.c.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\lucbp\CLionProjects\uHIsystem\main.c -o CMakeFiles\uHIsystem.dir\main.c.s

# Object files for target uHIsystem
uHIsystem_OBJECTS = \
"CMakeFiles/uHIsystem.dir/main.c.obj"

# External object files for target uHIsystem
uHIsystem_EXTERNAL_OBJECTS =

uHIsystem.exe: CMakeFiles/uHIsystem.dir/main.c.obj
uHIsystem.exe: CMakeFiles/uHIsystem.dir/build.make
uHIsystem.exe: CMakeFiles/uHIsystem.dir/linklibs.rsp
uHIsystem.exe: CMakeFiles/uHIsystem.dir/objects1.rsp
uHIsystem.exe: CMakeFiles/uHIsystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lucbp\CLionProjects\uHIsystem\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable uHIsystem.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\uHIsystem.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/uHIsystem.dir/build: uHIsystem.exe

.PHONY : CMakeFiles/uHIsystem.dir/build

CMakeFiles/uHIsystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\uHIsystem.dir\cmake_clean.cmake
.PHONY : CMakeFiles/uHIsystem.dir/clean

CMakeFiles/uHIsystem.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lucbp\CLionProjects\uHIsystem C:\Users\lucbp\CLionProjects\uHIsystem C:\Users\lucbp\CLionProjects\uHIsystem\cmake-build-debug C:\Users\lucbp\CLionProjects\uHIsystem\cmake-build-debug C:\Users\lucbp\CLionProjects\uHIsystem\cmake-build-debug\CMakeFiles\uHIsystem.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/uHIsystem.dir/depend

