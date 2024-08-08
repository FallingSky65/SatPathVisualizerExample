cd build
# -DCMAKE_EXPORT_COMPILE_COMMANDS is for clangd, optional
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..
make
cd ..
