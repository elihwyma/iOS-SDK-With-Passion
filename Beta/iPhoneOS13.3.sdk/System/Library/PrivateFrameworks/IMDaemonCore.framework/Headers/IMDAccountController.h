/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface IMDAccountController : NSObject

{
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_activeAccounts;
    NSSet *_operationalAccountsCache;
    _Bool _isLoading;
    _Bool _isFirstLoad;
    _Bool _networkDataAvailable;
}

@property (nonatomic, readonly) NSDictionary *loadOldStatusStore;
@property (nonatomic, readonly) _Bool isLoading;
@property (nonatomic, readonly) NSArray *accounts;
@property (nonatomic, readonly) NSArray *activeAccounts;
@property (nonatomic, readonly) NSArray *connectedAccounts;
@property (nonatomic, readonly) NSArray *connectingAccounts;
@property (nonatomic, readonly) NSArray *activeSessions;
@property (nonatomic) _Bool networkDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedAccountController;

- (id)init;
- (void)dealloc;
- (void)load;
- (void)save;
- (void)addAccount:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)account:(id)arg1 isActiveChanged:(_Bool)arg2;
- (id)accountsForService:(id)arg1;
- (_Bool)activeAccountsAreEligibleForSpamFilter;
- (id)_nicknameController;
- (id)activeAccountsForService:(id)arg1;
- (id)connectedAccountsForService:(id)arg1;
- (void)activateAccounts:(id)arg1;
- (void)deactivateAccounts:(id)arg1;
- (void)deactivateAccount:(id)arg1;
- (void)activateAccount:(id)arg1;
- (id)_operationalAccounts;
- (_Bool)isAccountActive:(id)arg1;
- (void)_daemonWillShutdown:(id)arg1;
- (id)accountForAccountID:(id)arg1;
- (void)_checkPowerAssertion;
- (void)_rebuildOperationalAccountsCache;
- (void)deactivateAccounts:(id)arg1 force:(_Bool)arg2;
- (_Bool)_isAccountActive:(id)arg1 forService:(id)arg2;
- (void)deactivateAccount:(id)arg1 force:(_Bool)arg2;
- (_Bool)_isOperationalForAccount:(id)arg1;
- (void)deferredSave;
- (void)setupAccount:(id)arg1;
- (id)accountsForLoginID:(id)arg1 onService:(id)arg2;
- (id)connectingAccountsForService:(id)arg1;
- (id)accountForIDSAccountUniqueID:(id)arg1;
- (id)sessionForAccount:(id)arg1;
- (id)anySessionForServiceName:(id)arg1;
- (_Bool)hasActivePhoneAccount;
- (id)_superFormatFromAIML:(id)arg1;

@end
