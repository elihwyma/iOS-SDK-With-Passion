/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MCUIAppSigner : NSObject

{
    _Bool _appsRequireTrust;
    _Bool _appsRequireVerification;
    _Bool _hasFreeDeveloperProvisioningProfile;
    _Bool _hasUniversalProvisioningProfile;
    _Bool _appsRequireVerificationSoon;
    NSString *_displayName;
    NSString *_identity;
    NSArray *_applications;
    NSArray *_profiles;
    long long _numberOfAppsRequiringVerification;
    long long _numberOfAppsRequiringVerificationSoon;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *identity;
@property (retain, nonatomic) NSArray *applications;
@property (retain, nonatomic) NSArray *profiles;
@property (nonatomic) _Bool hasFreeDeveloperProvisioningProfile;
@property (nonatomic) _Bool hasUniversalProvisioningProfile;
@property (nonatomic) _Bool appsRequireTrust;
@property (nonatomic) _Bool appsRequireVerification;
@property (nonatomic) _Bool appsRequireVerificationSoon;
@property (nonatomic) long long numberOfAppsRequiringVerification;
@property (nonatomic) long long numberOfAppsRequiringVerificationSoon;

+ (id)enterpriseAppSignersWithOutDeveloperAppSigners:(id *)arg1;
+ (id)_uppProfilesBySignerIDWithOutFreeDevProfilesBySignerID:(id *)arg1;
+ (void)_addProfile:(id)arg1 toSignerIdentity:(id)arg2 inDictionary:(id)arg3;

- (void)addApplication:(id)arg1;
- (void)removeApplication:(id)arg1;
- (_Bool)isTrusted;
- (id)_displayNameFromIdentity:(id)arg1 hasFreeDev:(_Bool)arg2 hasUPP:(_Bool)arg3;
- (_Bool)_isTrustRequiredForBundleIDs:(id)arg1 outNotVerifiedAppCount:(long long *)arg2 outExpiringSoonAppCount:(long long *)arg3;
- (void)refreshApplications;
- (id)initWithIdentity:(id)arg1 applications:(id)arg2 profiles:(id)arg3 hasUPP:(_Bool)arg4 hasFreeDeveloper:(_Bool)arg5;
- (void)removeApplications:(id)arg1;

@end
