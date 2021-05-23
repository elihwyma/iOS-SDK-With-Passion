/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class DMFAppManagementInformation, NSArray, NSDictionary, NSNumber, NSString;

@interface DMFApp : NSObject

{
    _Bool _isPlaceholder;
    _Bool _isRestricted;
    _Bool _isBlocked;
    _Bool _isUserBasedVPP;
    _Bool _isDeviceBasedVPP;
    _Bool _isLicenseExpired;
    _Bool _isLicenseRevoked;
    _Bool _isUPP;
    _Bool _isValidated;
    _Bool _isAppStoreVendable;
    _Bool _isBetaApp;
    _Bool _isAdHocCodeSigned;
    _Bool _hasUpdateAvailable;
    unsigned long long _type;
    NSString *_displayName;
    NSString *_bundleIdentifier;
    NSNumber *_storeItemIdentifier;
    NSNumber *_externalVersionIdentifier;
    NSString *_version;
    NSString *_shortVersion;
    NSNumber *_staticUsage;
    NSNumber *_dynamicUsage;
    NSNumber *_onDemandResourcesUsage;
    NSNumber *_sharedUsage;
    unsigned long long _installationState;
    NSString *_VPNUUIDString;
    NSArray *_associatedDomains;
    NSDictionary *_configuration;
    NSDictionary *_feedback;
    DMFAppManagementInformation *_managementInformation;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *shortVersion;
@property (copy, nonatomic) NSNumber *staticUsage;
@property (copy, nonatomic) NSNumber *dynamicUsage;
@property (copy, nonatomic) NSNumber *onDemandResourcesUsage;
@property (copy, nonatomic) NSNumber *sharedUsage;
@property (nonatomic) unsigned long long installationState;
@property (nonatomic) _Bool isPlaceholder;
@property (nonatomic) _Bool isRestricted;
@property (nonatomic) _Bool isBlocked;
@property (nonatomic) _Bool isUserBasedVPP;
@property (nonatomic) _Bool isDeviceBasedVPP;
@property (nonatomic) _Bool isLicenseExpired;
@property (nonatomic) _Bool isLicenseRevoked;
@property (nonatomic) _Bool isUPP;
@property (nonatomic) _Bool isValidated;
@property (nonatomic) _Bool isAppStoreVendable;
@property (nonatomic) _Bool isBetaApp;
@property (nonatomic) _Bool isAdHocCodeSigned;
@property (nonatomic) _Bool hasUpdateAvailable;
@property (copy, nonatomic) NSString *VPNUUIDString;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSDictionary *configuration;
@property (copy, nonatomic) NSDictionary *feedback;
@property (copy, nonatomic) DMFAppManagementInformation *managementInformation;

+ (_Bool)supportsSecureCoding;
+ (id)stringForInstallationState:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_stringForType:(unsigned long long)arg1;

@end
