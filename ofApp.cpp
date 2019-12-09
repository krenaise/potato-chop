#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
    
    if (ofGetMousePressed())
    {
        if (currentBrush == 'c')
        {
            ofDrawCircle(mouseX, mouseY, brushSize);
        }
        else if (currentBrush == 't')
        {
            ofDrawTriangle(mouseX, mouseY,
                          mouseX -10, mouseY+10,
                          mouseX-10, mouseY +10);
        }
        else if (currentBrush == 's')
            ofDrawRectangle(mouseX - brushSize/2, mouseY - brushSize/2, 0, 0, 0);
        }
    }
//    ofDrawCircle(ofGetMouseX(), ofGetMouseY(), brushSize);
//
//    }
//
//    if (ofGetKeyPressed('c'))
//    {
//        ofDrawCircle(ofGetMouseX(), ofGetMouseX(), brushSize);
//    }
//    if (ofGetKeyPressed('t'))
//    {
//        ofDrawTriangle(ofGetMouseX(), ofGetMouseY(), ofGetMouseX()-100, ofGetMouseY()+100, ofGetMouseX()+100, ofGetMouseY()+100);
//    }
//    if  (ofGetKeyPressed('s'))
//    {
//        ofDrawRectangle(ofGetMouseX(), ofGetMouseY(), 100, 100);
//
//    }
//
//    line.draw();
    
//    if (keyPressed(t) = true)
//    {
//    ofDrawTriangle(ofGetMouseX(), ofGetMouseY(), ofGetMouseX(), ofGetMouseY(), 0, 20);
//    }
    


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key =='[')
    {
        brushSize -= 1;
        brushSize = ofClamp(brushSize, 1, 100);
    }
    else if (key == ']')
    {
        brushSize += 1;
        brushSize = ofClamp(brushSize,1, 100);
    }
    else
    {
        
    std::string currentBrush = "square";
    
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
