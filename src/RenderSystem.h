#pragma once

#include "ofMain.h"
#include "ofxMSAInteractiveObject.h"
#include "VideoSystem.h"

#include "kernels/rayTracingKernel.cpp"
// Unfortunately, we schedule our own invocation
#include "ofxClScheduler.h"

class RenderSystem : public ofxMSAInteractiveObject {
public:
	friend class testApp;
	RenderSystem();
	virtual ~RenderSystem();
	
	void setup();
	void update();

	void draw();
	void toggleDraw();
	
	void destroy();
	
	void keyPressed(int key);
	void onMouseDragOver(int x, int y, int button);
	void mouseMoved(int x, int y);
	
	RayTracingKernel rayTracer;
	
	struct RenderSettings {
		bool do_draw;
		ofPoint* rot;
		ofPoint* offset;
	} settings;
	
	
	// Old mouse position
	int ox, oy;
	
	bool verbose;

	ofxClScheduler* clScheduler;

protected:
//	VideoPipeline pipe;
	
};
