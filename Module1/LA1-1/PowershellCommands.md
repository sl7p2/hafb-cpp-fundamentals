
## C++ Environment in Windows
- VSCode  https://code.visualstudio.com/   // code editor
- git   https://git-scm.com/        // for source control
- cmake    https://cmake.org/     // to work with project
- g++ (mingw) http://www.mingw.org/  // compiler for windows. You need to add binaries to PATH env. variable
- github.com  http://github.com  // for cloud service

## Terminal Commands 
Note: ($ means terminal prompt):
```bash
$   ls          # list folder 
$ cd  <dest>  	# change directories
$ cd   ..		# .. parent directory 
$ pwd           # show present working directory
$ rm <name>     # remove/delete file/directory
$ mkdir <name>  # create directory/folder
```
## File System
``` bash
.    # (one dot) present working directory
..   # (two dots) parent directory
```
## C++ Basics
- Source File extension: `.cpp`
- Header files: `.h`

## g++ Compiler
```bash
# To compile
# -o for output file name
$ g++ main.cpp -o main
# To run
$ ./main.exe
```

### C++ File Template
```cpp
#include <iostream>
using namespace std;

int main()
{
    return 0;
}
```
## Plugins and Doxygen documentation
```cpp
// Add C/C++ Intellisense
// Add Code Spell Extension 
// Add Doxygen Documentation Generator
// Add Mark Down All In One
// Add CMake
// Add CMake Tools
```

```cpp
To generate Doxygen documentation: 
// Run /** and <Enter>
```

## g++ Compiler for 2 files
for example, if you have a library under the `functions.cpp` and `functions.h` files, and you have a driver under `run_functions.cpp` you need to compile as follows:
```bash
# To compile, list ALL source (cpp) files
# -o for output file name
$ g++ functions.cpp run_functions.cpp -o run_functions
# To run
$ 


### CMake
To build a project we need all the rules to be set under`CMakeLists.txt` file.
- Create a build folder: `$ mkdir build`
- Go to the build dir: `$ cd build`
- Run cmake: `$ cmake .. -G "MinGW Makefiles"` The `..` is because your CMakeLists.txt is one folder uo.
- Build or compile your code: `$ cmake --build .The . means to build in in pwd.`
