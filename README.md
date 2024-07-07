## C++20 modules example

### How to build
``` shell
cmake -S . -B .build -G Ninja && \
cmake --build .build
```

### Requirements
- CMake v3.28 or newer
- Compilers
  - clang v17 or newer (actually v16 or newer, but from v17 is preferable)
  - gcc v14 or newer
  - MVSC v19.34 or newer (Visual Studio v17.4 2022)
- Generators
  - Ninja v1.11 or newer (or Ninja Multi-Config)
  - MSVC toolset v14.34 or newer (Visual Studio v17.4 2022)

##### Module implementation unit
I couldn't compile it with module implementation unit just like that (add file to FILE_SET), [here](https://gist.github.com/stripe2933/6a1c7a2fa9a0fc6b3356db5ca5b13c97) there is example where case with module implementation unit works, but way through library looks kinda crutchy for me \
TODO:
- [ ] read iso about module implementation unit

\
\
Useful [Stack Overflow page](https://stackoverflow.com/questions/57300495/how-to-use-c20-modules-with-cmake)
