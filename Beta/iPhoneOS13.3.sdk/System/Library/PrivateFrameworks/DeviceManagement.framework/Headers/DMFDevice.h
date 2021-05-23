/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface DMFDevice : NSObject

{
    NSNumber *_availableCapacity;
    NSNumber *_batteryLevel;
    NSString *_bluetoothAddress;
    NSString *_buildVersion;
    NSNumber *_capacity;
    NSString *_deviceName;
    NSNumber *_deviceType;
    NSNumber *_isAppleInternal;
    NSNumber *_isAwaitingConfiguration;
    NSNumber *_isDeviceLocatorServiceEnabled;
    NSNumber *_isDoNotDisturbInEffect;
    NSNumber *_isInSingleAppMode;
    NSNumber *_isLostModeEnabled;
    NSString *_iTunesStoreAccountHash;
    NSNumber *_iTunesStoreAccountIsActive;
    NSString *_marketingName;
    NSString *_model;
    NSString *_modelName;
    NSString *_osVersion;
    NSString *_productName;
    NSString *_serialNumber;
    NSString *_wifiAddress;
    NSNumber *_isAppAnalyticsEnabled;
    NSNumber *_isCloudBackupEnabled;
    NSNumber *_isDiagnosticSubmissionEnabled;
    NSNumber *_isSupervised;
    NSDate *_lastCloudBackupDate;
    NSString *_uniqueIdentifier;
    NSString *_carrierSettingsVersion;
    NSNumber *_cellularTechnology;
    NSString *_currentCarrierNetwork;
    NSString *_currentMCC;
    NSString *_currentMNC;
    NSString *_EASIdentifier;
    NSNumber *_enforcedSoftwareUpdateDelay;
    NSString *_ICCID;
    NSString *_IMEI;
    NSNumber *_isActivationLockEnabled;
    NSNumber *_isDataRoamingEnabled;
    NSNumber *_isEphemeralMultiUser;
    NSNumber *_isNetworkTethered;
    NSNumber *_isPersonalHotspotEnabled;
    NSNumber *_isRoaming;
    NSNumber *_isVoiceRoamingEnabled;
    NSNumber *_maximumResidentUsers;
    NSString *_MEID;
    NSString *_modemFirmwareVersion;
    NSString *_phoneNumber;
    NSDictionary *_serviceSubscriptions;
    NSArray *_skippedSetupPanes;
    NSString *_subscriberCarrierNetwork;
    NSString *_subscriberMCC;
    NSString *_subscriberMNC;
    NSArray *_activeManagedUsers;
    NSArray *_autoSetupAdminAccounts;
    NSString *_hostName;
    NSDictionary *_installedExtensions;
    NSNumber *_isSystemIntegrityProtectionEnabled;
    NSString *_localHostName;
    NSDictionary *_osUpdateSettings;
    NSDictionary *_xsanConfiguration;
    NSString *_destinationIdentifier;
    NSDictionary *_errorsForKeys;
}

@property (copy, nonatomic) NSDictionary *errorsForKeys;
@property (nonatomic, readonly) NSNumber *availableCapacity;
@property (nonatomic, readonly) NSNumber *batteryLevel;
@property (nonatomic, readonly) NSString *bluetoothAddress;
@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly) NSNumber *capacity;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSNumber *deviceType;
@property (nonatomic, readonly) NSNumber *isAppleInternal;
@property (nonatomic, readonly) NSNumber *isAwaitingConfiguration;
@property (nonatomic, readonly) NSNumber *isDeviceLocatorServiceEnabled;
@property (nonatomic, readonly) NSNumber *isDoNotDisturbInEffect;
@property (nonatomic, readonly) NSNumber *isInSingleAppMode;
@property (nonatomic, readonly) NSNumber *isLostModeEnabled;
@property (nonatomic, readonly) NSString *iTunesStoreAccountHash;
@property (nonatomic, readonly) NSNumber *iTunesStoreAccountIsActive;
@property (nonatomic, readonly) NSString *marketingName;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *wifiAddress;
@property (nonatomic, readonly) NSNumber *isAppAnalyticsEnabled;
@property (nonatomic, readonly) NSNumber *isCloudBackupEnabled;
@property (nonatomic, readonly) NSNumber *isDiagnosticSubmissionEnabled;
@property (nonatomic, readonly) NSNumber *isSupervised;
@property (nonatomic, readonly) NSDate *lastCloudBackupDate;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSString *carrierSettingsVersion;
@property (nonatomic, readonly) NSNumber *cellularTechnology;
@property (nonatomic, readonly) NSString *currentCarrierNetwork;
@property (nonatomic, readonly) NSString *currentMCC;
@property (nonatomic, readonly) NSString *currentMNC;
@property (nonatomic, readonly) NSString *EASIdentifier;
@property (nonatomic, readonly) NSNumber *enforcedSoftwareUpdateDelay;
@property (nonatomic, readonly) NSString *ICCID;
@property (nonatomic, readonly) NSString *IMEI;
@property (nonatomic, readonly) NSNumber *isActivationLockEnabled;
@property (nonatomic, readonly) NSNumber *isDataRoamingEnabled;
@property (nonatomic, readonly) NSNumber *isEphemeralMultiUser;
@property (nonatomic, readonly) NSNumber *isNetworkTethered;
@property (nonatomic, readonly) NSNumber *isPersonalHotspotEnabled;
@property (nonatomic, readonly) NSNumber *isRoaming;
@property (nonatomic, readonly) NSNumber *isVoiceRoamingEnabled;
@property (nonatomic, readonly) NSNumber *maximumResidentUsers;
@property (nonatomic, readonly) NSString *MEID;
@property (nonatomic, readonly) NSString *modemFirmwareVersion;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSDictionary *serviceSubscriptions;
@property (nonatomic, readonly) NSArray *skippedSetupPanes;
@property (nonatomic, readonly) NSString *subscriberCarrierNetwork;
@property (nonatomic, readonly) NSString *subscriberMCC;
@property (nonatomic, readonly) NSString *subscriberMNC;
@property (nonatomic, readonly) NSArray *activeManagedUsers;
@property (nonatomic, readonly) NSArray *autoSetupAdminAccounts;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) NSDictionary *installedExtensions;
@property (nonatomic, readonly) NSNumber *isSystemIntegrityProtectionEnabled;
@property (nonatomic, readonly) NSString *localHostName;
@property (nonatomic, readonly) NSDictionary *osUpdateSettings;
@property (nonatomic, readonly) NSDictionary *xsanConfiguration;
@property (nonatomic, readonly) NSString *destinationIdentifier;

+ (id)propertyNameForKey:(id)arg1;
+ (id)_sanitizedDeviceKey:(id)arg1;

- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initPrivate;
- (id)valueForKey:(id)arg1 error:(id *)arg2;

@end
