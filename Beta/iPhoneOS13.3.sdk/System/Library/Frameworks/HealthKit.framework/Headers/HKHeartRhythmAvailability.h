/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKActiveWatchFeatureAvailabilityDataSource, HKHealthStore, HKKeyValueDomain, HKMobileCountryCodeManager, HKObserverSet, HKWatchAppAvailability, NSDate, NSMutableSet, NSNumber, NSUserDefaults;

@interface HKHeartRhythmAvailability : NSObject

{
    struct os_unfair_lock_s _cacheLock;
    struct os_unfair_lock_s _onboardingKeysReadLock;
    NSNumber *_isAtrialFibrillationDetectionDisabledCache;
    NSNumber *_isElectrocardiogramDisabledCache;
    int _onboardingStateDidChangeNotificationToken;
    int _featureAvailabilityConditionsDidUpdateNotificationToken;
    int _userCharacteristicsDidChangeNotificationToken;
    HKHealthStore *_healthStore;
    HKKeyValueDomain *_keyValueDomain;
    NSUserDefaults *_heartRhythmUserDefaults;
    HKObserverSet *_heartRhythmAvailabilityObservers;
    HKActiveWatchFeatureAvailabilityDataSource *_availabilityDataSource;
    NSMutableSet *_onboardingKeysReadSet;
    HKMobileCountryCodeManager *_mobileCountryCodeManager;
    HKWatchAppAvailability *_ecgAppAvailability;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKKeyValueDomain *keyValueDomain;
@property (retain, nonatomic) NSUserDefaults *heartRhythmUserDefaults;
@property (retain, nonatomic) HKObserverSet *heartRhythmAvailabilityObservers;
@property (retain, nonatomic) HKActiveWatchFeatureAvailabilityDataSource *availabilityDataSource;
@property (retain, nonatomic) NSMutableSet *onboardingKeysReadSet;
@property (nonatomic) int onboardingStateDidChangeNotificationToken;
@property (nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken;
@property (nonatomic) int userCharacteristicsDidChangeNotificationToken;
@property (retain, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager;
@property (retain, nonatomic) HKWatchAppAvailability *ecgAppAvailability;
@property (nonatomic, readonly, getter=isElectrocardiogramOnboardingCompleted) _Bool electrocardiogramOnboardingCompleted;
@property (nonatomic, getter=isElectrocardiogramFirstRecordingCompleted) _Bool electrocardiogramFirstRecordingCompleted;
@property (nonatomic, readonly, getter=isElectrocardiogramRecordingDisabled) _Bool electrocardiogramRecordingDisabled;
@property (nonatomic, readonly) NSDate *electrocardiogramFirstOnboardingCompletedDate;
@property (nonatomic, readonly, getter=isAtrialFibrillationDetectionOnboardingCompleted) _Bool atrialFibrillationDetectionOnboardingCompleted;
@property (nonatomic, readonly, getter=isAtrialFibrillationDetectionDisabled) _Bool atrialFibrillationDetectionDisabled;

+ (id)pairedDevices;
+ (id)electrocardiogramAppBundleID;
+ (id)activePairedDevice;
+ (id)currentDeviceRegionCode;
+ (id)featureAvailabilityUserDefaults;
+ (unsigned long long)_electrocardiogramSupportedStateForDeviceRegion:(id)arg1;
+ (_Bool)electrocardiogramSupportedForDevice:(id)arg1;
+ (_Bool)isElectrocardiogramSupportedOnWatch:(id)arg1;
+ (unsigned long long)electrocardiogramSupportedStateForWatch:(id)arg1;
+ (_Bool)_isDeviceRunningSeed:(id)arg1;
+ (_Bool)isDeviceSeries4:(id)arg1;
+ (_Bool)_isRunningSeed;
+ (_Bool)_isElectrocardiogramSupportedOnPhone:(id)arg1;
+ (_Bool)_isElectrocardiogramSupportedOnPhone:(id)arg1 geolocatedCountryCode:(id)arg2;
+ (_Bool)_isElectrocardiogramSupportedOniOSDevice:(id)arg1 geolocatedCountryCode:(id)arg2;
+ (_Bool)_isElectrocardiogramDisabledWithDataSource:(id)arg1;
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForWatch:(id)arg1;
+ (_Bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnWatch:(id)arg1;
+ (_Bool)atrialFibrillationDetectionSupportedForDevice:(id)arg1;
+ (unsigned long long)_atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1;
+ (_Bool)isDeviceSeries3OrOlder:(id)arg1;
+ (_Bool)_isAtrialFibrillationDetectionDisabledWithDataSource:(id)arg1;
+ (_Bool)_isAtrialFibrillationDetectionSupportedOnPhone:(id)arg1;
+ (_Bool)isHeartRateEnabledInPrivacy;
+ (_Bool)shouldInstallWatchApp;
+ (_Bool)isElectrocardiogramSupportedOnAnyWatch;
+ (_Bool)isElectrocardiogramSupportedOnActiveWatch;
+ (_Bool)isElectrocardiogramSupportedOnAllWatches;
+ (unsigned long long)electrocardiogramSupportedStateForActiveWatch;
+ (_Bool)isElectrocardiogramAppDeletableForActiveWatch;
+ (unsigned long long)electrocardiogramSupportedState;
+ (_Bool)isElectrocardiogramSupportedOnPairedPhone;
+ (_Bool)isElectrocardiogramSupportedOnPairedPhoneWithGeolocatedCountryCode:(id)arg1;
+ (void)installElectrocardiogramAppOnActiveWatch:(CDUnknownBlockType)arg1;
+ (long long)currentElectrocardiogramOnboardingVersion;
+ (_Bool)isAtrialFibrillationDetectionSettingEnabled;
+ (_Bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnAnyWatch;
+ (_Bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnActiveWatch;
+ (_Bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnAllWatches;
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForActiveWatch;
+ (unsigned long long)atrialFibrillationDetectionSupportedState;
+ (_Bool)isAtrialFibrillationDetectionSupportedOnPairedPhone;
+ (_Bool)isAtrialFibrillationDetectionDisabledForOnboardingCountryCode:(id)arg1;
+ (long long)currentAtrialFibrillationDetectionOnboardingVersion;

- (void)dealloc;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (void)_localeDidChange;
- (id)initWithHealthStore:(id)arg1;
- (id)electrocardiogramOnboardingCountryCode;
- (id)atrialFibrillationDetectionOnboardingCountryCode;
- (_Bool)isHeartAgeGatingEnabledOnWatch:(id)arg1 currentDate:(id)arg2;
- (_Bool)_meetsMinimumAgeRequirementWithMinimumRequiredAge:(long long)arg1 currentDate:(id)arg2;
- (void)notifyHeartRhythmAvailabilityDidUpdate;
- (void)_featureAvailabilityConditionsDidUpdate;
- (void)_pairedOrActiveDevicesDidChange:(id)arg1;
- (void)_resetIsElectrocardiogramDisabledCacheWithLock:(_Bool)arg1;
- (void)_resetIsAtrialFibrillationDetectionDisabledCacheWithLock:(_Bool)arg1;
- (_Bool)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2 useCache:(_Bool)arg3;
- (_Bool)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2;
- (void)_setOnboardingVersionCompleted:(long long)arg1 forKey:(id)arg2 additionalValues:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setFirstOnboardingCompletedDate:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setElectrocardiogramOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2;
- (void)_triggerFeatureAvailabilityUpdateOnPhoneAndWatchWithDelay:(long long)arg1;
- (_Bool)shouldAdvertiseElectrocardiogramForWatch:(id)arg1;
- (_Bool)_meetsMinimumAgeRequirementForElectrocardiogramWithCurrentDate:(id)arg1;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_electrocardiogramFirstOnboardingCompletedDate;
- (void)_setAtrialFibrillationDetectionOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2;
- (void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldAdvertiseAtrialFibrillationDetectionForWatch:(id)arg1;
- (_Bool)_meetsMinimumAgeRequirementForAtrialFibrillationDetectionWithCurrentDate:(id)arg1;
- (void)addHeartRhythmAvailabilityObserver:(id)arg1;
- (void)removeHeartRhythmAvailabilityObserver:(id)arg1;
- (_Bool)isHeartAgeGatingEnabledOnActiveWatchWithCurrentDate:(id)arg1;
- (_Bool)isElectrocardiogramOnboardingCompletedNoCache;
- (void)setElectrocardiogramOnboardingCompleted;
- (void)setElectrocardiogramFirstOnboardingCompletedDate:(id)arg1;
- (void)setElectrocardiogramOnboardingCompletedForCountryCode:(id)arg1;
- (void)resetElectrocardiogramOnboarding;
- (_Bool)shouldAdvertiseElectrocardiogramForActiveWatch;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocation:(CDUnknownBlockType)arg1;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForActiveWatch:(CDUnknownBlockType)arg1;
- (void)electrocardiogramAppInstallStateOnActiveWatch:(CDUnknownBlockType)arg1;
- (void)setAtrialFibrillationDetectionOnboardingCompletedForCountryCode:(id)arg1;
- (void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocation:(CDUnknownBlockType)arg1;
- (void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForActiveWatch:(CDUnknownBlockType)arg1;
- (_Bool)shouldAdvertiseAtrialFibrillationDetectionForActiveWatch;
- (void)resetAtrialFibrillationDetectionOnboarding;

@end
