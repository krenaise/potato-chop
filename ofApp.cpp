#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofBackground(0);  // Clear the screen with a black color
    ofSetColor(255);  // Set the drawing color to white
    ofSetCircleResolution(50);
    ofEnableAntiAliasing();
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
//    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {  // If the left mouse button is pressed...
//        float randomColor = ofRandom(50, 255);
//        ofSetColor(randomColor);
//        ofSetRectMode(OF_RECTMODE_CENTER);
//        ofDrawCircle(ofGetMouseX(), ofGetMouseY(), 50, 50);  // Draw a 50 x 50 rect centered over the mouse
//    }
    

    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {  // If the left mouse button is pressed...
        if (currentBrush == 0){
            ofSetRectMode(OF_RECTMODE_CENTER);
            int numRects = 10;
            for (int r=0; r<numRects; r++) {
                ofSetColor(ofRandom(50, 255),ofRandom(50, 255),ofRandom(50, 255));
                float width = ofRandom(5, 20);
                float height = ofRandom(5, 20);
                float distance = ofRandom(brushSize);

                // Formula for converting from polar to Cartesian coordinates:
                //  x = cos(polar angle) * (polar distance)
                //  y = sin(polar angle) * (polar distance)

                // We need our angle to be in radians if we want to use sin() or cos()
                // so we can make use of an openFrameworks function to convert from degrees
                // to radians
                float angle = ofRandom(ofDegToRad(360.0));

                float xOffset = cos(angle) * distance;
                float yOffset = sin(angle) * distance;
                ofDrawRectangle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, width, height);
            }
        } else if (currentBrush == 1){
            int maxRadius = brushSize;  // Increase for a wider brush
            int radiusStepSize = 5;  // Decrease for more circles (i.e. a more opaque brush)
            int alpha = 3;  // Increase for a more opaque brush
            int maxOffsetDistance = 100;  // Increase for a larger spread of circles
            // draw smaller and smaller circles and layering (increasing) opaqueness
            for (int radius=maxRadius; radius>0; radius-=radiusStepSize) {
                float angle = ofRandom(ofDegToRad(360.0));
                float distance = ofRandom(maxOffsetDistance);
                float xOffset = cos(angle) * distance;
                float yOffset = sin(angle) * distance;
                ofSetColor(color);
                ofDrawCircle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, radius);
            }
        } else if (currentBrush == 2) {
            int numLines = 30;
            int minRadius = 25;
            int maxRadius = brushSize;
            for (int i=0; i<numLines; i++) {
                float angle = ofRandom(ofDegToRad(360.0));
                float distance = ofRandom(minRadius, maxRadius);
                float xOffset = cos(angle) * distance;
                float yOffset = sin(angle) * distance;
                float alpha = ofMap(distance, minRadius, maxRadius, 50, 0);  // Make shorter lines more opaque
                ofSetColor(color);
                ofDrawLine(ofGetMouseX(), ofGetMouseY(), ofGetMouseX()+xOffset, ofGetMouseY()+yOffset);
            }

        }
    }
    

    if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)) {  // If the right mouse button is pressed...
        ofBackground(0);  // Draw a black background over the screen
    }
}




//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key =='[')
    {
        brushSize -= 5;
        brushSize = ofClamp(brushSize, 25, 100);
    }
    else if (key == ']')
    {
        brushSize += 5;
        brushSize = ofClamp(brushSize,25, 100);
    }

    else if (key == 'b')
    {
        currentBrush = (currentBrush + 1) % 3;
    } else if (key == 'c') {
        colorIndex = (colorIndex + 1) % 6;
        switch (colorIndex)
        {
            case 1: color = ofColor::aqua;
                break;
            case 2: color = ofColor::plum;
                break;
            case 3: color = ofColor::red;
                break;
            case 4: color = ofColor::green;
                break;
            case 5: color = ofColor::yellow;
                break;
            case 6: color = ofColor::orange;
                break;
            default: color = ofColor::white;
                break;// code to be executed if n doesn't match any cases
        }
        
    } else if (key == 'e') {
        ofBackground(0);  // Draw a black background over the screen

    }
    
    
//
//    if( key == OF_KEY_BACKSPACE || key == OF_KEY_DEL )
//    {
//         std::cout <<"delete" << std::endl;
//    }
//
//    if (key == '[')
//    {
//        brushSize += 30;
//    }
//
//    brushSize = ofClamp(brushSize,2,100);
//
//    if (key == ']')
//    {
//        brushSize -= 30;
//    }
//
//    brushSize = ofClamp(brushSize,2,100);
//
    
//
//     if (key == 'c')
//     {
//        ofDrawCircle(ofGetMouseX(), ofGetMouseX(), 100);
//     }
//    if (key == 't')
//     {
//        ofDrawTriangle(ofGetMouseX(), ofGetMouseY(), ofGetMouseX()-100, ofGetMouseY()+100, ofGetMouseX()+100, ofGetMouseY()+100);
//     }
//    if  (key == 's')
//     {
//         ofDrawRectangle(ofGetMouseX(), ofGetMouseY(), 100, 100);
//
//    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
