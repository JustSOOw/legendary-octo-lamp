# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Users\JUSTsoo\Desktop\QTF

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Users\JUSTsoo\Desktop\QTF\build

# Utility rule file for QTF_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/QTF_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QTF_autogen.dir/progress.make

CMakeFiles/QTF_autogen: QTF_autogen/timestamp

QTF_autogen/timestamp: E:/QT/6.7.2/mingw_64/./bin/moc.exe
QTF_autogen/timestamp: E:/QT/6.7.2/mingw_64/./bin/uic.exe
QTF_autogen/timestamp: CMakeFiles/QTF_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=D:\Users\JUSTsoo\Desktop\QTF\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QTF"
	"C:\Program Files\CMake\bin\cmake.exe" -E cmake_autogen D:/Users/JUSTsoo/Desktop/QTF/build/CMakeFiles/QTF_autogen.dir/AutogenInfo.json Debug
	"C:\Program Files\CMake\bin\cmake.exe" -E touch D:/Users/JUSTsoo/Desktop/QTF/build/QTF_autogen/timestamp

QTF_autogen: CMakeFiles/QTF_autogen
QTF_autogen: QTF_autogen/timestamp
QTF_autogen: CMakeFiles/QTF_autogen.dir/build.make
.PHONY : QTF_autogen

# Rule to build all files generated by this target.
CMakeFiles/QTF_autogen.dir/build: QTF_autogen
.PHONY : CMakeFiles/QTF_autogen.dir/build

CMakeFiles/QTF_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\QTF_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/QTF_autogen.dir/clean

CMakeFiles/QTF_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Users\JUSTsoo\Desktop\QTF D:\Users\JUSTsoo\Desktop\QTF D:\Users\JUSTsoo\Desktop\QTF\build D:\Users\JUSTsoo\Desktop\QTF\build D:\Users\JUSTsoo\Desktop\QTF\build\CMakeFiles\QTF_autogen.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/QTF_autogen.dir/depend

