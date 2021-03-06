Legacy 2345
===========

[![Build Status](https://travis-ci.org/legacy2345/legacy2345.svg?branch=master)](https://travis-ci.org/legacy2345/legacy2345)
[![License](https://img.shields.io/badge/license-GPLv3-7DB3C5.svg)](https://github.com/legacy2345/legacy2345/blob/master/COPYING)
[![Project Status](https://img.shields.io/badge/Project_Status-pre--alpha-C5A27E.svg)](https://github.com/legacy2345/legacy2345)

**Legacy 2345** is a science fiction themed simulation game in which the player controls
a colony on an isolated planet in the far reaches of the galaxy.  The goal is to
build the colony, explore the planet, and generally survive and maybe thrive.

Instructions on how to build and install the project can be found in the file
'INSTALL'.

Conditions of copying or distributing this game and its source can be found in
the file 'COPYING'.

Getting Started
---------------

**Legacy 2345** is in the pre-alpha development stage at this point and only
available as a git clone buildable on POSIXish systems.

To get the latest version for evaluation, clone this repo and build from source.

```sh
git clone git@github.com:legacy2345/v3.git legcy2345
mkdir build; cd build
../legacy2345/autogen.sh
make check
```

Prerequisites
-------------

Current requirements for building include the following.
- A C++11 compliant compiler (GCC 4.9 or later, clang 3.7 or later)
- The development packages for the following libraries:
  - libSDL2, libSDL_image
  - OpenGL, GLEW
  - libfreetype2

Contributing
------------

The best way to start contributing is to clone and build the code, then choose
an issue from the [issues list](https://github.com/legacy2345/v3/issues), develop a branch for it, and create a pull
request for your solution. See
[CONTRIBUTING.md](https://github.com/legacy2345/v3/blob/master/.github/CONTRIBUTING.md)

License
-------

**Legacy 2345** is licensed under version 3 the General Public License.  See the
file COPYING for more information.

