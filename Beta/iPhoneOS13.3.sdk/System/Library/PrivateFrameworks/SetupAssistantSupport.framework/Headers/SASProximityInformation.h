/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSSet, NSString;

@protocol OS_dispatch_semaphore;

@interface SASProximityInformation : NSObject

{
    _Bool _usesSameAccountForiTunes;
    _Bool _automaticTimeZoneEnabled;
    _Bool _restoring;
    _Bool _backupEnabled;
    _Bool _locationServicesOptIn;
    NSArray *_keyboards;
    NSString *_appleID;
    NSArray *_networks;
    NSArray *_networkPasswords;
    NSNumber *_connectedToWiFi;
    NSDictionary *_localePreferences;
    NSString *_timeZone;
    NSData *_accessibilitySettings;
    NSString *_firstName;
    NSString *_deviceModel;
    NSString *_deviceClass;
    NSString *_deviceName;
    NSString *_backupUUID;
    NSDate *_dateOfLastBackup;
    NSData *_backupMetadata;
    NSData *_locationServicesData;
    NSNumber *_findMyDeviceOptIn;
    NSNumber *_deviceAnalyticsOptIn;
    NSNumber *_appAnalyticsOptIn;
    NSNumber *_siriOptIn;
    NSData *_siriVoiceProfileAvailabilityMetadata;
    NSNumber *_deviceTermsIdentifier;
    NSString *_productVersion;
    NSNumber *_supportsDeviceToDeviceMigration;
    NSNumber *_deviceToDeviceMigrationVersion;
    NSNumber *_storageAvailable;
    NSNumber *_storageCapacity;
    NSNumber *_preventSoftwareUpdateDeviceMigration;
    NSNumber *_hasTransferrableTelephonyPlan;
    NSSet *_nearbyNetworks;
    NSObject<OS_dispatch_semaphore> *_nearbyNetworksSemaphore;
}

@property (retain) NSSet *nearbyNetworks;
@property (retain) NSObject<OS_dispatch_semaphore> *nearbyNetworksSemaphore;
@property (copy) NSArray *keyboards;
@property (copy) NSString *appleID;
@property _Bool usesSameAccountForiTunes;
@property (copy) NSArray *networks;
@property (copy) NSArray *networkPasswords;
@property (retain) NSNumber *connectedToWiFi;
@property (copy) NSDictionary *localePreferences;
@property _Bool automaticTimeZoneEnabled;
@property (copy) NSString *timeZone;
@property (retain) NSData *accessibilitySettings;
@property (copy) NSString *firstName;
@property (copy) NSString *deviceModel;
@property (copy) NSString *deviceClass;
@property (getter=isRestoring) _Bool restoring;
@property (copy) NSString *deviceName;
@property (copy) NSString *backupUUID;
@property (nonatomic, getter=isBackupEnabled) _Bool backupEnabled;
@property (copy) NSDate *dateOfLastBackup;
@property (retain) NSData *backupMetadata;
@property _Bool locationServicesOptIn;
@property (retain) NSData *locationServicesData;
@property (retain) NSNumber *findMyDeviceOptIn;
@property (retain) NSNumber *deviceAnalyticsOptIn;
@property (retain) NSNumber *appAnalyticsOptIn;
@property (retain) NSNumber *siriOptIn;
@property (retain) NSData *siriVoiceProfileAvailabilityMetadata;
@property (retain) NSNumber *deviceTermsIdentifier;
@property (retain) NSString *productVersion;
@property (retain) NSNumber *supportsDeviceToDeviceMigration;
@property (retain) NSNumber *deviceToDeviceMigrationVersion;
@property (retain) NSNumber *storageAvailable;
@property (retain) NSNumber *storageCapacity;
@property (retain) NSNumber *preventSoftwareUpdateDeviceMigration;
@property NSNumber *hasTransferrableTelephonyPlan;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadInformation;
- (_Bool)isNetworkTransferrable:(struct __WiFiNetwork *)arg1;
- (id)_getFindMyDeviceOptIn;
- (id)numberFromMCUserBoolSetting:(id)arg1;
- (void)wirelessScanComplete:(id)arg1 error:(int)arg2;

@end
