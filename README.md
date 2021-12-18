a minimal example showing how to build whls containing C++17 bindings that are compatible with windows and manylinux

to compile without setup, run:

```
cmake -S . -B winbuild -DPYTHON_VERSION=3.9
cmake --build winbuild
```