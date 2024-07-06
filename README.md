# Raylib-Template
Template to generate a project using Raylib. Windows/Linux(C/C++)  

# Commands
make  
make clean  
make run  
make config=release  
make run config=release @The part about searching for assets and configs doesn't work correctly. Do not use!  

# Visual Studio Code
Extension Makefile Tools  
Extension C/C++  

# Windows 
W64devkit for Windows-> https://www.mingw-w64.org/downloads/  @Required: The "w64devkit\bin" folder must be in the system path  
Clang for Windows-> https://releases.llvm.org/download.html  @To use Vim/Neovim  
Vs Build Tools or Visual Studio (Desktop C/C++)-> https://visualstudio.microsoft.com/pt-br/downloads/ @To use Vim/Neovim  

# Linux Libs
Requires gcc/g++ or clang/clang++ => @To use Vim/Neovim

Ubuntu
sudo apt install libasound2-dev libx11-dev libxrandr-dev libxi-dev libgl1-mesa-dev libglu1-mesa-dev libxcursor-dev libxinerama-dev  

# Macros
DEBUG_MODE   = In Debug mode  
RELEASE_MODE = In Release mode  
CONFIG_PATH  = Path to configuration folder  
CONTENT_PATH = Path to Assets folder  
GAME_NAME    = Game Name    
PLATFORM_WINDOWS = Current platform Windows  
PLATFORM_LINUX   = Current platform Linux  
  
Note: To use macros it is necessary to convert to a string, an example of this in main.cpp  
Bug: when using visual studio code, sometimes a file is generated in the root folder like std=c++17, -g but it doesn't interfere with use at all.  

# Credits
Raylib Site-> https://www.raylib.com/  
Raylib GitHub-> https://github.com/raysan5/raylib  
Raylib Extra-> https://github.com/raylib-extras/game-premake  
Gabriel's Template for CPP -> https://github.com/gabriel-oprogramador/Raylib-Template
