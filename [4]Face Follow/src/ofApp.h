#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxHistoryPlot.h"

class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
	
	ofVideoGrabber cam;
	ofxCv::ObjectFinder finder;
	ofImage sunglasses;
	ofxHistoryPlot * plot;
};
