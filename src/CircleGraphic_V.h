#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CircleGraphic_V : public BaseGraphic {
    int x = 800;
    int y = 200;
    float radius_counter = 0;
    float radius = 200;
    
public:
    void update() {
        if (radius <= 3){
            isDone = true;
        }
        radius -= 4;
    }
    void draw() {
        ofSetColor(255,0,255);
        ofFill();		// draw "filled shapes"
        ofDrawCircle(x,y,radius);
    }
};
