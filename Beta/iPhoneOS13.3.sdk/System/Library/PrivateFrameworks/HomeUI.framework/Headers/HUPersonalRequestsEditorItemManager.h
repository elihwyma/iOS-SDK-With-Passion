/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HFStaticItemProvider, HFUserItem, HMAssistantAccessControl, HMHome, HMUser, HUPersonalRequestsDevicesItemModule;

@interface HUPersonalRequestsEditorItemManager : HFItemManager

{
    _Bool _onlyShowDeviceSwitches;
    HUPersonalRequestsDevicesItemModule *_prDevicesModule;
    HFItem *_requireAuthenticationForSecureRequestsItem;
    HFItem *_neverRequireAuthenticationItem;
    HMHome *_homeForUser;
    HFStaticItemProvider *_staticItemProvider;
}

@property (retain, nonatomic) HUPersonalRequestsDevicesItemModule *prDevicesModule;
@property (nonatomic, readonly) HMHome *homeForUser;
@property (nonatomic, readonly) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (nonatomic, readonly) HMAssistantAccessControl *accessControl;
@property (nonatomic) _Bool onlyShowDeviceSwitches;
@property (nonatomic, readonly) HMUser *user;
@property (nonatomic, readonly) HFItem *requireAuthenticationForSecureRequestsItem;
@property (nonatomic, readonly) HFItem *neverRequireAuthenticationItem;
@property (nonatomic) _Bool personalRequestsAuthenticationRequired;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 userItem:(id)arg2 onlyShowDeviceSwitches:(_Bool)arg3;
- (id)_commitUpdateToAccessControl:(id)arg1;
- (_Bool)_arePersonalRequestsEnabled;

@end
