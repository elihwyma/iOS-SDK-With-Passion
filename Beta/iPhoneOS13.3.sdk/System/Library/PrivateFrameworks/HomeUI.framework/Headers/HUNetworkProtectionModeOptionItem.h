/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMAccessoryNetworkProtectionGroup;

@interface HUNetworkProtectionModeOptionItem : HFItem

{
    long long _targetProtectionModeOption;
    HMAccessoryNetworkProtectionGroup *_group;
}

@property (nonatomic, readonly) long long targetProtectionModeOption;
@property (copy, nonatomic, readonly) HMAccessoryNetworkProtectionGroup *group;

+ (long long)_priorityForTargetProtectionMode:(long long)arg1;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithGroup:(id)arg1 targetProtectionModeOption:(long long)arg2;

@end
