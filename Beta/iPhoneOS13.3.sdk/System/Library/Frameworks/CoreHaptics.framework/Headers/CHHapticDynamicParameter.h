/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CHHapticDynamicParameter : NSObject

{
    NSString *_param;
    float _value;
    double _time;
}

@property (readonly) NSString *parameterID;
@property float value;
@property double relativeTime;

- (id)init;
- (id)initWithParameterID:(id)arg1 value:(float)arg2 relativeTime:(double)arg3;

@end
