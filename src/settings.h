#define SYSTEM_VERBOSE false

#undef	CPU_PROFILE
#undef	HEAP_PROFILE
#undef	MANUAL_PROFILE


#define USE_VIDEO
#define _USE_LIVE_VIDEO
#undef USE_OPENCV_TRUNK

#undef	USE_TUIO
#undef	USE_OSC
#define	USE_GUI
#undef	USE_PHYSICS
#define	USE_TUI
#undef	USE_VBO
#undef	USE_SPEECH_TO_TEXT
#undef	USE_DATA
#undef	USE_TEMPLATE_MATCHING
#define	USE_GPU_VIS
#define	USE_REMOTE_CONTROL
#define USE_MSAREMOTE
#define USE_ACCEL
#define	USE_OPENCL
#define USE_TOON

#define tuioCursorSpeedMult	0.1f
#define NULL_FIDUCIAL_ID 0

// enable CL/GL Interop
#undef GL_INTEROP

#define VIDEO_WIDTH			640
#define VIDEO_INVWIDTH		1/VIDEO_WIDTH
#define VIDEO_HEIGHT		480
#define VIDEO_INVHEIGHT		1/VIDEO_HEIGHT
#define VIDEO_ASPECT		VIDEO_WIDTH/VIDEO_HEIGHT
#define VIDEO_SIZE			VIDEO_WIDTH,VIDEO_HEIGHT

#define BOX_CORNERS 4
#define MAX_FIDUCIAL_LIFE 30

#define MARKERS_FILE "dtouchmarkers.txt"