## yo-kernel

yo is toy kernel just for practice.
For now, yo is designed for cortex-m4f.

### Progress

0.01 %

### Goals

1. Microkernel design
2. Process mode (No virtual address, but split address space)
3. Porting lwip (userspace)

## Build system

1. meson [http://mesonbuild.com/]
  - Use meson build system is just for fun.
  - It's compilation is very fast!

## How to build

1. mkdir build
2. meson.py --cross-file ../toolchain/cortex-m4f.txt --buildtype debug --warnlevel 3 ..

### Support

1. TI tiva tm4c129x-launchpad.

### Reference

1. f9-kernel [https://github.com/f9micro/f9-kernel]
2. NuttX [http://www.nuttx.org/]
3. rt-thread [http://www.rt-thread.org/]
