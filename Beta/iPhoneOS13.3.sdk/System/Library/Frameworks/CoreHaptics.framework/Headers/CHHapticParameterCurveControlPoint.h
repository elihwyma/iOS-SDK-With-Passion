/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

@interface CHHapticParameterCurveControlPoint : NSObject

{
    float _value;
    double _time;
}

@property double relativeTime;
@property float value;

- (id)init;
- (id)initWithRelativeTime:(double)arg1 value:(float)arg2;

@end
