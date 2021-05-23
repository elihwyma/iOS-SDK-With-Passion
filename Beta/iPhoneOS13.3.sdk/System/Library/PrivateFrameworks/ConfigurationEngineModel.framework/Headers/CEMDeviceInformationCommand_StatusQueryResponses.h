/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings, CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo, NSArray, NSDate, NSNumber, NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponses : CEMPayloadBase

{
    NSString *_statusUDID;
    CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo *_statusOrganizationInfo;
    NSString *_statusMDMOptions;
    NSDate *_statusLastCloudBackupDate;
    NSNumber *_statusAwaitingConfiguration;
    NSNumber *_statusITunesStoreAccountIsActive;
    NSString *_statusITunesStoreAccountHash;
    NSString *_statusDeviceName;
    NSString *_statusOSVersion;
    NSString *_statusBuildVersion;
    NSString *_statusModelName;
    NSString *_statusModel;
    NSString *_statusProductName;
    NSString *_statusMarketingName;
    NSString *_statusSerialNumber;
    NSNumber *_statusDeviceCapacity;
    NSNumber *_statusAvailableDeviceCapacity;
    NSString *_statusIMEI;
    NSString *_statusMEID;
    NSString *_statusModemFirmwareVersion;
    NSNumber *_statusCellularTechnology;
    NSNumber *_statusBatteryLevel;
    NSNumber *_statusIsSupervised;
    NSNumber *_statusIsMultiUser;
    NSNumber *_statusIsDeviceLocatorServiceEnabled;
    NSNumber *_statusIsActivationLockEnabled;
    NSNumber *_statusIsDoNotDisturbInEffect;
    NSString *_statusDeviceID;
    NSString *_statusEASDeviceIdentifier;
    NSNumber *_statusIsCloudBackupEnabled;
    NSArray *_statusActiveManagedUsers;
    CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings *_statusOSUpdateSettings;
    NSArray *_statusAutoSetupAdminAccounts;
    NSNumber *_statusSystemIntegrityProtectionEnabled;
    NSNumber *_statusIsMDMLostModeEnabled;
    NSNumber *_statusMaximumResidentUsers;
    NSString *_statusPushToken;
    NSNumber *_statusDiagnosticSubmissionEnabled;
    NSNumber *_statusAppAnalyticsEnabled;
    NSString *_statusICCID;
    NSString *_statusBluetoothMAC;
    NSString *_statusWiFiMAC;
    NSArray *_statusEthernetMACs;
    NSString *_statusCurrentCarrierNetwork;
    NSString *_statusSIMCarrierNetwork;
    NSString *_statusSubscriberCarrierNetwork;
    NSString *_statusCarrierSettingsVersion;
    NSString *_statusPhoneNumber;
    NSNumber *_statusDataRoamingEnabled;
    NSNumber *_statusVoiceRoamingEnabled;
    NSNumber *_statusPersonalHotspotEnabled;
    NSNumber *_statusIsNetworkTethered;
    NSNumber *_statusIsRoaming;
    NSString *_statusSIMMCC;
    NSString *_statusSIMMNC;
    NSString *_statusSubscriberMCC;
    NSString *_statusSubscriberMNC;
    NSString *_statusCurrentMCC;
    NSString *_statusCurrentMNC;
}

