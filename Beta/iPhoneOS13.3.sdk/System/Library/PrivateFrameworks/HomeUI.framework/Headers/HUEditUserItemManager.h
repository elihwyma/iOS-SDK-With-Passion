/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HFUserItem, HMHome, HMUser, HUAccessorySettingsItemModule, NSArray, NSString;

@interface HUEditUserItemManager : HFItemManager

{
    HFItem *_localAccessItem;
    HFItem *_remoteAccessItem;
    HFItem *_allowEditingItem;
    HFItem *_camerasItem;
    HFItem *_pendingAccessoriesItem;
    HFItem *_personalRequestsItem;
    HFItem *_personalRequestsFooterItem;
    HFItem *_tvViewingProfilesItem;
    HUAccessorySettingsItemModule *_userSettingsItemModule;
    NSArray *_supportedMULanguageCodes;
    HMHome *_homeForUser;
    HFItem *_removeItem;
    NSArray *_sectionOrderArrayWhenViewingSelf;
    NSArray *_sectionOrderArrayWhenViewingOther;
}

@property (retain, nonatomic) HMHome *homeForUser;
@property (retain, nonatomic) HFItem *localAccessItem;
@property (retain, nonatomic) HFItem *remoteAccessItem;
@property (retain, nonatomic) HFItem *allowEditingItem;
@property (retain, nonatomic) HFItem *camerasItem;
@property (retain, nonatomic) HFItem *removeItem;
@property (retain, nonatomic) HFItem *pendingAccessoriesItem;
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (retain, nonatomic) HFItem *personalRequestsItem;
@property (retain, nonatomic) HFItem *tvViewingProfilesItem;
@property (retain, nonatomic) NSArray *sectionOrderArrayWhenViewingSelf;
@property (retain, nonatomic) NSArray *sectionOrderArrayWhenViewingOther;
@property (nonatomic, readonly) HMUser *userBeingEdited;
@property (nonatomic, readonly) HFItem *personalRequestsFooterItem;
@property (retain, nonatomic) HUAccessorySettingsItemModule *userSettingsItemModule;
@property (retain, nonatomic) NSArray *supportedMULanguageCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)_itemsToHideInSet:(id)arg1;
- (id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3;
- (_Bool)_hasResidentDevice;
- (_Bool)_isUserOwner:(id)arg1;
- (_Bool)_isEditingAllowedForUser:(id)arg1;
- (_Bool)_canModifyUserBeingEditedPermissions;
- (_Bool)_isRemoteAccessAllowedForUser:(id)arg1;
- (_Bool)_hasPersonalRequestsDevice;
- (_Bool)_isUserBeingEditedTheDeviceUser;
- (_Bool)_isPersonalRequestsEnabledForUser;
- (_Bool)_hasTVViewingProfilesDevice;
- (_Bool)_isTVViewingProfilesEnabledForUser;
- (_Bool)_hasPendingAccessories;
- (_Bool)_isVoiceIDEnabled:(id)arg1;
- (id)reuseIdentifierForFooterViewInSection:(unsigned long long)arg1;
- (_Bool)_isUserAdmin:(id)arg1;

@end
