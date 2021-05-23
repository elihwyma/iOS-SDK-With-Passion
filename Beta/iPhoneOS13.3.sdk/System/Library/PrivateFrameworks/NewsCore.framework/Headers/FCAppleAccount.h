/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class ACAccount, ACAccountStore, NSArray, NSString;

@interface FCAppleAccount : NSObject

{
    _Bool _runningPPT;
    ACAccountStore *_accountStore;
    ACAccount *_primaryAccount;
    ACAccount *_iTunesAccount;
    NSString *_DSID;
    NSString *_userStoreFrontID;
    NSString *_contentStoreFrontID;
    NSString *_overrideContentStoreFrontID;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (retain) ACAccount *primaryAccount;
@property (retain) ACAccount *iTunesAccount;
@property (copy, nonatomic) NSString *DSID;
@property (copy, nonatomic) NSString *userStoreFrontID;
@property (copy, nonatomic) NSString *contentStoreFrontID;
@property (nonatomic, readonly) NSArray *supportedLanguageCodes;
@property (copy, nonatomic) NSString *overrideContentStoreFrontID;
@property (getter=isRunningPPT) _Bool runningPPT;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *primaryLanguageCode;
@property (nonatomic, readonly) _Bool isContentStoreFrontSupported;
@property (nonatomic, readonly) NSString *supportedContentStoreFrontID;
@property (nonatomic, readonly, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
@property (nonatomic, readonly, getter=isUserSignedInToiCloud) _Bool userSignedInToiCloud;
@property (nonatomic, readonly) NSString *endpointConnectionClientID;
@property (nonatomic, readonly) ACAccount *activeiTunesAccount;

+ (id)sharedAccount;
+ (void)enableStoreFrontLocking;

- (id)init;
- (void)loadStoreFrontWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)currentStoreFrontID;
- (id)iTunesAccountDSID;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(CDStruct_912cb5d2)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isUserSignedIntoiTunes;
- (void)_reloadAccountsFromAccountStore;
- (void)_setStoreFrontDependentPropertiesWithStoreFrontLockingEnabled:(_Bool)arg1;
- (void)_accountStoreDidChange;
- (void)checkAllDevicesRunningMinimumiOSVersion:(CDStruct_912cb5d2)arg1 macOSVersion:(CDStruct_912cb5d2)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)iCloudAccountDSID;
- (id)iTunesAccountName;
- (_Bool)isPrimaryAccountEmailAddress;
- (void)reloadiTunesAccount;
- (void)t_startOverridingContentStoreFrontID:(id)arg1;
- (void)t_stopOverridingContentStoreFrontID;

@end
