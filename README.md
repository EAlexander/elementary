Mia::Elementary
===============

Mia::Elementary is an execution engine for scalable statistial 
inference and learning.

Mia::Elementary is developed by the Hazy group (http://hazy.cs.wisc.edu/hazy/)
from University of Wisconsin-Madison under Professor Christopher Ré 
(http://pages.cs.wisc.edu/~chrisre/).

====================
  Table of Content
--------------------
  1. Introduction
  2. Installation
  3. Examples
====================
   
1. Introduction

2. Installation

2.1 Prerequisite

2.1.1 Operating Systems

Mia::Elementary is tested in the following operating systems:

  - MacOSX (>10.6);
  - Redhat Linux Enterprise 5.0;
  - Windows 7 Professional.

2.1.2 Dependencies

Mia::Elementary is written in C++ and has been tested using the following compilers:

  - GCC 4.4.6 under Linux
  - GCC 4.2.1 under MacOSX
  - Visual Studio Express under Windows

To use the MLN component in Mia::Elementary, Java (>1.6) and Python (>2.6) is required.

Mia::Elementary relies on the following C++ libraries:

  - Boost::program_options (http://www.boost.org/doc/libs/1_50_0/doc/html/program_options.html)

Mia::Elementary needs CMake (>2.6) to build. (http://www.cmake.org/)

2.2 Installation

After downloading and uncompressing Mia::Elementary, the folder mia has the following structure:

  mia
   +- bin
   +- dep
   +- src
   |- CMakeLists.txt
   |- README.md
   
To install Mia::Elementary, go to the folder mia, and type in

  $ cmake .

The following lines should prompt:

  -- Use build optimizations: Release
  -- The C compiler identification is GNU
  -- The CXX compiler identification is GNU
  -- Check for working C compiler: /usr/bin/gcc
  -- Check for working C compiler: /usr/bin/gcc -- works
  -- Detecting C compiler ABI info
  -- Detecting C compiler ABI info - done
  -- Check for working CXX compiler: /usr/bin/c++
  -- Check for working CXX compiler: /usr/bin/c++ -- works
  -- Detecting CXX compiler ABI info
  -- Detecting CXX compiler ABI info - done
  -- Boost version: 1.49.0
  -- Found the following Boost libraries:
  --   program_options
  -- Configuring done
  -- Generating done
  -- Build files have been written to: /raid/czhang/Codes/mia

A file named ``Makefile'' should appear in the folder mia now.
To build Mia::Elementary, type in

  $ make
  
A binary file named ``elementary'' should appear in the folder mia/bin.
To test this binary, type in

  $ ./bin/elementary

and the following lines should prompt asking for more command line options:

##### Elly 0.1 #####
>> Parsing command line options... 
ERROR: std::exception
Allowed options:
  --help                  Produce help message
  --config arg            Configuration file. command line options have higher 
                          priority than config file.
  --ui.verbose arg        Verbose level for STDOUT and STDERR. {trace, debug, 
                          info}. [DEFAULT=info]
  --ui.logfile arg        Path to log file if need one.
  --ui.logverbose arg     Verbose level for log file. {trace, debug, info}. 
                          [DEFAULT=debug]
  --rt.input arg          Where does input factor graph located in. 
                          {file://DIR_PATH}.
  --rt.output arg         Where does output located in. {file://FILE_PATH}.
  --rt.workdir arg        Directory that contains temporary files.
  --rt.mode arg           Mode that Elly runs in. {map, marginal, sample, learn}. 
                          [DEFAULT=marginal]
  --rt.thin arg           Collect one sample every #rt.thin iterations. 
                          [DEFAULT=1]
  --rt.burnin arg         Ignore the first #rt.burnin collected samples. 
                          [DEFAULT=1]
  --rt.nepoch arg         Number of iterations (epochs) to run. [DEFAULT=10]
  --rt.learn_initstep arg Initial step size for SGD learning. [DEFAULT=0.01]
  --rt.learn_decay arg    Decay factor for SGD learning step size after each 
                          epoch. [DEFAULT=1.00]
  --sys.threads arg       Number of threads to use. [DEFAULT=1]

 










