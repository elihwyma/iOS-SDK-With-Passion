/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemProvider.h>

@class HMAccessoryNetworkProtectionGroup, NSMutableSet;

@interface HUNetworkProtectionModeOptionItemProvider : HFItemProvider

{
    HMAccessoryNetworkProtectionGroup *_group;
    NSMutableSet *_networkProtectionModeOptionItems;
}

@property (retain, nonatomic) NSMutableSet *networkProtectionModeOptionItems;
@property (copy, nonatomic, readonly) HMAccessoryNetworkProtectionGroup *group;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithGroup:(id)arg1;
- (id)reloadItems;

@end