@property (copy, nonatomic) NSString *statusUDID;
@property (copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo *statusOrganizationInfo;
@property (copy, nonatomic) NSString *statusMDMOptions;
@property (copy, nonatomic) NSDate *statusLastCloudBackupDate;
@property (copy, nonatomic) NSNumber *statusAwaitingConfiguration;
@property (copy, nonatomic) NSNumber *statusITunesStoreAccountIsActive;
@property (copy, nonatomic) NSString *statusITunesStoreAccountHash;
@property (copy, nonatomic) NSString *statusDeviceName;
@property (copy, nonatomic) NSString *statusOSVersion;
@property (copy, nonatomic) NSString *statusBuildVersion;
@property (copy, nonatomic) NSString *statusModelName;
@property (copy, nonatomic) NSString *statusModel;
@property (copy, nonatomic) NSString *statusProductName;
@property (copy, nonatomic) NSString *statusMarketingName;
@property (copy, nonatomic) NSString *statusSerialNumber;
@property (copy, nonatomic) NSNumber *statusDeviceCapacity;
@property (copy, nonatomic) NSNumber *statusAvailableDeviceCapacity;
@property (copy, nonatomic) NSString *statusIMEI;
@property (copy, nonatomic) NSString *statusMEID;
@property (copy, nonatomic) NSString *statusModemFirmwareVersion;
@property (copy, nonatomic) NSNumber *statusCellularTechnology;
@property (copy, nonatomic) NSNumber *statusBatteryLevel;
@property (copy, nonatomic) NSNumber *statusIsSupervised;
@property (copy, nonatomic) NSNumber *statusIsMultiUser;
@property (copy, nonatomic) NSNumber *statusIsDeviceLocatorServiceEnabled;
@property (copy, nonatomic) NSNumber *statusIsActivationLockEnabled;
@property (copy, nonatomic) NSNumber *statusIsDoNotDisturbInEffect;
@property (copy, nonatomic) NSString *statusDeviceID;
@property (copy, nonatomic) NSString *statusEASDeviceIdentifier;
@property (copy, nonatomic) NSNumber *statusIsCloudBackupEnabled;
@property (copy, nonatomic) NSArray *statusActiveManagedUsers;
@property (copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings *statusOSUpdateSettings;
@property (copy, nonatomic) NSArray *statusAutoSetupAdminAccounts;
@property (copy, nonatomic) NSNumber *statusSystemIntegrityProtectionEnabled;
@property (copy, nonatomic) NSNumber *statusIsMDMLostModeEnabled;
@property (copy, nonatomic) NSNumber *statusMaximumResidentUsers;
@property (copy, nonatomic) NSString *statusPushToken;
@property (copy, nonatomic) NSNumber *statusDiagnosticSubmissionEnabled;
@property (copy, nonatomic) NSNumber *statusAppAnalyticsEnabled;
@property (copy, nonatomic) NSString *statusICCID;
@property (copy, nonatomic) NSString *statusBluetoothMAC;
@property (copy, nonatomic) NSString *statusWiFiMAC;
@property (copy, nonatomic) NSArray *statusEthernetMACs;
@property (copy, nonatomic) NSString *statusCurrentCarrierNetwork;
@property (copy, nonatomic) NSString *statusSIMCarrierNetwork;
@property (copy, nonatomic) NSString *statusSubscriberCarrierNetwork;
@property (copy, nonatomic) NSString *statusCarrierSettingsVersion;
@property (copy, nonatomic) NSString *statusPhoneNumber;
@property (copy, nonatomic) NSNumber *statusDataRoamingEnabled;
@property (copy, nonatomic) NSNumber *statusVoiceRoamingEnabled;
@property (copy, nonatomic) NSNumber *statusPersonalHotspotEnabled;
@property (copy, nonatomic) NSNumber *statusIsNetworkTethered;
@property (copy, nonatomic) NSNumber *statusIsRoaming;
@property (copy, nonatomic) NSString *statusSIMMCC;
@property (copy, nonatomic) NSString *statusSIMMNC;
@property (copy, nonatomic) NSString *statusSubscriberMCC;
@property (copy, nonatomic) NSString *statusSubscriberMNC;
@property (copy, nonatomic) NSString *statusCurrentMCC;
@property (copy, nonatomic) NSString *statusCurrentMNC;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithUDID:(id)arg1 withOrganizationInfo:(id)arg2 withMDMOptions:(id)arg3 withLastCloudBackupDate:(id)arg4 withAwaitingConfiguration:(id)arg5 withITunesStoreAccountIsActive:(id)arg6 withITunesStoreAccountHash:(id)arg7 withDeviceName:(id)arg8 withOSVersion:(id)arg9 withBuildVersion:(id)arg10 withModelName:(id)arg11 withModel:(id)arg12 withProductName:(id)arg13 withMarketingName:(id)arg14 withSerialNumber:(id)arg15 withDeviceCapacity:(id)arg16 withAvailableDeviceCapacity:(id)arg17 withIMEI:(id)arg18 withMEID:(id)arg19 withModemFirmwareVersion:(id)arg20 withCellularTechnology:(id)arg21 withBatteryLevel:(id)arg22 withIsSupervised:(id)arg23 withIsMultiUser:(id)arg24 withIsDeviceLocatorServiceEnabled:(id)arg25 withIsActivationLockEnabled:(id)arg26 withIsDoNotDisturbInEffect:(id)arg27 withDeviceID:(id)arg28 withEASDeviceIdentifier:(id)arg29 withIsCloudBackupEnabled:(id)arg30 withActiveManagedUsers:(id)arg31 withOSUpdateSettings:(id)arg32 withAutoSetupAdminAccounts:(id)arg33 withSystemIntegrityProtectionEnabled:(id)arg34 withIsMDMLostModeEnabled:(id)arg35 withMaximumResidentUsers:(id)arg36 withPushToken:(id)arg37 withDiagnosticSubmissionEnabled:(id)arg38 withAppAnalyticsEnabled:(id)arg39 withICCID:(id)arg40 withBluetoothMAC:(id)arg41 withWiFiMAC:(id)arg42 withEthernetMACs:(id)arg43 withCurrentCarrierNetwork:(id)arg44 withSIMCarrierNetwork:(id)arg45 withSubscriberCarrierNetwork:(id)arg46 withCarrierSettingsVersion:(id)arg47 withPhoneNumber:(id)arg48 withDataRoamingEnabled:(id)arg49 withVoiceRoamingEnabled:(id)arg50 withPersonalHotspotEnabled:(id)arg51 withIsNetworkTethered:(id)arg52 withIsRoaming:(id)arg53 withSIMMCC:(id)arg54 withSIMMNC:(id)arg55 withSubscriberMCC:(id)arg56 withSubscriberMNC:(id)arg57 withCurrentMCC:(id)arg58 withCurrentMNC:(id)arg59;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
