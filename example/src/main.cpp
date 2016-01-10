#include "ofMain.h"
#include "testApp.h"
//#include "ofAppGlutWindow.h"
#include "ofGLProgrammableRenderer.cpp"


//========================================================================
int main( ){
    ofSetCurrentRenderer(ofGLProgrammableRenderer::TYPE);
//    ofAppGlutWindow window;
//	ofSetupOpenGL(&window, 1024,768, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
//	ofRunApp( new testApp());
    ofSetupOpenGL(1200, 700, OF_WINDOW);
    ofRunApp(new testApp());

}
