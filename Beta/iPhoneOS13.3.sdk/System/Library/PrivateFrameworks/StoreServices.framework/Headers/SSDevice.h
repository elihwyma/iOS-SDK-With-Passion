/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

#import <StoreServices/Swift-Protocol.h>

@class NSSet, NSString, SSKeyValueStore, SSPromise, SSURLBag;

@protocol OS_dispatch_queue;

@interface SSDevice : NSObject <Swift>

{
    NSString *_appleTVProductVersion;
    NSSet *_automaticDownloadKinds;
    id _cloudMediaLibraryIdentifier;
    long long _deviceType;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSKeyValueStore *_keyValueStore;
    NSString *_legacyUserAgent;
    NSString *_localStoreFrontIdentifier;
    id _mediaLibraryIdentifier;
    NSString *_phoneNumber;
    NSString *_productType;
    NSString *_productVersion;
    id _softwareLibraryIdentifier;
    NSString *_udid;
    SSURLBag *_urlBag;
    NSString *_userAgent;
    NSString *_clientName;
    double _batteryLevel;
    unsigned int _batteryMonitorNotification;
    struct IONotificationPort *_batteryMonitorPort;
    _Bool _pluggedIn;
    int _pluggedInToken;
    long long _powerMonitorCount;
}

@property (readonly) NSString *compatibleProductType;
@property (readonly) long long deviceType;
@property (readonly) unsigned int deviceTypeIdentifier;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *productType;
@property (readonly) NSString *productVersion;
@property (readonly) float screenScale;
@property (readonly) NSString *serialNumber;
@property (nonatomic, readonly) SSPromise *storeFrontIdentifierPromise;
@property (readonly) NSString *thinnedApplicationVariantIdentifier;
@property (readonly) NSString *uniqueDeviceIdentifier;
@property (readonly, getter=isPluggedIn) _Bool pluggedIn;
@property (readonly) double batteryLevel;
@property (copy) NSString *cloudMediaLibraryIdentifier;
@property (copy) NSString *mediaLibraryIdentifier;
@property (copy) NSString *softwareLibraryIdentifier;
@property (readonly) NSString *clientVersion;
@property (readonly) NSString *clientName;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly) NSString *legacyUserAgent;
@property (readonly) NSString *userAgent;
@property (readonly) NSSet *automaticDownloadKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentDevice;
+ (_Bool)deviceIsiPhone;
+ (_Bool)deviceIsiPad;
+ (_Bool)deviceIsAppleTV;
+ (_Bool)deviceIsAppleWatch;
+ (_Bool)deviceIsiPod;
+ (_Bool)deviceIsAudioAccessory;
+ (_Bool)deviceIsInternalBuild;
+ (_Bool)deviceIsSeedBuild;
+ (id)copyCachedAvailableItemKinds;
+ (_Bool)promptNeedsDisplay:(id)arg1;
+ (_Bool)setCachedAvailableItemKinds:(id)arg1;
+ (void)setLastPromptAttemptDate:(id)arg1 forPromptWithIdentifier:(id)arg2;
+ (void)setPromptWithIdentifier:(id)arg1 needsDisplay:(_Bool)arg2;

- (id)init;
- (void)dealloc;
- (id)_productVersion;
- (long long)_deviceType;
- (int)_deviceClass;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)sdk_loadStoreFrontIdentifier:(CDUnknownBlockType)arg1;
- (void)sdk_loadStorefrontCountryCode:(CDUnknownBlockType)arg1;
- (_Bool)supportsDeviceCapability:(long long)arg1;
- (void)setStoreFrontIdentifier:(id)arg1 forRequest:(id)arg2 response:(id)arg3 account:(id)arg4;
- (id)_userAgentClientNameForInfoPlist:(id)arg1;
- (id)_userAgentClientVersionForInfoPlist:(id)arg1 clientName:(id)arg2;
- (void)_cacheKeyValueStoreValues;
- (_Bool)_getDeviceType:(unsigned int *)arg1 error:(id *)arg2;
- (id)_newLegacyUserAgent:(_Bool *)arg1;
- (id)userAgentWithBundleRef:(struct __CFBundle *)arg1 isCachable:(_Bool *)arg2;
- (id)_newModernUserAgentWithClientName:(id)arg1 version:(id)arg2 isCachable:(_Bool *)arg3;
- (id)_copyCarrierBundleEligibilityWithStatus:(id)arg1;
- (void)_updateAutomaticDownloadKinds:(id)arg1 withValue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_copyProductType;
- (long long)_deviceTypeForProductType:(id)arg1;
- (void)_updateBatteryLevelFromService:(unsigned int)arg1;
- (void)_reloadPluggedInState;
- (_Bool)_is720pCapable;
- (_Bool)_is1080pCapable;
- (id)_userAgentClientNameForBundleID:(id)arg1;
- (id)userAgentWithClientName:(id)arg1 version:(id)arg2;
- (void)setStoreFrontIdentifier:(id)arg1 account:(id)arg2;
- (long long)_deviceTypeForUnknownIPad:(id)arg1;
- (long long)_deviceTypeForUnknownIPhone:(id)arg1;
- (long long)_deviceTypeForUnknownIPod:(id)arg1;
- (long long)_deviceTypeForUnknownAppleTV:(id)arg1;
- (int)_screenClass;
- (id)_diskCapacityString;
- (id)_fairPlayDeviceTypeString;
- (id)_appleTVProductVersion;
- (id)_userAgentClientNameForAppleTVBundleID:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1 accountIdentifier:(id)arg2;
- (id)copyStoreFrontRequestHeaders;
- (void)getAvailableItemKindsWithBlock:(CDUnknownBlockType)arg1;
- (void)getCellularNetworkingAllowedWithBlock:(CDUnknownBlockType)arg1;
- (void)loadStoreFrontWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCellularNetworkingAllowed:(_Bool)arg1;
- (void)setStoreFrontWithResponseHeaders:(id)arg1;
- (void)showPromptWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)carrierBundleStatusForService:(long long)arg1;
- (void)getCarrierBundleStatusForService:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)getMachineIdentifier:(id *)arg1 otp:(id *)arg2 forAccountIdentifier:(id)arg3;
- (void)enableAllAutomaticDownloadKindsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)minusAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)startPowerMonitoring;
- (void)stopPowerMonitoring;
- (void)synchronizeAutomaticDownloadKinds;
- (void)unionAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)userAgentWithBundleIdentifier:(id)arg1 version:(id)arg2;
- (id)_copyKeyValueStoreValueForDomain:(id)arg1 key:(id)arg2;
- (void)_invalidateAutomaticDownloadKinds;
- (void)_invalidatePhoneNumber;
- (void)_invalidateSoftwareCUID;
- (void)_postStoreFrontDidChangeNotification;
- (_Bool)isStoreFrontIdentifierTransient;
- (void)reloadStoreFrontIdentifier;
- (void)setStoreFrontIdentifier:(id)arg1 account:(id)arg2 isTransient:(_Bool)arg3;
- (void)setStoreFrontIdentifier:(id)arg1 accountIdentifier:(id)arg2 isTransient:(_Bool)arg3;
- (void)setStoreFrontIdentifier:(id)arg1 isTransient:(_Bool)arg2;
- (id)synchedStoreFrontIdentifier;

@end
