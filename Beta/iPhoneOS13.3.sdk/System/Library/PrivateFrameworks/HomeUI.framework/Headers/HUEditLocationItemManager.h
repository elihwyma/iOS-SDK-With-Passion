/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFHomeBuilder, HFItem, HUUserNotificationTopicListModule;

@interface HUEditLocationItemManager : HFItemManager

{
    HUUserNotificationTopicListModule *_notificationSettingsModule;
    HFItem *_nameItem;
    HFItem *_usersItem;
    HFItem *_inviteUsersItem;
    HFItem *_wallpaperPickerItem;
    HFItem *_cameraItem;
    HFItem *_chooseWallpaperItem;
    HFItem *_wallpaperThumbnailItem;
    HFItem *_detailNotesItem;
    HFItem *_softwareUpdateItem;
    HFItem *_accessControlItem;
    HFItem *_bridgesAndResidentDevicesItem;
    HFItem *_networkRoutersListItem;
    HFItem *_removeItem;
    unsigned long long _context;
    HFHomeBuilder *_homeBuilder;
}

@property (retain, nonatomic) HUUserNotificationTopicListModule *notificationSettingsModule;
@property (retain, nonatomic) HFHomeBuilder *homeBuilder;
@property (retain, nonatomic) HFItem *nameItem;
@property (retain, nonatomic) HFItem *usersItem;
@property (retain, nonatomic) HFItem *inviteUsersItem;
@property (retain, nonatomic) HFItem *wallpaperPickerItem;
@property (retain, nonatomic) HFItem *cameraItem;
@property (retain, nonatomic) HFItem *chooseWallpaperItem;
@property (retain, nonatomic) HFItem *wallpaperThumbnailItem;
@property (retain, nonatomic) HFItem *detailNotesItem;
@property (retain, nonatomic) HFItem *removeItem;
@property (retain, nonatomic) HFItem *softwareUpdateItem;
@property (retain, nonatomic) HFItem *accessControlItem;
@property (retain, nonatomic) HFItem *bridgesAndResidentDevicesItem;
@property (retain, nonatomic) HFItem *networkRoutersListItem;
@property (nonatomic, readonly) unsigned long long context;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2;
- (id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2 context:(unsigned long long)arg3;

@end
