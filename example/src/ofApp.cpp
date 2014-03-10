// =============================================================================
//
// Copyright (c) 2014 Christopher Baker <http://christopherbaker.net>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// =============================================================================


#include "ofApp.h"

#include "OpenStreetMapProvider.h"

void ofApp::setup()
{
	ofSetVerticalSync(true);

    map.setup(std::shared_ptr<OpenStreetMapProvider>(new OpenStreetMapProvider()),
              ofGetWidth(),
              ofGetHeight());

	map.setZoom(3);

}


void ofApp::update()
{
}


void ofApp::draw()
{
    ofBackground(0);

//    cam.begin();
//    ofScale(1,-1,1);
//    ofTranslate(-ofGetWidth()/2, -ofGetHeight()/2);
    // draw stuff
    map.draw();

//    cam.end();

    ofSetColor(255, 127, 255);

    ofDrawBitmapStringHighlight(ofToString(map.getCenter()), 15, 15);

    Point2d mouse(mouseX, mouseY);

//    cout << ">>>>" << mouse << endl;

    ofDrawBitmapStringHighlight(ofToString(map.pointCoordinate(mouse)), mouseX, mouseY);
    ofDrawBitmapStringHighlight(ofToString(map.pointLocation(mouse)), mouseX, mouseY + 14);

}


void ofApp::keyPressed(int key)
{
    if (key == 'f' || key == 'F') {
		ofToggleFullscreen();
	}
}
