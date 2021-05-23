/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSTimeZone;

@interface _HKBehavior : NSObject

{
    NSNumber *_overriddenSupportsSwimmingWorkoutSessions;
    NSNumber *_overriddenEnableManateeForHSA2Accounts;
    struct _HKLazyLoader<bool> _futureMigrationsEnabled;
    _Bool _isDeviceSupported;
    _Bool _isAppleInternalInstall;
    _Bool _isAppleWatch;
    _Bool _isCompanionCapable;
    _Bool _hasTelephonyCapability;
    _Bool _isRunningStoreDemoMode;
    _Bool _runningInStoreDemoModeF201;
    _Bool _deviceSupportsHeartRateMotionContexts;
    _Bool _collectsCalorimetry;
    _Bool _collectsData;
    _Bool _performsWorkoutCondensation;
    _Bool _supportsAWDMetricSubmission;
    _Bool _supportsActivitySharing;
    _Bool _supportsAppSubscriptions;
    _Bool _supportsFeatureAvailabilityAssets;
    _Bool _supportsHeartRateDataCollection;
    _Bool _supportsNanoSync;
    _Bool _supportsSampleExpiration;
    _Bool _supportsWorkouts;
    _Bool _showSensitiveLogItems;
    _Bool _unitTest_useEmbeddedOntology;
    _Bool _unitTest_useEmbeddedOntologyAsset;
    _Bool _ontologyAvailabilityRequiresAccounts;
    _Bool _ignoreOntologyAssetAvailabilityChanges;
    _Bool _ignoreOntologyVersionCheckDuringReferenceOntologyImport;
    _Bool _hasOntologyFeaturesEnabled;
    _Bool _isTestingDevice;
    _Bool _healthAppHidden;
}

@property (nonatomic) _Bool isDeviceSupported;
@property (nonatomic) _Bool isAppleInternalInstall;
@property (nonatomic) _Bool isAppleWatch;
@property (nonatomic) _Bool isCompanionCapable;
@property (nonatomic) _Bool hasTelephonyCapability;
@property (nonatomic) _Bool isTestingDevice;
@property (nonatomic) _Bool deviceSupportsHeartRateMotionContexts;
@property (nonatomic) _Bool collectsCalorimetry;
@property (nonatomic) _Bool collectsData;
@property (nonatomic) _Bool performsWorkoutCondensation;
@property (nonatomic) _Bool supportsAWDMetricSubmission;
@property (nonatomic) _Bool supportsActivitySharing;
@property (nonatomic) _Bool supportsAppSubscriptions;
@property (nonatomic) _Bool supportsHeartRateDataCollection;
@property (nonatomic) _Bool supportsNanoSync;
@property (nonatomic) _Bool supportsSampleExpiration;
@property (nonatomic) _Bool supportsSwimmingWorkoutSessions;
@property (nonatomic) _Bool supportsWorkouts;
@property (nonatomic) _Bool healthAppHidden;
@property (nonatomic) _Bool showSensitiveLogItems;
@property (nonatomic) _Bool futureMigrationsEnabled;
@property (nonatomic) _Bool unitTest_useEmbeddedOntology;
@property (nonatomic) _Bool unitTest_useEmbeddedOntologyAsset;
@property (nonatomic) _Bool ontologyAvailabilityRequiresAccounts;
@property (nonatomic) _Bool ignoreOntologyAssetAvailabilityChanges;
@property (nonatomic) _Bool ignoreOntologyVersionCheckDuringReferenceOntologyImport;
@property (nonatomic) _Bool hasOntologyFeaturesEnabled;
@property (nonatomic, readonly) _Bool isRunningStoreDemoMode;
@property (nonatomic, readonly) _Bool runningInStoreDemoModeF201;
@property (nonatomic, readonly) _Bool isCurrentDeviceN2XA;
@property (nonatomic, readonly) _Bool isCurrentDeviceSeries3OrOlder;
@property (nonatomic, readonly, getter=isManateeEnabledForHSA2Accounts) _Bool manateeEnabledForHSA2Accounts;
@property (nonatomic, readonly) _Bool supportsCloudSync;
@property (nonatomic, readonly) _Bool supportsFeatureAvailabilityAssets;
@property (copy, nonatomic, readonly) NSString *currentDeviceDisplayName;
@property (copy, nonatomic, readonly) NSString *currentDeviceName;
@property (copy, nonatomic, readonly) NSString *currentDeviceManufacturer;
@property (copy, nonatomic, readonly) NSString *currentDeviceRegionCode;
@property (copy, nonatomic, readonly) NSString *currentInternalDeviceModel;
@property (copy, nonatomic, readonly) NSString *currentDeviceClass;
@property (copy, nonatomic, readonly) NSString *currentDeviceProductType;
@property (copy, nonatomic, readonly) NSString *currentOSBuild;
@property (copy, nonatomic, readonly) NSString *currentOSName;
@property (copy, nonatomic, readonly) NSString *currentOSVersion;
@property (nonatomic, readonly) CDStruct_f6aba300 currentOSVersionStruct;
@property (copy, nonatomic, readonly) NSTimeZone *localTimeZone;
@property (nonatomic, readonly) NSDictionary *currentDiskUsage;
@property (nonatomic, readonly) unsigned long long totalDiskCapacity;
@property (nonatomic, readonly) unsigned long long currentDiskSpaceAvailable;

