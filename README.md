
# SIMPLE CLI

Project was created in C to learn and understand the basics of CLI and how to use them.

The project was created with the use of GCC and VS Code as the editor.

# TABLE OF CONTENTS

1. [PREREQUISITES](#prerequisites)
2. [MSYS2](#msys2)
    1. [INSTALLATION](#installation)
3. [VS CODE](#vs-code)
    1. [INSTALLATION](#installation-1)
4. [BUILD](#build)
5. [DEBUG](#debug)
    

## PREREQUISITES

Required downloads in this example:
- **MSYS2:** https://www.msys2.org/
- **VS Code:** https://code.visualstudio.com/download

## MSYS2

> MSYS2 is a collection of tools and libraries providing you with an easy-to-use environment for building, installing and running native Windows software.
>
>It consists of a command line terminal called mintty, bash, version control systems like git and subversion, tools like tar and awk and even build systems like autotools, all based on a modified version of Cygwin. Despite some of these central parts being based on Cygwin, the main focus of MSYS2 is to provide a build environment for native Windows software and the Cygwin-using parts are kept at a minimum. MSYS2 provides up-to-date native builds for GCC, mingw-w64, CPython, CMake, Meson, OpenSSL, FFmpeg, Rust, Ruby, just to name a few.

### INSTALLATION

To instal the package, just follow the instructions in on the site. Very straight forward.

## VS CODE

> Visual Studio Code (VS Code) is a free, open-source, and lightweight code editor developed by Microsoft. It is designed to work on multiple platforms (Windows, macOS, and Linux) and is highly extensible and customizable.

### INSTALLATION

Installation is again very simple, download the package and run the installer, or in whatever manner it's most comfortable for you.

After the installation, make sure to get the recommended extensions, like "C/C++" package by Microsoft.

## BUILD

To build a .exe simply navigate to ***Terminal*** in the tool bar, and select ***Run build task***, or ***CTRL+SHIFT+B***

#### **IMPORTANT!**

Make sure you have the file you want to build open.

## DEBUG

On the left most side menu, select ***Run and Debug*** or ***CTRL+SHIFT+D***. Then click on the ***create a launch.json file***. This will create and open the launch.json file in the .vscode folder.

```json
{
  // Use IntelliSense to learn about possible attributes.
  // Hover to view descriptions of existing attributes.
  // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
  "version": "0.2.0",
  "configurations": [
    {
      "name": "Name of project", // should be the name of the window that opens
      "type": "cppdbg",
      "request": "launch",
      "program": "${workspaceFolder}/${fileBasenameNoExtension}.exe",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": true,
      "MIMode": "gdb",
      "miDebuggerPath": "C:/msys64/usr/bin/gdb.exe",
      "preLaunchTask": "C/C++: gcc.exe build active file",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        }
      ]
    }
  ]
}
```

When the lanuch.json file is created, in the ***Run and Debug*** tab, click on ***start debugging*** or ***F5***. An error message will pop up prompting you to create a task.json file.

```json
{
  // See https://go.microsoft.com/fwlink/?LinkId=733558
  // for the documentation about the tasks.json format
  "version": "2.0.0",
  "tasks": [
    {
			"type": "cppbuild",
			"label": "C/C++: gcc.exe build active file",
			"command": "C:\\msys64\\ucrt64\\bin\\gcc.exe",
			"args": [
				"-fdiagnostics-color=always",
				"-g",
				"${file}",
				"-o",
				"${fileDirname}\\${fileBasenameNoExtension}.exe"
			],
			"options": {
				"cwd": "C:\\msys64\\ucrt64\\bin"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": "build",
			"detail": "compiler: C:\\msys64\\ucrt64\\bin\\gcc.exe"
		}
  ]
}
```