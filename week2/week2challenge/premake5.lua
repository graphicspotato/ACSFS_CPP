workspace "Week2 Challenge"
    configurations {"Debug", "Release"}
    location "Solution"
    
    project "Challenge"
    kind "ConsoleApp"
    language "C++"
    targetdir "bin/%{cfg.buildcfg}"
    files "main.cpp"