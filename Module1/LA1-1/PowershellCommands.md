
## Terminal Commands
Note:  ($ means terminal prompt)
```bash
$ ls            # list folder
$ cd <dest>     # change directories
$ cd ..         # .. parent directory
$ pwd           # show present working directory
$ rm <name>  





```bash
.   #(one dot) present working


## C++ Basics
- File extension: ".cpp"



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
    cout << "\nData Type Bytes"
        << "\n------- ----"  
        << "\nint         "  << sizeof(int)  // integer
        << "\nchar        "  << sizeof(char) // characters 1 by
        << "\nlong        "  << sizeof(long) // long integers
        << "\nbool        "  << sizeof(bool) // boolean
        << endl;
    return 0;

}
```