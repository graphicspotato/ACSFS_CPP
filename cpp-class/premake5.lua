    workspace "CppClassExample"
        configurations { "Debug", "Release" }
        location "build"

    project "CppClassExample"
        kind "ConsoleApp"
        language "C++"
        targetdir "bin/%{cfg.buildcfg}"

        files { "main.cpp", "Cube.cpp", "Cube.h" }