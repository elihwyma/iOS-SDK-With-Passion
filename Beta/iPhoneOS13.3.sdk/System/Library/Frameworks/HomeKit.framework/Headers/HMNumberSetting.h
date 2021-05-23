/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMSetting.h>

@class NSNumber;

@interface HMNumberSetting : HMSetting

{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
}

@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *stepValue;

- (_Bool)isKindOfClass:(Class)arg1;
- (id)valueForUpdate:(id)arg1;
- (id)internalValue;

@end
