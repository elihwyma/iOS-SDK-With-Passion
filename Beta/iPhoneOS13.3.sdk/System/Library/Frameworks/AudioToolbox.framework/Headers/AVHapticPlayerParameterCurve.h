/*
 Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVHapticPlayerParameterCurve : NSObject

{
    unsigned long long _type;
    double _time;
    unsigned long long _shape;
    NSArray *_controlPoints;
}

@property unsigned long long type;
@property double time;
@property unsigned long long shape;
@property (readonly) NSArray *controlPoints;

- (id)init;
- (id)initWithType:(unsigned long long)arg1 relativeTime:(double)arg2 shape:(unsigned long long)arg3 controlPoints:(id)arg4;

@end
