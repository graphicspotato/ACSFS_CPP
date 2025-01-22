workspace "Week3 Hanoi"
configurations { "Debug", "Release" }
location "solution"

project "Hanoi Tower"
kind "ConsoleApp"
language "C++"
targetdir "bin/%{cfg.buildcfg}"

files { "Game.cpp", "Game.h", "main.cpp","Stack.cpp", "Stack.h", "uiuc/Cube.h", "uiuc/Cube.cpp", "uiuc/HSLAPixel.h", "uiuc/HSLAPixel.cpp"}