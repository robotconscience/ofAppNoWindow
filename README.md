ofAppNoWindow
=============

Extends existing ofAppNoWindow code to work with openFrameworks 007+. Mostly just a quick fix to add ofNoWindowRunner to existing code! 
I believe the first ofAppNoWindow code is found here?: https://github.com/damiannz/damian_public_of_apps

Usage
=============
* In main.cpp, include both files after ofAppGlutWindow: 
  * ```#include "ofAppNoWindow.h" ```
  * ```#include "ofNoWindowRunner.h"```
* Setup like this:
  * ```ofAppNoWindow window;```
  * ```ofSetupNoWindow(&window, 1024, 768, OF_WINDOW);```
* That's it!
