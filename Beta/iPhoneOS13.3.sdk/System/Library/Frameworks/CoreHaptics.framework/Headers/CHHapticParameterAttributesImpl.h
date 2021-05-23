/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CHHapticParameterAttributesImpl : NSObject

{
    float _minValue;
    float _maxValue;
    float _defaultValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) float minValue;
@property (readonly) float maxValue;
@property (readonly) float defaultValue;

- (id)init;
- (id)initWithMinValue:(float)arg1 maxValue:(float)arg2 defaultValue:(float)arg3;

@end
