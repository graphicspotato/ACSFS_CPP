workspace "Heap Puzzles"
configurations { "Debug", "Release" }
location "solution"

project "Heap Puzzles"
kind "ConsoleApp"
language "C++"
targetdir "bin/%{cfg.buildcfg}"

files { "puzzle1.cpp", "puzzle2.cpp", "puzzle3.cpp","puzzle4.cpp"}