/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFItemProvider, HFUserItem, HMHome, HMMediaContentProfileAccessControl, NSArray, NSSet;

@interface HUTVViewingProfilesDevicesItemModule : HFItemModule

{
    NSSet *_itemProviders;
    HMHome *_home;
    HFUserItem *_sourceItem;
    HFItemProvider *_viewingProfileItemProvider;
}

@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFUserItem *sourceItem;
@property (nonatomic, readonly) HMMediaContentProfileAccessControl *accessControl;
@property (retain, nonatomic) HFItemProvider *viewingProfileItemProvider;
@property (copy, nonatomic) NSArray *viewingProfilesDevices;

- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)_createItemProviders;
- (id)_commitUpdateToAccessControl:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 userItem:(id)arg2;
- (_Bool)isTVViewingProfileDevice:(id)arg1;
- (void)turnOnTVViewingProfilesForAllDevices;

@end