+ (_Bool)isAppleInternalInstall;
+ (_Bool)hasTelephonyCapability;
+ (_Bool)_hasTelephonyCapability;
+ (_Bool)activePairedWatchSupportsBradycardiaDetection;
+ (_Bool)allPairedWatchesSupportBradycardiaDetection;
+ (_Bool)isDeviceSupported;
+ (id)sharedBehavior;
+ (id)currentDeviceName;
+ (id)currentDeviceManufacturer;
+ (id)currentDeviceClass;
+ (id)currentDeviceProductType;
+ (id)currentOSVersion;
+ (id)currentDeviceDisplayName;
+ (id)currentDeviceRegionCode;
+ (_Bool)isRunningStoreDemoMode;
+ (_Bool)_isProductTypeSeries3OrOlder:(id)arg1;
+ (_Bool)activePairedWatchSupportsHeartRateMotionContexts;
+ (_Bool)allPairedWatchesSupportHeartRateMotionContexts;
+ (_Bool)_isDeviceSupported;
+ (_Bool)_isAppleInternalInstall;
+ (_Bool)_isRunningStoreDemoMode;
+ (_Bool)_runningInStoreDemoModeF201;
+ (_Bool)_deviceSupportsHeartRateMotionContexts;
+ (_Bool)_showSensitiveLogItems;
+ (_Bool)runningInStoreDemoModeF201;
+ (_Bool)isTestingDevice;
+ (_Bool)_hasCompletedBuddyWithVersion:(long long)arg1;
+ (void)_setHasCompletedBuddyWithVersion:(long long)arg1;
+ (_Bool)_shouldShowBuddy;
+ (id)currentDeviceReleaseType;
+ (id)currentOSBuild;
+ (CDStruct_f6aba300)currentOSVersionStruct;
+ (_Bool)_healthAppHidden;
+ (_Bool)isManateeEnabledByDefault;
+ (_Bool)_readEnableManateeForHSA2AccountsFromHealthdDefaults;
+ (long long)_runningInStoreDemoModeFProgramNumber;
+ (_Bool)_isForceBuddyEnabled;
+ (_Bool)hasCompletedBuddyWithVersion:(long long)arg1;
+ (void)setSharedBehavior:(id)arg1;
+ (void)resetSharedBehavior;
+ (int)nanoSyncProtocolVersionForWatchSystemBuildVersion:(id)arg1;
+ (int)nanoSyncProtocolVersionForCompanionSystemBuildVersion:(id)arg1;
+ (_Bool)hasPairedWatch;
+ (_Bool)anyPairedWatchHasFlightsClimbedCapability;
+ (_Bool)activePairedWatchHasSmartFitnessCoaching;
+ (void)setForceBuddy:(_Bool)arg1;
+ (void)setHasCompletedBuddyWithVersion:(long long)arg1;
+ (_Bool)shouldShowBuddy;
+ (_Bool)_futureMigrationsEnabled;
+ (_Bool)_condensesHeartRateSamples;

- (id)init;
- (id).cxx_construct;
- (_Bool)_hasProductTypePrefix:(id)arg1;
- (id)currentDeviceReleaseType;
- (void)setManateeEnabledForHSA2AccountsOverride:(_Bool)arg1;

@end
