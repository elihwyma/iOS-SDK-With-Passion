/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFItem, HFPresenceEventBuilder, HFStaticItemProvider, HMHome, HULocationDeviceManager, HUPresenceActivationOptionItem, HUPresenceLocationDeviceFooterItem, HUPresenceUserPickerItemModuleOptions, NSDictionary;

@protocol HUPresenceUserPickerItemModuleDelegate;

@interface HUPresenceUserPickerItemModule : HFItemModule

{
    HUPresenceLocationDeviceFooterItem *_footerItem;
    HUPresenceActivationOptionItem *_singleUserSummaryItem;
    HMHome *_home;
    id <HUPresenceUserPickerItemModuleDelegate> _delegate;
    HFPresenceEventBuilder *_presenceEventBuilder;
    HUPresenceUserPickerItemModuleOptions *_options;
    NSDictionary *_activationOptionStateByGranularity;
    HFStaticItemProvider *_staticItemProvider;
    HULocationDeviceManager *_locationDeviceManager;
}

@property (nonatomic, readonly) NSDictionary *activationOptionStateByGranularity;
@property (nonatomic, readonly) HFStaticItemProvider *staticItemProvider;
@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;
@property (nonatomic, readonly) HMHome *home;
@property (weak, nonatomic) id <HUPresenceUserPickerItemModuleDelegate> delegate;
@property (nonatomic, readonly) HFPresenceEventBuilder *presenceEventBuilder;
@property (retain, nonatomic) HUPresenceUserPickerItemModuleOptions *options;
@property (nonatomic, readonly) HFItem *footerItem;
@property (nonatomic, readonly) HFItem *singleUserSummaryItem;

+ (id)sectionID;
+ (CDUnknownBlockType)_userItemComparator;
+ (id)footerSectionID;

- (id)itemProviders;
- (unsigned long long)itemTypeForItem:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)_createItemProviders;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 presenceEvent:(id)arg3 options:(id)arg4 delegate:(id)arg5;
- (_Bool)_isUserHandleSelected:(id)arg1;
- (unsigned long long)_activationGranularityForUserItem:(id)arg1;
- (void)_updateSelected:(_Bool)arg1 forUserHandle:(id)arg2;
- (void)_resetSelectionForCustomLocation;
- (id)stateForActivationOptionItem:(id)arg1;
- (_Bool)_shouldUseSingleUserStyle;
- (id)_sortedActivationGranularities;
- (id)_allSelectedAndSupportedUsers;
- (_Bool)_canDeselectUserHandle:(id)arg1;
- (id)activationOptionItemForGranularity:(unsigned long long)arg1;
- (void)selectActivationOptionItem:(id)arg1;
- (void)toggleExpandedForActivationOptionItem:(id)arg1;
- (id)stateForUserItem:(id)arg1;
- (void)selectUserItem:(id)arg1;
- (void)deselectUserItem:(id)arg1;
- (id)confirmationPromptForOptionItem:(id)arg1;
- (_Bool)_isPresenceAuthorizedForUser:(id)arg1;

@end
