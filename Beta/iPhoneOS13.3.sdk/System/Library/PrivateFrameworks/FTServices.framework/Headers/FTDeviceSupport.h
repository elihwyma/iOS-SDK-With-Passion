/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, FTSelectedPNRSubscription, NSDictionary, NSString;

@interface FTDeviceSupport : NSObject

{
    NSString *_number;
    _Bool _blockPost;
    _Bool _supportsFrontCamera;
    _Bool _supportsBackCamera;
    _Bool _supportsiMessage;
    _Bool _supportsSMS;
    _Bool _supportsMMS;
    _Bool _mmsConfigured;
    long long _supportsApplePayState;
    _Bool _supportsHandoff;
    _Bool _supportsTethering;
    _Bool _supportsFT;
    _Bool _supportsFTA;
    _Bool _supportsFTMW;
    _Bool _supportsWiFi;
    _Bool _supportsWLAN;
    _Bool _supportsNonWiFiFaceTime;
    _Bool _supportsCellularData;
    _Bool _simBecameNotReady;
    long long _simInserted;
    long long _isPNRSupportedCachedValue;
    _Bool _faceTimeBlocked;
    _Bool _iMessageBlocked;
    _Bool _accountModificationRestricted;
    _Bool _isGreenTea;
    long long _performanceClass;
    CoreTelephonyClient *_coreTelephonyClient;
    FTSelectedPNRSubscription *_selectedPNRSubscription;
    _Bool _commCenterDead;
}

@property (nonatomic, readonly) _Bool isTelephonyDevice;
@property (nonatomic, readonly) _Bool faceTimeAvailable;
@property (nonatomic, readonly) _Bool faceTimeBlocked;
@property (nonatomic, readonly) _Bool faceTimeSupported;
@property (nonatomic, readonly) _Bool callingAvailable;
@property (nonatomic, readonly) _Bool callingBlocked;
@property (nonatomic, readonly) _Bool callingSupported;
@property (nonatomic, readonly) _Bool multiwayAvailable;
@property (nonatomic, readonly) _Bool multiwayBlocked;
@property (nonatomic, readonly) _Bool multiwaySupported;
@property (nonatomic, readonly) _Bool nonWifiFaceTimeAvailable;
@property (nonatomic, readonly) _Bool nonWifiCallingAvailable;
@property (nonatomic, readonly) _Bool iMessageAvailable;
@property (nonatomic, readonly) _Bool iMessageBlocked;
@property (nonatomic, readonly) _Bool iMessageSupported;
@property (nonatomic, readonly) _Bool identityServicesSupported;
@property (nonatomic, readonly) _Bool madridAvailable;
@property (nonatomic, readonly) _Bool madridBlocked;
@property (nonatomic, readonly) _Bool madridSupported;
@property (nonatomic, readonly) _Bool conferencingEnabled;
@property (nonatomic, readonly) _Bool conferencingBlocked;
@property (nonatomic, readonly) _Bool conferencingAllowed;
@property (nonatomic, readonly) _Bool commCenterDead;
@property (nonatomic, readonly) _Bool accountModificationRestricted;
@property (nonatomic, readonly) _Bool isInMultiUserMode;
@property (nonatomic, readonly) _Bool wantsBreakBeforeMake;
@property (nonatomic, readonly) _Bool isC2KEquipment;
@property (nonatomic, readonly) _Bool supportsSimultaneousVoiceAndDataRightNow;
@property (nonatomic, readonly) _Bool supportsAppleIDIdentification;
@property (nonatomic, readonly) _Bool supportsApplePay;
@property (nonatomic, readonly) _Bool supportsHandoff;
@property (nonatomic, readonly) _Bool supportsTethering;
@property (nonatomic, readonly) _Bool supportsSMS;
@property (nonatomic, readonly) _Bool supportsMMS;
@property (nonatomic, readonly) _Bool supportsWiFi;
@property (nonatomic, readonly) _Bool supportsCellularData;
@property (nonatomic, readonly) _Bool supportsWLAN;
@property (nonatomic, readonly) _Bool supportsNonWiFiFaceTime;
@property (nonatomic, readonly) _Bool supportsNonWiFiCalling;
@property (nonatomic, readonly) _Bool mmsConfigured;
@property (nonatomic, readonly) _Bool supportsFrontFacingCamera;
@property (nonatomic, readonly) _Bool supportsBackFacingCamera;
@property (nonatomic, readonly) _Bool supportsFunCam;
@property (nonatomic, readonly) _Bool isGreenTea;
@property (nonatomic, readonly) NSDictionary *telephonyCapabilities;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *deviceColor;
@property (nonatomic, readonly) NSString *enclosureColor;
@property (nonatomic, readonly) NSString *deviceIDPrefix;
@property (nonatomic, readonly) NSString *deviceTypeIDPrefix;
@property (nonatomic, readonly) NSString *deviceRegionInfo;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *userAgentString;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productVersion;
@property (nonatomic, readonly) NSString *productBuildVersion;
@property (nonatomic, readonly) NSString *productOSVersion;
@property (nonatomic, readonly) NSString *deviceInformationString;
@property (nonatomic, readonly) long long performanceClass;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) _Bool registrationSupported;
@property (nonatomic, readonly) _Bool supportsSMSIdentification;
@property (nonatomic, readonly) _Bool SIMInserted;
@property (nonatomic, readonly) NSDictionary *CTNetworkInformation;
@property (nonatomic, readonly) NSString *telephoneNumber;
@property (nonatomic, readonly) _Bool lowRAMDevice;
@property (nonatomic, readonly) _Bool slowCPUDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_updateCapabilities;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)pnrReadyStateNotification:(id)arg1 regState:(_Bool)arg2;
- (void)carrierBundleChange:(id)arg1;
- (void)operatorBundleChange:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (_Bool)_legacy_supportsSMSIdentification;
- (id)registrationState;
- (long long)memorySize;
- (_Bool)nonWifiAvailableForBundleId:(id)arg1;
- (_Bool)wifiAllowedForBundleId:(id)arg1;
- (void)_updateManagedConfigurationSettings;
- (void)_registerForServiceStatusNotifications;
- (void)_registerForCarrierNotifications;
- (void)_registerForCapabilityNotifications;
- (void)_registerForLockdownNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_unregisterForServiceStatusNotifications;
- (id)_serviceStatus;
- (void)_registerForCommCenterReadyNotifications;
- (void)_initializeSIMInsertedCachedValue;
- (void)_handlePotentialPhoneNumberRegistrationStateChanged;
- (void)_handleCarrierSettingsChanged;
- (void)_handleSIMStatusChangedToStatus:(id)arg1;
- (void)_invalidateValuesCachedForSelectedPhoneNumberRegistration;
- (void)_updateCTNetworkDictionary:(id)arg1 key:(id)arg2 withTelephonyNetworkValue:(id)arg3 telephonyError:(id)arg4;
- (void)_lockdownStateChanged:(id)arg1;
- (int)cpuFamily;
- (_Bool)_enoughPowerToSupportEffects;
- (void)_commCenterAlive;
- (void)_registerForInternalCoreTelephonyNotifications;
- (_Bool)inProcess_isCallingSupported;
- (_Bool)isInDualPhoneIdentityMode;
- (void)noteSelectedPhoneNumberRegistrationSubscriptionDidChange;
- (_Bool)nonBluetoothAvailableForBundleId:(id)arg1;

@end
