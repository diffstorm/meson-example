
# Meson Example

[![Build Status](https://github.com/diffstorm/meson-example/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/diffstorm/meson-example/actions)
[![License](https://img.shields.io/github/license/diffstorm/meson-example)](https://github.com/diffstorm/meson-example/blob/main/LICENSE)
[![Language](https://img.shields.io/github/languages/top/diffstorm/meson-example)](https://github.com/diffstorm/meson-example)

Reusable example Meson setup for C/C++ projects.

This is a simple example project to demonstrate a reusable Meson setup with a C++ application and a C library.

## Directory Structure

- `crc32`: Contains the CRC32 static library source code.
- `app`: Contains the C++ application source code.
- `meson.build`: Configuration file for Meson.

```
+-- crc32
¦   +-- crc32.c
¦   +-- crc32.h
¦   +-- meson.build
+-- app
¦   +-- main.cpp
¦   +-- meson.build
+-- meson.build
```

## About Meson

Meson is a modern build system that is designed to be both fast and easy to use. It supports many languages and compilers, and it can generate build files for several backends, including Ninja and Visual Studio.

### Pros of Meson
- **Speed**: Meson is designed to be fast and efficient.
- **Ease of Use**: Simple syntax and straightforward configuration.
- **Cross-Platform**: Supports multiple operating systems and compilers.
- **Powerful Features**: Advanced dependency management, cross-compilation support, and more.

### Cons of Meson
- **Learning Curve**: May require some learning for users unfamiliar with new build systems.
- **Less Mature**: While rapidly growing, it may have fewer resources and community support compared to long-established tools like CMake.

## Prerequisites

Make sure you have the following dependencies installed:

```sh
sudo apt-get update
sudo apt-get install -y build-essential meson ninja-build
```

## Building the Project

First, clone the repository:
```sh
git clone https://github.com/diffstorm/meson-example.git
cd meson-example
```

To configure the build directory and compile the project, run:

```sh
meson setup build
ninja -C build
```

To build in release mode, use:

```sh
meson setup --buildtype=release build
ninja -C build
```

To build in debug mode, use:

```sh
meson setup --buildtype=debug build
ninja -C build
```

## Running the Application

To calculate the CRC32 checksum of a file, run the application with the file path as an argument:

```sh
./build/crc32-app <file>
```

For example:

```sh
./build/crc32-app example.txt
```

This will output the CRC32 checksum of the provided file.

## Usage Log

```sh
$ git clone https://github.com/diffstorm/meson-example.git

$ cd meson-example

meson-example$ meson setup build
The Meson build system
Version: 0.61.2
Source dir: meson-example
Build dir: meson-example/build
Build type: native build
Project name: crc32-project
Project version: 1.0.0
C compiler for the host machine: cc (gcc 11.4.0 "cc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0")
C linker for the host machine: cc ld.bfd 2.38
C++ compiler for the host machine: c++ (gcc 11.4.0 "c++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0")
C++ linker for the host machine: c++ ld.bfd 2.38
Host machine cpu family: x86_64
Host machine cpu: x86_64
Build targets in project: 2

Found ninja-1.10.1 at /usr/bin/ninja

meson-example$ ninja -C build
ninja: Entering directory `build'
[4/4] Linking target app/crc32-app

meson-example$ ./build/app/crc32-app LICENSE
CRC32 Checksum: d6eeb1c5
```

## :snowman: Author

Eray Öztürk ([@diffstorm](https://github.com/diffstorm))