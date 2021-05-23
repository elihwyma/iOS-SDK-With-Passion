/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface __Hotspot : NSObject

{
    int _orientation;
    int _triggered;
    float _center_X;
    float _center_Y;
    float _touchTriggerDelay;
    float _touchReleaseTime;
}

@property int orientation;
@property int triggered;
@property float center_X;
@property float center_Y;
@property float touchTriggerDelay;
@property float touchReleaseTime;

@end
