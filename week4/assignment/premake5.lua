workspace "Week4 Assignment"
    configurations { "Debug", "Release" }
    location "Solution"

    project "Assignment"
        kind "ConsoleApp"
        language "C++"
        targetdir "bin/%{cfg.buildcfg}"

        files {
            "main.cpp",
            "ImageTransform.cpp",
            "ImageTransform.h",
            "uiuc/HSLAPixel.cpp",
            "uiuc/HSLAPixel.h",
            "uiuc/PNG.cpp",
            "uiuc/PNG.h",
            "uiuc/RGB_HSL.h",
            "uiuc/lodepng/lodepng.cpp",
            "uiuc/lodepng/lodepng.h",
            "uiuc/catch/catch.hpp",
            "uiuc/catch/catchmain.cpp",
            "alma.png",
            "overlay.png",
        }

        filter "configurations:Debug"
            defines { "DEBUG" }
            symbols "On"

        filter "configurations:Release"
            defines { "NDEBUG" }
            optimize "On"