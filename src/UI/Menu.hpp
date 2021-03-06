//
//  Menu.hpp
//  LiveDraw
//
//  Created by lab101 on 05/09/16.
//
//

#ifndef Menu_hpp
#define Menu_hpp

#include <stdio.h>
#include "cinder/Signals.h"

#include "DotButton.hpp"

class Menu{
  
    ci::vec2 mPosition;
    
    ci::Rectf brushScaleBoxOrig;
    ci::Rectf brushScaleBoxOrigCurrent;
    bool isBrushHover;
    bool isPressed;
    
    std::vector<DotButton*> buttons;
    
public:
    float brushScale;
    

    ci::signals::Signal<void(float)>          onBrushSizeChanged;
    ci::signals::Signal<void(std::string)>    onNewCommand;

    void setup();
    void update();
    void draw();
    bool checkTouchDown(ci::vec2 point);
    bool checkHover(ci::vec2 point);
    bool checkTouchUp();
    
    void setPosition(ci::vec2 position);
    void setBrushScale(float newScale);
};




#endif /* Menu_hpp */
