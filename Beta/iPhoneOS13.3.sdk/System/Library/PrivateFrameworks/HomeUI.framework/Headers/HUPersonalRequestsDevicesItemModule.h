/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFItem, HFItemProvider, HFUserItem, HMAssistantAccessControl, HMHome, HULocationDeviceManager, NAFuture, NSArray, NSSet, NSString;

@protocol HFMediaProfileContainer;

@interface HUPersonalRequestsDevicesItemModule : HFItemModule

{
    _Bool _onlyShowDeviceSwitches;
    NSSet *_itemProviders;
    id <HFMediaProfileContainer> _sourceMediaProfileContainer;
    NSArray *_supportedMULanguageCodes;
    HMHome *_home;
    HFUserItem *_sourceItem;
    HFItemProvider *_personalRequestsDevicesProvider;
    HFItem *_footerItem;
    HFItem *_personalRequestsToggleItem;
    HULocationDeviceManager *_locationDeviceManager;
}

@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFUserItem *sourceItem;
@property (nonatomic, readonly) HMAssistantAccessControl *accessControl;
@property (retain, nonatomic) HFItemProvider *personalRequestsDevicesProvider;
@property (nonatomic, readonly) HFItem *footerItem;
@property (nonatomic, readonly) HFItem *personalRequestsToggleItem;
@property (nonatomic) _Bool onlyShowDeviceSwitches;
@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;
@property (copy, nonatomic) NSArray *personalRequestsDevices;
@property (retain, nonatomic) id <HFMediaProfileContainer> sourceMediaProfileContainer;
@property (nonatomic, readonly) NAFuture *activeLocationDeviceFuture;
@property (retain, nonatomic) NSArray *supportedMULanguageCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;
- (void)turnOnPersonalRequestsForAllVoiceRecognitionCapablePersonalRequestsDevices;
- (void)_createItemProviders;
- (_Bool)isCurrentIOSDeviceOnSameVoiceRecognitionLanguageAsPersonalRequestsDeviceForItem:(id)arg1;
- (_Bool)_showPersonalRequestsItems;
- (void)turnOnAllPersonalRequestsDevices;
- (_Bool)_voiceRecognitionLanguage:(id)arg1 matchesMultiUserCapableHomePod:(id)arg2;
- (id)_commitUpdateToAccessControl:(id)arg1;
- (void)locationDeviceManager:(id)arg1 didUpdateActiveLocationDevice:(id)arg2;
- (id)initWithItemUpdater:(id)arg1 userItem:(id)arg2 home:(id)arg3 onlyShowDeviceSwitches:(_Bool)arg4;
- (_Bool)isItemPersonalRequestsToggle:(id)arg1;
- (_Bool)isItemPersonalRequestsDevice:(id)arg1;
- (_Bool)isItemPersonalRequestsFooter:(id)arg1;
- (void)toggleAllPersonalRequestsDevices;
- (id)updateLocationDeviceToThisDevice;

@end
