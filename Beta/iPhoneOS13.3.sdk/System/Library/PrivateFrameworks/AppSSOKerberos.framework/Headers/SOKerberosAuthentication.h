/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@class LAContext, NSString, SORealmSettingManager;

@interface SOKerberosAuthentication : NSObject

{
    _Bool _siteDiscoveryInProgress;
    NSString *_realm;
    SORealmSettingManager *_settingsManager;
    LAContext *_myLAContext;
}

@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) SORealmSettingManager *settingsManager;
@property _Bool siteDiscoveryInProgress;
@property (retain, nonatomic) LAContext *myLAContext;

- (id)retrieveCachedSiteCodeFromCacheForBundleIdentifier:(id)arg1 networkFingerprint:(id)arg2;
- (void)determineSiteCodeUsingDispatchGroup:(id)arg1 andBundleIdentifier:(id)arg2 networkFingerprint:(id)arg3;
- (unsigned long long)findExistingCredentialUsingContext:(id)arg1 returningCredential:(struct gss_cred_id_t_desc_struct **)arg2 orError:(id *)arg3;
- (void)setSiteCodeUsingContext:(id)arg1;
- (unsigned long long)createNewCredentialUsingContext:(id)arg1 returningCredential:(struct gss_cred_id_t_desc_struct **)arg2 orError:(id *)arg3;
- (unsigned long long)mapErrorToKnownError:(id)arg1;
- (id)initWithRealm:(id)arg1 andSettingsManager:(id)arg2;
- (unsigned long long)attemptKerberosWithContext:(id)arg1 returningToken:(id *)arg2 orError:(id *)arg3;

@end
