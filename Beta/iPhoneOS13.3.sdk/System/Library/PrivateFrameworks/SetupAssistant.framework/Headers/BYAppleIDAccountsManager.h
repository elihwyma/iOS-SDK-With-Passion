/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class AALoginPluginManager, AASetupAssistantService, AAStorableLoginContext;

@interface BYAppleIDAccountsManager : NSObject

{
    AALoginPluginManager *_appleIDLoginPluginManager;
    AAStorableLoginContext *_storedLoginContext;
    AASetupAssistantService *_aaService;
}

@property (retain, nonatomic, setter=setAAService:) AASetupAssistantService *aaService;

+ (id)sharedManager;

- (id)init;
- (void)preloadDefaultLoginParametersWithBundleIDs:(id)arg1;
- (id)initForDelegateBundleIDs:(id)arg1;
- (void)enableDataClassesForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loginDelegateAccountsWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 skipiTunes:(_Bool)arg4 onlyAppleIDPlugin:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)performSilentICDPUpgrade;
- (void)runPostRestoreRenewCredentialsIfNeeded;
- (id)storedLoginContext;
- (void)clearStoredLoginContext;
- (void)repeatedlyAttemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 numberOfAttemptsAllowed:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)attemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 allowFollowUp:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end
