/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMSetting.h>

@class NSArray;

@interface HMSelectionSetting : HMSetting

{
    NSArray *_items;
}

@property (copy, readonly) NSArray *items;

- (_Bool)isKindOfClass:(Class)arg1;
- (id)valueForUpdate:(id)arg1;
- (id)internalValue;

@end
