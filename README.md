# tconf

**NOTE: tconf is very much a work in progress, use at your own risk!**

Most non-trivial applications have configuration files to define their initial settings. tconf exists as a low-overhead helper library for parsing configuration files with a specified format.

Plain text configuration files offer a number of advantages:
* There are many text editors, meaning that users can tweak their settings with their preferred application
* They are easy to modify with shell scripts
* They are easy to share - you can just copy and paste them into comments on internet forums for example
* Every system has a plain text editor, meaning you can modify your settings over SSH or on a system where you have no administrative rights to install new software
* You can document settings using comments

## Installation on Mac OS X

Currently the only way to install tconf is to build it from source.

### Build prerequisites:
* [XCode](https://itunes.apple.com/gb/app/xcode/id497799835) and [the Command Line Tools](https://developer.apple.com/download/more/) (tested with XCode version 9.0)
* [CMake](https://cmake.org/download/) version 2.8 or later
* Optional: [Doxygen](http://www.stack.nl/~dimitri/doxygen/download.html), required for building documentation (building documentation is enabled by default)

### Build and install

To build and install tconf onto your system, run the following commands in a terminal

```sh
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=OFF -DCMAKE_INSTALL_PREFIX=/usr/local ..
make
make install
```

## Installation on Linux

*Note from the author: I currently do not have a Linux machine for testing, so I cannot verify an installation process, however the instructions given for Mac OS might work.*

## Installation on Windows

*Note from the author: I currently do not have a Windows machine for testing, so I cannot verify an installation process.*

## Syntax of a tconf configuration file

The format parsed by tconf is very simple; it consists of a sequence of key-value pairs.

The following is an example configuration file for a simple instant messaging client:

```conf
# Comments start with a hash and continue until the end of the line
Username: "Longboi"
UserAvatarPath: "~/Pictures/Avatar.png"

# May either be 'Online', 'Busy', 'Away' and 'Offline'
DefaultStatus: Online

PressEnterToSend: false
```

## Authors

* **Adam Cowdy** ([Acowdy](https://github.com/Acowdy)) <cowdyadam@gmail.com> - Initial work

## License

This project is licensed under the Apache License version 2.0 - see LICENSE-2.0 for details.
