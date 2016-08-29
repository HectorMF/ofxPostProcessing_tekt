#include "ofMain.h"
#include "testApp.h"


//========================================================================
int main( ){
  ofGLWindowSettings settings;
  settings.setGLVersion(3, 2);  // Programmable pipeline
  settings.width = 1200;
  settings.height = 700;
  ofCreateWindow(settings);
  ofRunApp(new testApp());
}
