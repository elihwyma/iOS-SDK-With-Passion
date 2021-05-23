/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class DMFApplicationInstallProgress, NSData, NSDictionary, NSNumber, NSString;

@interface DMFApplication : NSObject

{
    _Bool _isManaged;
    _Bool _isValidated;
    _Bool _isInstalled;
    _Bool _isPlaceholder;
    _Bool _isAppUpdate;
    _Bool _isBetaApp;
    _Bool _isRemoveable;
    _Bool _fileSharingEnabled;
    NSString *_applicationIdentifier;
    NSString *_bundleIdentifier;
    NSString *_name;
    NSData *_iconData;
    NSString *_bundleVersion;
    NSString *_shortVersionString;
    NSString *_applicationType;
    NSNumber *_adamID;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_betaExternalVersionIdentifier;
    NSNumber *_staticUsage;
    NSNumber *_dynamicUsage;
    NSNumber *_onDemandResourcesUsage;
    NSString *_unusedRedemptionCode;
    NSDictionary *_attributes;
    NSDictionary *_configuration;
    NSDictionary *_feedback;
    unsigned long long _state;
    unsigned long long _managementFlags;
    DMFApplicationInstallProgress *_progress;
}

@property (copy, nonatomic, readonly) NSString *applicationIdentifier;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSData *iconData;
@property (copy, nonatomic, readonly) NSString *bundleVersion;
@property (copy, nonatomic, readonly) NSString *shortVersionString;
@property (copy, nonatomic, readonly) NSString *applicationType;
@property (copy, nonatomic, readonly) NSNumber *adamID;
@property (copy, nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (copy, nonatomic, readonly) NSNumber *betaExternalVersionIdentifier;
@property (copy, nonatomic, readonly) NSNumber *staticUsage;
@property (copy, nonatomic, readonly) NSNumber *dynamicUsage;
@property (copy, nonatomic, readonly) NSNumber *onDemandResourcesUsage;
@property (copy, nonatomic, readonly) NSString *unusedRedemptionCode;
@property (copy, nonatomic, readonly) NSDictionary *attributes;
@property (copy, nonatomic, readonly) NSDictionary *configuration;
@property (copy, nonatomic, readonly) NSDictionary *feedback;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) unsigned long long managementFlags;
@property (nonatomic, readonly) _Bool isManaged;
@property (nonatomic, readonly) _Bool isValidated;
@property (nonatomic, readonly) _Bool isInstalled;
@property (nonatomic, readonly) _Bool isPlaceholder;
@property (nonatomic, readonly) _Bool isAppUpdate;
@property (nonatomic, readonly) _Bool isBetaApp;
@property (nonatomic, readonly) _Bool isRemoveable;
@property (nonatomic, readonly) _Bool fileSharingEnabled;
@property (nonatomic, readonly) DMFApplicationInstallProgress *progress;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithApplicationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 iconData:(id)arg4 bundleVersion:(id)arg5 shortVersionString:(id)arg6 applicationType:(id)arg7 adamID:(id)arg8 externalVersionIdentifier:(id)arg9 betaExternalVersionIdentifier:(id)arg10 staticUsage:(id)arg11 dynamicUsage:(id)arg12 onDemandResourcesUsage:(id)arg13 unusedRedemptionCode:(id)arg14 attributes:(id)arg15 configuration:(id)arg16 feedback:(id)arg17 state:(unsigned long long)arg18 managementFlags:(unsigned long long)arg19 isManaged:(_Bool)arg20 isValidated:(_Bool)arg21 isInstalled:(_Bool)arg22 isPlaceholder:(_Bool)arg23 isAppUpdate:(_Bool)arg24 isBetaApp:(_Bool)arg25 isRemoveable:(_Bool)arg26 fileSharingEnabled:(_Bool)arg27 progress:(id)arg28;
- (id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 iconData:(id)arg3 applicationType:(id)arg4 adamID:(id)arg5 externalVersionNumber:(id)arg6 betaExternalVersionIdentifier:(id)arg7 isInstalled:(_Bool)arg8 isPlaceholder:(_Bool)arg9 isAppUpdate:(_Bool)arg10 isBetaApp:(_Bool)arg11 isRemoveable:(_Bool)arg12 fileSharingEnabled:(_Bool)arg13 progress:(id)arg14;

@end
