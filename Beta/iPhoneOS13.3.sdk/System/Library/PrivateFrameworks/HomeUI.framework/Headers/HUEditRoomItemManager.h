/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFRoomBuilder, HFStaticItem, HFZoneModule;

@interface HUEditRoomItemManager : HFItemManager

{
    HFStaticItem *_nameItem;
    HFStaticItem *_cameraItem;
    HFStaticItem *_chooseWallpaperItem;
    HFStaticItem *_wallpaperThumbnailItem;
    HFStaticItem *_wallpaperPickerItem;
    HFStaticItem *_removeItem;
    HFZoneModule *_zoneModule;
    HFRoomBuilder *_roomBuilder;
}

@property (retain, nonatomic) HFRoomBuilder *roomBuilder;
@property (retain, nonatomic) HFStaticItem *nameItem;
@property (retain, nonatomic) HFStaticItem *cameraItem;
@property (retain, nonatomic) HFStaticItem *chooseWallpaperItem;
@property (retain, nonatomic) HFStaticItem *wallpaperThumbnailItem;
@property (retain, nonatomic) HFStaticItem *wallpaperPickerItem;
@property (retain, nonatomic) HFStaticItem *removeItem;
@property (retain, nonatomic) HFZoneModule *zoneModule;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithRoomBuilder:(id)arg1 delegate:(id)arg2;
- (_Bool)_canDeleteRoom;

@end
