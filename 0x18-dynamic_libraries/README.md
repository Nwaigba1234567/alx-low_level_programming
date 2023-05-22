# 0x18. C - Dynamic libraries

## The main difference between dynamic and static libraries lies in how they are linked and loaded into programs:

### Static Libraries:
- Static libraries, also known as archives, are collections of precompiled object files.
- They are linked directly into the executable at compile-time, resulting in a larger executable file size.
- Any updates or bug fixes to the library require recompiling and relinking the entire program.
Static libraries have the file extension ".a" on Unix-like systems
(e.g., libexample.a) and ".lib" on Windows (e.g., example.lib).

### Dynamic Libraries:
- Dynamic libraries, also known as shared libraries, are separate binary files 
that contain compiled code and are loaded at runtime- They are linked
with the executable at compile-time, but the actual library
code is loaded and linked into the program's memory at runtime.
- Dynamic libraries are loaded once and shared among multiple programs,
reducing memory usage and allowing for easier updates and bug fixes.
