workspace "Week4 Challenge"
    configurations {"Debug", "Release"}
    location "Solution"
    
    project "week4 Challenge"
    kind "ConsoleApp"
    language "C++"
    targetdir "bin/%{cfg.buildcfg}"
    files "main.cpp"