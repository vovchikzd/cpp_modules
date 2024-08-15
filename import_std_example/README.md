## "import std;" example (this doesn't work, and I don't know why)

### How to build
``` shell
cmake -S . -B .build -G Ninja && \
cmake --build .build
```

### Requirements
- CMake v3.30 or newer
- Compilers
  - clang v18.1 or newer
  - gcc v14 or newer
  - MVSC v19.34 or newer (Visual Studio v17.4 2022)
- Generators
  - Ninja v1.11 or newer (or Ninja Multi-Config)
  - MSVC toolset v14.34 or newer (Visual Studio v17.4 2022)

\
\
Useful [paper](https://www.kitware.com/import-std-in-cmake-3-30/)
