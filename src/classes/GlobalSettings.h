#pragma once


#include "Singleton.hpp"
#include "cinder/app/App.h"
#include "cinder/Font.h"

class GlobalSettings{


public:


    float zoomLevel;
    float maxWidth;
    bool hasGifOutput;
    bool hasClearButton;
    bool hasLayerButton;

    ci::ColorA blue;
    
    ci::ivec2 compositionSize;
   
    GlobalSettings();
    

};



typedef Singleton<GlobalSettings> GlobalSettingsSingleton;

inline GlobalSettings* GS(){
	return GlobalSettingsSingleton::Instance();
}
