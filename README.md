# RVAS


## Manual

```shell
# ELF Info
llvm-readelf -h Bytes.o

# Sections Info
llvm-readelf -S Bytes.o

# emit .o
clang -c Bytes.s

# Hex Editor: copy as C
Bytes.o
```
