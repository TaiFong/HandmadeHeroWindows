#!/bin/bash

libs=-luser32
warnings="-Wno-writable-strings -Wno-format-security"
clang++ -g src/HandmadeHero.cpp -o handmade.exe $libs $warnings
