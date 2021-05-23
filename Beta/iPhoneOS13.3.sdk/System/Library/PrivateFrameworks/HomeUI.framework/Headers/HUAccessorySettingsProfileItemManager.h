/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HUAccessorySettingsProfileModule;

@interface HUAccessorySettingsProfileItemManager : HFItemManager

{
    HUAccessorySettingsProfileModule *_profileModule;
}

@property (retain, nonatomic) HUAccessorySettingsProfileModule *profileModule;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 accessoryGroupItem:(id)arg2;

@end
