#pragma once

#include "ofMain.h"
#include "BaseGraphic.h"

class CircleGraphic_G : public BaseGraphic {
    float radius = 0;
    int x = 0;
    int y = 0;
    float counter = 0;
    int color = rand() % 55;
    
public:
    void update() {
        if (radius >= 1300) {
            isDone = true;
            ofBackground(230 - color * 2,230 - color * .5,230 - color);
        }
        
        radius += 20;
    }
    void draw() {
        
        ofSetColor(230- color * 2,230 - color * .5,230 - color);
        ofFill();
        ofDrawCircle(x, y, radius);
    }
};
