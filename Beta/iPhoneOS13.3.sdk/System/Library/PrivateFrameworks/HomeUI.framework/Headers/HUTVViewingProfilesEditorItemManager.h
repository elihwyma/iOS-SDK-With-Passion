/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HUTVViewingProfilesDevicesItemModule;

@interface HUTVViewingProfilesEditorItemManager : HFItemManager

{
    HUTVViewingProfilesDevicesItemModule *_tvpDevicesModule;
}

@property (nonatomic, readonly) HUTVViewingProfilesDevicesItemModule *tvpDevicesModule;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 userItem:(id)arg2;

@end
