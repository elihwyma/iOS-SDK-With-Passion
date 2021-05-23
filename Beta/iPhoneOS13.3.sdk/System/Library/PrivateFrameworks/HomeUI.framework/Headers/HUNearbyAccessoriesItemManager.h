/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HMAccessory;

@interface HUNearbyAccessoriesItemManager : HFItemManager

{
    _Bool _supportsQuickControls;
    HMAccessory *_primaryAccessory;
}

@property (retain, nonatomic) HMAccessory *primaryAccessory;
@property (nonatomic) _Bool supportsQuickControls;

- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)arg1;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceProfileItem:(id)arg2 supportsQuickControls:(_Bool)arg3;
- (_Bool)_isServiceItemAssociatedWithPrimaryAccessory:(id)arg1;
- (_Bool)_isAPreferredServiceType:(id)arg1;
- (_Bool)shouldHideItem:(id)arg1;

@end
