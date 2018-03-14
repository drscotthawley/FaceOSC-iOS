#pragma once

#include "ofxiOS.h"
#include "ofMain.h"
#include "ofxGui.h"
#include "ofxCv.h"
#include "FaceOsc.h"


class ofApp : public ofxiOSApp, public FaceOsc {
	
    public:
        void loadSettings();    // From FaceOSC/ofApp.h

        void setup();
        void update();
        void draw();
    
        //=== From FaceOSC/ofApp.h
        void keyPressed(int key);
    
        void setVideoSource(bool useCamera);

        bool bUseCamera, bPaused;
    
        int camWidth, camHeight;
        int movieWidth, movieHeight;
        int sourceWidth, sourceHeight;
    
        ofVideoGrabber cam;
        ofVideoPlayer movie;
        ofBaseVideoDraws *videoSource;
    
        ofxFaceTracker tracker;
        glm::mat4 rotationMatrix;
        bool ready;

        bool bDrawMesh;
    
        ofxPanel gui;
        bool bGuiVisible;
        //=== end FaceOSC/ofApp.h
    
        void exit();
	
        void touchDown(ofTouchEventArgs & touch);
        void touchMoved(ofTouchEventArgs & touch);
        void touchUp(ofTouchEventArgs & touch);
        void touchDoubleTap(ofTouchEventArgs & touch);
        void touchCancelled(ofTouchEventArgs & touch);

        void lostFocus();
        void gotFocus();
        void gotMemoryWarning();
        void deviceOrientationChanged(int newOrientation);

};


