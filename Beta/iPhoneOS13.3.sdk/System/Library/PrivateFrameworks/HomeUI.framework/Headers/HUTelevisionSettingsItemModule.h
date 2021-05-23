/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFItem, HMAccessory, HMHome, NSSet;

@interface HUTelevisionSettingsItemModule : HFItemModule

{
    NSSet *_itemProviders;
    HMHome *_home;
    HMAccessory *_accessory;
    HFItem *_showPowerModeSelectionItem;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HFItem *showPowerModeSelectionItem;

+ (id)_powerModeSelectionCharacteristicForAccessory:(id)arg1;
+ (_Bool)_supportsAccessory:(id)arg1;

- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)showPowerModeSelection;
- (void)_createItemProviders;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 accessory:(id)arg3;

@end
