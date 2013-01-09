//
//  ofNoWindowRunner.h

#pragma once

#include "ofMain.h"

void ofSetupNoWindow(ofAppBaseWindow * windowPtr, int w, int h, int screenMode);
void ofSetupNoWindow(ofPtr<ofAppBaseWindow> windowPtr, int w, int h, int screenMode);
void ofSetupNoWindow(int w, int h, int screenMode);