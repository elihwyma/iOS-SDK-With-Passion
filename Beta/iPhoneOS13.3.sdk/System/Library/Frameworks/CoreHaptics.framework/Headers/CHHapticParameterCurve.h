/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CHHapticParameterCurve : NSObject

{
    NSString *_param;
    double _time;
    NSArray *_controlPoints;
}

@property (readonly) NSString *parameterID;
@property double relativeTime;
@property (readonly) NSArray *controlPoints;

- (id)init;
- (id)initWithParameterID:(id)arg1 controlPoints:(id)arg2 relativeTime:(double)arg3;

@end
