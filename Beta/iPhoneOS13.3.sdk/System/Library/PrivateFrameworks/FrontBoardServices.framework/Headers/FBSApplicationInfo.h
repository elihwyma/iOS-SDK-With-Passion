/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSBundleInfo.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSSet, NSString, NSURL;

@interface FBSApplicationInfo : FBSBundleInfo <Swift>

{
    NSURL *_executableURL;
    NSURL *_bundleContainerURL;
    NSURL *_dataContainerURL;
    NSURL *_sandboxURL;
    double _lastModifiedDate;
    NSString *_preferenceDomain;
    NSString *_teamIdentifier;
    NSString *_signerIdentity;
    NSDictionary *_environmentVariables;
    NSDictionary *_lazy_entitlements;
    _Bool _provisioningProfileValidated;
    _Bool _isManaged;
    NSString *_sdkVersion;
    NSArray *_customMachServices;
    _Bool _hasViewServicesEntitlement;
    NSString *_appIDEntitlement;
    NSString *_shortVersionString;
    unsigned long long _type;
    NSArray *_requiredCapabilities;
    NSArray *_tags;
    NSArray *_deviceFamilies;
    _Bool _enabled;
    _Bool _restricted;
    _Bool _blocked;
    _Bool _beta;
    long long _interfaceOrientation;
    NSSet *_backgroundModes;
    unsigned long long _supportedInterfaceOrientations;
    _Bool _requiresPersistentWiFi;
    float _minimumBrightnessLevel;
    NSArray *_externalAccessoryProtocols;
    long long _ratingRank;
    NSNumber *_itemID;
    NSNumber *_purchaserDSID;
    NSNumber *_downloaderDSID;
    NSArray *_lazy_folderNames;
    NSString *_lazy_fallbackFolderName;
    _Bool _installing;
    _Bool _uninstalling;
    struct os_unfair_lock_s _lock;
    _Bool _initialized;
    _Bool _pendingUninstall;
    _Bool _supportsMultiwindow;
    _Bool _blockedForScreenTimeExpiration;
    NSArray *_folderNames;
    NSString *_fallbackFolderName;
}

@property (copy, nonatomic, readonly, getter=_appIDEntitlement) NSString *appIDEntitlement;
@property (nonatomic, getter=_isInstalling, setter=_setInstalling:) _Bool installing;
@property (nonatomic, getter=_isUninstalling, setter=_setUninstalling:) _Bool uninstalling;
@property (nonatomic, getter=_isPendingUninstall, setter=_setPendingUninstall:) _Bool pendingUninstall;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) NSURL *executableURL;
@property (nonatomic, readonly) NSURL *bundleContainerURL;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (nonatomic, readonly) NSURL *sandboxURL;
@property (nonatomic, readonly) double lastModifiedDate;
@property (copy, nonatomic, readonly) NSString *preferenceDomain;
@property (nonatomic, readonly) NSString *teamIdentifier;
@property (copy, nonatomic, readonly) NSString *signerIdentity;
@property (nonatomic, readonly) NSDictionary *environmentVariables;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) _Bool hasViewServicesEntitlement;
@property (nonatomic, readonly, getter=isProvisioningProfileValidated) _Bool provisioningProfileValidated;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSArray *customMachServices;
@property (nonatomic, readonly) _Bool supportsMultiwindow;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, getter=isRestricted) _Bool restricted;
@property (nonatomic, readonly, getter=isBlocked) _Bool blocked;
@property (nonatomic, readonly) NSArray *requiredCapabilities;
@property (nonatomic, readonly) NSArray *deviceFamilies;
@property (copy, nonatomic, readonly) NSString *sdkVersion;
@property (nonatomic, readonly, getter=isBeta) _Bool beta;
@property (copy, nonatomic, readonly) NSString *shortVersionString;
@property (nonatomic, readonly, getter=isExitsOnSuspend) _Bool exitsOnSuspend;
@property (nonatomic, readonly) _Bool requiresPersistentWiFi;
@property (nonatomic, readonly) float minimumBrightnessLevel;
@property (nonatomic, readonly) NSArray *externalAccessoryProtocols;
@property (nonatomic, readonly, getter=isBlockedForScreenTimeExpiration) _Bool blockedForScreenTimeExpiration;
@property (nonatomic, readonly) long long ratingRank;
@property (nonatomic, readonly) NSNumber *itemID;
@property (nonatomic, readonly) NSNumber *purchaserDSID;
@property (nonatomic, readonly) NSNumber *downloaderDSID;
@property (nonatomic, readonly) NSArray *folderNames;
@property (nonatomic, readonly) NSString *fallbackFolderName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)_applicationTypeForProxy:(id)arg1;
+ (id)_configureEnvironment:(id)arg1 withInfo:(id)arg2 isPreApex:(_Bool)arg3;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_loadFromProxy:(id)arg1;
- (id)initWithApplicationProxy:(id)arg1;
- (void)_synchronize:(CDUnknownBlockType)arg1;
- (_Bool)supportsDeviceFamily:(unsigned long long)arg1;
- (id)_initWithApplicationProxy:(id)arg1;
- (id)_initWithApplicationProxy:(id)arg1 overrideURL:(id)arg2;
- (id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2;
- (_Bool)builtOnOrAfterSDKVersion:(id)arg1;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (_Bool)supportsBackgroundMode:(id)arg1;
- (_Bool)supportsInterfaceOrientation:(long long)arg1;
- (_Bool)supportsAllInterfaceOrientations;
- (void)_overrideTags:(id)arg1;

@end
