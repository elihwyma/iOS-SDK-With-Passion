/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFItem, HFStaticItemProvider, HMAccessory, HMSymptomsHandler;

@protocol HFHomeKitObject;

@interface HUAccessoryDebugModule : HFItemModule

{
    _Bool _fakeWifiNetworkMismatchSymptom;
    id <HFHomeKitObject> _homeKitObject;
    HFItem *_fakeUnreachableItem;
    HFItem *_fakeShouldDisplayManualFixOptionItem;
    HFItem *_fakeWiFiSymptomItem;
    HFItem *_fakeWiFiPerformanceSymptomItem;
    HFItem *_fakeInternetFixSymptomItem;
    HFItem *_fakeHardwareFixSymptomItem;
    HFItem *_fakeGeneralFixSymptomItem;
    HFItem *_fakeHomeKitSymptomItem;
    HFItem *_fakeICloudSymptomItem;
    HFItem *_fakeITunesSymptomItem;
    HFItem *_fakeWifiNetworkMismatchSymptomItem;
    HFItem *_fakeVPNProfileExpiredSymptomItem;
    HFItem *_fake8021xNetworkSymptomItem;
    HFItem *_fakeNetworkProfileFixSymptomItem;
    HFItem *_fakeNetworkProfileInstallSymptomItem;
    HFItem *_fakeNetworkNotShareableSymptomItem;
    HFItem *_fakeStereoPairGeneralSymptomItem;
    HFItem *_fakeStereoPairNotFoundSymptomItem;
    HFItem *_fakeStereoPairVersionMismatchSymptomItem;
    HMAccessory *_accessory;
    HMSymptomsHandler *_symptomsHandler;
    HFStaticItemProvider *_debugItemProvider;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMSymptomsHandler *symptomsHandler;
@property (nonatomic, readonly) HFStaticItemProvider *debugItemProvider;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) HFItem *fakeUnreachableItem;
@property (nonatomic, readonly) HFItem *fakeShouldDisplayManualFixOptionItem;
@property (nonatomic, readonly) HFItem *fakeWiFiSymptomItem;
@property (nonatomic, readonly) HFItem *fakeWiFiPerformanceSymptomItem;
@property (nonatomic, readonly) HFItem *fakeInternetFixSymptomItem;
@property (nonatomic, readonly) HFItem *fakeHardwareFixSymptomItem;
@property (nonatomic, readonly) HFItem *fakeGeneralFixSymptomItem;
@property (nonatomic, readonly) HFItem *fakeHomeKitSymptomItem;
@property (nonatomic, readonly) HFItem *fakeICloudSymptomItem;
@property (nonatomic, readonly) HFItem *fakeITunesSymptomItem;
@property (nonatomic, readonly) HFItem *fakeWifiNetworkMismatchSymptomItem;
@property (nonatomic, readonly) HFItem *fakeVPNProfileExpiredSymptomItem;
@property (nonatomic, readonly) HFItem *fake8021xNetworkSymptomItem;
@property (nonatomic, readonly) HFItem *fakeNetworkProfileFixSymptomItem;
@property (nonatomic, readonly) HFItem *fakeNetworkProfileInstallSymptomItem;
@property (nonatomic, readonly) HFItem *fakeNetworkNotShareableSymptomItem;
@property (nonatomic, readonly) HFItem *fakeStereoPairGeneralSymptomItem;
@property (nonatomic, readonly) HFItem *fakeStereoPairNotFoundSymptomItem;
@property (nonatomic, readonly) HFItem *fakeStereoPairVersionMismatchSymptomItem;
@property (nonatomic) _Bool fakeUnreachableError;
@property (nonatomic) _Bool fakeShouldDisplayManualFixOption;
@property (nonatomic) _Bool fakeWiFiSymptom;
@property (nonatomic) _Bool fakeWiFiPerformanceSymptom;
@property (nonatomic) _Bool fakeInternetFixSymptom;
@property (nonatomic) _Bool fakeHardwareFixSymptom;
@property (nonatomic) _Bool fakeGeneralFixSymptom;
@property (nonatomic) _Bool fakeHomeKitSymptom;
@property (nonatomic) _Bool fakeICloudSymptom;
@property (nonatomic) _Bool fakeITunesSymptom;
@property (nonatomic) _Bool fakeWifiNetworkMismatchSymptom;
@property (nonatomic) _Bool fakeVPNProfileExpiredSymptom;
@property (nonatomic) _Bool fake8021xNetworkSymptom;
@property (nonatomic) _Bool fakeNetworkProfileFixSymptom;
@property (nonatomic) _Bool fakeNetworkProfileInstallSymptom;
@property (nonatomic) _Bool fakeNetworkNotShareableSymptom;
@property (nonatomic) _Bool fakeStereoPairGeneralSymptom;
@property (nonatomic) _Bool fakeStereoPairNotFoundSymptom;
@property (nonatomic) _Bool fakeStereoPairVersionMismatchSymptom;

- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)_pushSymptomUpdate;
- (void)_reloadItemProviders;
- (_Bool)fakeWiFiNetworkMismatchSymptom;
- (id)initWithItemUpdater:(id)arg1 homeKitObject:(id)arg2;
- (void)setFakeWiFiNetworkMismatchSymptom:(_Bool)arg1;

@end
