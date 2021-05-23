/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAccessorySetting.h>

@class NSArray, NSString;

@interface HMAccessorySelectionSetting : HMAccessorySetting

@property (copy, readonly) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithInternal:(id)arg1;
- (void)_setting:(id)arg1 didAddConstraint:(id)arg2;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 items:(id)arg4;
- (void)addItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
