/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMHome, HULocationDeviceManager, HUPresenceCurrentUserLocationDevice;

@interface HUPresenceLocationDeviceFooterItem : HFItem

{
    _Bool _useSingleUserStyle;
    HULocationDeviceManager *_locationDeviceManager;
    HUPresenceCurrentUserLocationDevice *_selectedLocationDevice;
    HMHome *_home;
}

@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;
@property (retain, nonatomic) HUPresenceCurrentUserLocationDevice *selectedLocationDevice;
@property (nonatomic) _Bool useSingleUserStyle;
@property (nonatomic, readonly) HMHome *home;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 selectedLocationDevice:(id)arg2 locationDeviceManager:(id)arg3 useSingleUserStyle:(_Bool)arg4;
- (id)_itemUpdateOutcomeForLocationDeviceText:(id)arg1;
- (id)_locationDeviceTextForDeviceNameString:(id)arg1;
- (id)_homeHubNeedsUpdateWarningText;
- (id)_someUsersNeedSoftwareUpdateWarningText;

@end
