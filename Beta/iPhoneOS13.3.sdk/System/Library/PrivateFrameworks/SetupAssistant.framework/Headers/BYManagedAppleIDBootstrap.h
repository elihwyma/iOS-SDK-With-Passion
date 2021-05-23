/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class AKAppleIDAuthenticationContext, NSString, UMUserSwitchContext;

@interface BYManagedAppleIDBootstrap : NSObject

{
    AKAppleIDAuthenticationContext *_authContext;
    UMUserSwitchContext *_userSwitchContext;
    _Bool _shouldRetrySilentLoginUpgrade;
    long long _silentLoginUpgradeRetryCount;
}

@property (nonatomic, readonly) UMUserSwitchContext *userSwitchContext;
@property (nonatomic) _Bool shouldRetrySilentLoginUpgrade;
@property (nonatomic) long long silentLoginUpgradeRetryCount;
@property (copy, nonatomic, readonly) NSString *shortLivedToken;
@property (nonatomic, readonly) _Bool passwordChangeFlowNeedsToRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (_Bool)isMultiUser;
+ (_Bool)isFirstTimeLogin;
+ (id)delegateBundleIDsForManagedAccount;
+ (_Bool)isSettingUpMultiUser;
+ (_Bool)isManagedAppleIDSignedIn;

- (id)init;
- (void)dealloc;
- (_Bool)isLoginUser;
- (void)postUserSwitchContextHasBeenUsed;
- (void)recoverEMCSWithCompletion:(CDUnknownBlockType)arg1;
- (void)_runSilentLoginUpgradeWithCompletion:(CDUnknownBlockType)arg1 shortLivedTokenUpgradeCompletion:(CDUnknownBlockType)arg2;
- (void)_upgradeShortLivedTokenCompletion:(CDUnknownBlockType)arg1;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(CDUnknownBlockType)arg1 shortLivedTokenUpgradeCompletion:(CDUnknownBlockType)arg2 willNotCompleteBlock:(CDUnknownBlockType)arg3;
- (_Bool)needsToUpgradeShortLivedToken;
- (id)_fetchAKURLBagSynchronously;
- (void)switchToLoginWindowDueToError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createAppleAccountWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_languageConfigurationDictionary;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (void)userSwitchContextHasBeenUsed;
- (void)ingestManagedBuddyData;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(CDUnknownBlockType)arg1 shortLivedTokenUpgradeCompletion:(CDUnknownBlockType)arg2;
- (void)writeAccountConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;

@end
