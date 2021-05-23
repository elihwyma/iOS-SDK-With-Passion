/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

#import <ClassroomKit/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface CRKDevice : NSObject <Swift>

{
    _Bool _supervised;
    _Bool _ephemeralMultiUser;
    _Bool _screenSaverActive;
    _Bool _muted;
    _Bool _appLocked;
    _Bool _passcodeEnabled;
    _Bool _requestingUnenroll;
    _Bool _orientationLocked;
    float _batteryLevel;
    float _volume;
    float _displayBackingScaleFactor;
    float _displayWidth;
    float _displayHeight;
    NSString *_identifier;
    NSString *_serialNumber;
    unsigned long long _platform;
    NSString *_model;
    NSString *_name;
    NSString *_systemName;
    NSString *_systemVersion;
    NSString *_buildVersion;
    unsigned long long _chargingState;
    unsigned long long _lockState;
    unsigned long long _screenState;
    unsigned long long _availableBytes;
    unsigned long long _deviceOrientation;
    unsigned long long _interfaceOrientation;
    NSArray *_displays;
    NSString *_primaryOpenApplication;
    NSString *_secondaryOpenApplication;
    NSArray *_allOpenApplications;
    NSArray *_installedApplicationInfo;
    NSString *_stagedAdHocIdentityCertificateFingerprint;
    NSArray *_trustedAnchorCertificateFingerprints;
    NSString *_userIdentifier;
    NSString *_userDisplayName;
    NSString *_userGivenName;
    NSString *_userPhoneticGivenName;
    NSString *_userFamilyName;
    NSString *_userPhoneticFamilyName;
    NSString *_userImageURL;
    unsigned long long _loginState;
    NSString *_studentImageIdentifier;
    NSString *_instructorImageIdentifier;
    NSString *_currentLocaleIdentifier;
    NSDictionary *_activeAirPlayRoute;
    NSArray *_availableAirPlayRoutes;
    NSString *_managementLockPasscode;
    NSString *_pipOpenApplication;
}

@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *systemName;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSString *buildVersion;
@property (nonatomic, getter=isSupervised) _Bool supervised;
@property (nonatomic, getter=isEphemeralMultiUser) _Bool ephemeralMultiUser;
@property (nonatomic) float batteryLevel;
@property (nonatomic) unsigned long long chargingState;
@property (nonatomic) unsigned long long lockState;
@property (nonatomic) unsigned long long screenState;
@property (nonatomic, getter=isScreenSaverActive) _Bool screenSaverActive;
@property (nonatomic) float volume;
@property (nonatomic) unsigned long long availableBytes;
@property (nonatomic) unsigned long long deviceOrientation;
@property (nonatomic) unsigned long long interfaceOrientation;
@property (copy, nonatomic) NSArray *displays;
@property (nonatomic, getter=isOrientationLocked) _Bool orientationLocked;
@property (nonatomic) float displayBackingScaleFactor;
@property (nonatomic) float displayWidth;
@property (nonatomic) float displayHeight;
@property (copy, nonatomic) NSString *primaryOpenApplication;
@property (copy, nonatomic) NSString *secondaryOpenApplication;
@property (copy, nonatomic) NSString *pipOpenApplication;
@property (copy, nonatomic) NSArray *allOpenApplications;
@property (nonatomic, getter=isAppLocked) _Bool appLocked;
@property (copy, nonatomic) NSArray *installedApplications;
@property (copy, nonatomic) NSArray *installedApplicationInfo;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *userDisplayName;
@property (copy, nonatomic) NSString *userGivenName;
@property (copy, nonatomic) NSString *userFamilyName;
@property (copy, nonatomic) NSString *userImageURL;
@property (nonatomic) unsigned long long loginState;
@property (nonatomic, getter=isPasscodeEnabled) _Bool passcodeEnabled;
@property (copy, nonatomic) NSString *studentImageIdentifier;
@property (copy, nonatomic) NSString *instructorImageIdentifier;
@property (copy, nonatomic) NSString *currentLocaleIdentifier;
@property (copy, nonatomic) NSDictionary *activeAirPlayRoute;
@property (copy, nonatomic) NSArray *availableAirPlayRoutes;
@property (copy, nonatomic) NSString *managementLockPasscode;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *systemName;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSString *buildVersion;
@property (nonatomic, getter=isSupervised) _Bool supervised;
@property (nonatomic, getter=isEphemeralMultiUser) _Bool ephemeralMultiUser;
@property (nonatomic) float batteryLevel;
@property (nonatomic) unsigned long long chargingState;
@property (nonatomic) unsigned long long lockState;
@property (nonatomic) unsigned long long screenState;
@property (nonatomic, getter=isScreenSaverActive) _Bool screenSaverActive;
@property (nonatomic) float volume;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic) unsigned long long availableBytes;
@property (nonatomic) unsigned long long deviceOrientation;
@property (nonatomic) unsigned long long interfaceOrientation;
@property (copy, nonatomic) NSArray *displays;
@property (nonatomic, getter=isOrientationLocked) _Bool orientationLocked;
@property (nonatomic) float displayBackingScaleFactor;
@property (nonatomic) float displayWidth;
@property (nonatomic) float displayHeight;
@property (copy, nonatomic) NSString *primaryOpenApplication;
@property (copy, nonatomic) NSString *secondaryOpenApplication;
@property (copy, nonatomic) NSString *pipOpenApplication;
@property (copy, nonatomic) NSArray *allOpenApplications;
@property (nonatomic, getter=isAppLocked) _Bool appLocked;
@property (copy, nonatomic) NSArray *installedApplications;
@property (copy, nonatomic) NSArray *installedApplicationInfo;
@property (copy, nonatomic) NSString *stagedAdHocIdentityCertificateFingerprint;
@property (copy, nonatomic) NSArray *trustedAnchorCertificateFingerprints;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *userDisplayName;
@property (copy, nonatomic) NSString *userGivenName;
@property (copy, nonatomic) NSString *userFamilyName;
@property (copy, nonatomic) NSString *userPhoneticGivenName;
@property (copy, nonatomic) NSString *userPhoneticFamilyName;
@property (copy, nonatomic) NSString *userImageURL;
@property (nonatomic) unsigned long long loginState;
@property (nonatomic, getter=isPasscodeEnabled) _Bool passcodeEnabled;
@property (copy, nonatomic) NSString *studentImageIdentifier;
@property (copy, nonatomic) NSString *instructorImageIdentifier;
@property (nonatomic, getter=isRequestingUnenroll) _Bool requestingUnenroll;
@property (copy, nonatomic) NSString *currentLocaleIdentifier;
@property (copy, nonatomic) NSDictionary *activeAirPlayRoute;
@property (copy, nonatomic) NSArray *availableAirPlayRoutes;
@property (copy, nonatomic) NSString *managementLockPasscode;
@property (copy, nonatomic, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;
+ (id)allPropertyKeys;
+ (id)keyTranslations;
+ (id)CRKKeyForDMFKey:(id)arg1;
+ (id)applicationInfoFromBundleIdentifiers:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)isEqualToDevice:(id)arg1;
- (_Bool)isApplicationOpen:(id)arg1;
- (_Bool)isApplicationInstalled:(id)arg1;

@end
