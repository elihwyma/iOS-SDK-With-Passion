/*
 Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

#import <Foundation/NSObject.h>

@interface AVHapticPlayerParameterCurveControlPoint : NSObject

{
    float _value;
    double _time;
}

@property double time;
@property float value;

- (id)initWithTime:(double)arg1 value:(float)arg2;

@end
