/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HFUserItem, HMHome, HMUser, NSString;

@interface HURemoteAccessItemManager : HFItemManager

{
    HFItem *_allowRemoteAccessItem;
    HFItem *_allowRemoteAccessFooterItem;
    HMHome *_homeForUser;
    HFItem *_removeItem;
}

@property (retain, nonatomic) HMHome *homeForUser;
@property (retain, nonatomic) HFItem *allowRemoteAccessItem;
@property (retain, nonatomic) HFItem *allowRemoteAccessFooterItem;
@property (retain, nonatomic) HFItem *removeItem;
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (nonatomic, readonly) HMUser *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3;
- (_Bool)_hasResidentDevice;
- (_Bool)_isUserOwner:(id)arg1;
- (_Bool)_isEditingAllowedForUser:(id)arg1;
- (_Bool)_isRemoteAccessAllowedForUser:(id)arg1;
- (_Bool)_isUserBeingEditedTheDeviceUser;
- (_Bool)_isAllowedToEditTargetUser;

@end
