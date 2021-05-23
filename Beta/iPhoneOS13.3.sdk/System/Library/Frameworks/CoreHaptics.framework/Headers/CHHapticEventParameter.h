/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CHHapticEventParameter : NSObject

{
    NSString *_param;
    float _value;
}

@property (readonly) NSString *parameterID;
@property float value;

- (id)init;
- (id)initWithParameterID:(id)arg1 value:(float)arg2;

@end
