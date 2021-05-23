/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAccessorySetting.h>

@class NSNumber;

@interface HMAccessoryNumberSetting : HMAccessorySetting

@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *stepValue;

- (Class)valueClass;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 stepValue:(id)arg6;

@end
