workspace "Week2"
configurations { "Debug", "Release" }
location "solution"

project "Week2StackMemoryAndPointers"
kind "ConsoleApp"
language "C++"
targetdir "bin/%{cfg.buildcfg}"

files { "main.cpp", "Cube.cpp", "Cube.h","addressOf.cpp", "foo.cpp", "puzzle.cpp" }