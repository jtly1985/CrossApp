
package org.CrossApp.hellojavascript;

import org.CrossApp.lib.CrossAppActivity;
import org.CrossApp.lib.CrossAppGLSurfaceView;

import android.os.Bundle;

public class HelloJavacript extends CrossAppActivity{
	
    protected void onCreate(Bundle savedInstanceState){
		super.onCreate(savedInstanceState);	
	}

    public CrossAppGLSurfaceView onCreateView() {
    	CrossAppGLSurfaceView glSurfaceView = new CrossAppGLSurfaceView(this);
    	// HelloJavacript should create stencil buffer
    	glSurfaceView.setEGLConfigChooser(5, 6, 5, 0, 16, 8);
    	
    	return glSurfaceView;
    }

    static {
        System.loadLibrary("CrossApp_cpp");
    }     
}
