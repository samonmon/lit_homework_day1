#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
    ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int i,j;
    
    ofBackground(255);
    
    ofSetColor(128,128,128,128);
    ofSetLineWidth(2);
    
    for(int i=1;i<=20;i++){
        ofLine(0,32*i,1024,32*i);
    }
    for(int i=1;i<=31;i++){
        ofLine(32*i,0,32*i,768);
    }
    
    ofLine( mouseX, 0, mouseX, 768);
    ofLine( 0, mouseY, 1024, mouseY);
    
    
    float triX = mouseX - ofGetWidth()/2;
    float triY = ofGetHeight()/2 - mouseY;
    float triTheta = atan2(triY,triX);
    float angle = 180 * (triTheta / PI);
    
    if(angle<0) angle = angle + 360;
    cout << angle << endl;
    
    ofSetColor(ofColor::fromHsb(ofMap(angle,0,360,0,255), 255, 255));
    
    ofSetLineWidth(0.5);
    ofNoFill();
    ofCircle(ofGetWidth()/2,ofGetHeight()/2,sqrt((mouseX-ofGetWidth()/2)*(mouseX-ofGetWidth()/2)
                                                 + (mouseY-ofGetHeight()/2)*(mouseY-ofGetHeight()/2)));
    
    ofFill();
    ofCircle(ofGetWidth()/2,ofGetHeight()/2,sqrt((mouseX-ofGetWidth()/2)*(mouseX-ofGetWidth()/2)
                                                 + (mouseY-ofGetHeight()/2)*(mouseY-ofGetHeight()/2))/5);
    
    ofLine( mouseX, mouseY, ofGetWidth()/2,ofGetHeight()/2);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
