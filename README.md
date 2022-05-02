# OpenGL-API
Basic geometry shapes and basic transformation

PHASE 1 - SETUP AND INSTALLATION
============================================ 
1. Install code blocks version [17.12].ensure has mingw

link[https://sourceforge.net/projects/codeblocks/],
link2[https://sourceforge.net/projects/codeblocks/files/Binaries/17.12/Windows/]

2. Download glut
link[https://bit.ly/3y8b0mB]

3. transfer files
    FILE	 |    LOCATION
A) "glut32.dll"   to , "C:\Windows\System\", "C:\Windows\System32"
B) "glut.h" 	  to "C:\Program Files (x86)\CodeBlocks\MinGW\include\GL"
C) "glut32.lib"   to "C:\Program Files (x86)\CodeBlocks\MinGW\lib"

PHASE 2 - CODING
============================================

4. copy minGW location
path-1 "C:\Program Files\CodeBlocks\MinGW"
to be provided in the mingw path after running code blocks

run codeblocks, and choose opengl

5. includes
a) "#include<windows.h>"

6. errors and solution
a) compiler error
Setting -> Compiler -> Global Compiler Settings -> Toolchain Execuatables (tab). There, click on Program Files and then rename C compiler to gcc.exe and C++ compiler to g++.exe
