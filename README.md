# tconf
## Lightweight library for parsing plain-text configuration files

**NOTE: tconf is very much a work in progress, use at your own risk!**

Plain text configuration files offer a number of advantages:
* There are many text editors, meaning that users can tweak their settings with their preferred application
* They are easy to modify with shell scripts
* They are easy to share - you can just copy and paste them into comments on internet forums for example
* Every system has a plain text editor, meaning you can modify your settings over SSH or on a system where you have no administrative rights to install new software
* You can document settings using comments

### Syntax of a tconf configuration file

The format parsed by tconf is very simple; it consists of a sequence of key-value pairs.

The following is an example configuration file for a simple instant messaging client:

```yaml
# Comments start with a hash and continue until the end of the line
Username: "Longboi"
UserAvatarPath: "~/Pictures/Avatar.png"

# May either be 'Online', 'Busy', 'Away' and 'Offline'
DefaultStatus: Online

PressEnterToSend: false
```

### Building and Installing

This project using CMake for its build system.

Quick build and install (from the project directory):
```sh
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=OFF ..
make
make install
```

*TODO: provide installation instructions*
