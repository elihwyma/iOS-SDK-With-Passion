/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMAccount, NSArray, NSMutableDictionary;

@interface IMAccountController : NSObject

{
    NSMutableDictionary *_accountMap;
    _Bool _isReadOnly;
    _Bool _cachesEnabled;
    NSArray *_operationalAccountsCache;
    NSMutableDictionary *_serviceToActiveAccountsMap;
    NSMutableDictionary *_serviceToAccountsMap;
    NSMutableDictionary *_serviceToConnectedAccountsMap;
    NSMutableDictionary *_serviceToOperationalAccountsMap;
    _Bool _networkDataAvailable;
    NSArray *_accounts;
}

@property (copy) NSArray *accounts;
@property (nonatomic, readonly) id bestAccountForStatus;
@property (nonatomic, readonly) int numberOfAccounts;
@property (nonatomic, readonly) IMAccount *activeIMessageAccount;
@property (nonatomic, readonly) IMAccount *activeSMSAccount;
@property (nonatomic, readonly) NSArray *activeAccounts;
@property (nonatomic, readonly) NSArray *connectedAccounts;
@property (nonatomic, readonly) NSArray *operationalAccounts;
@property (nonatomic) _Bool networkDataAvailable;

+ (id)sharedInstance;
+ (id)bestAccountFromAccounts:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)readOnly;
- (void)setReadOnly:(_Bool)arg1;
- (_Bool)addAccount:(id)arg1;
- (_Bool)deleteAccount:(id)arg1;
- (id)accountsForService:(id)arg1;
- (void)deferredSetup;
- (long long)activeAccountsAreEligibleForSpamFilter;
- (id)bestAccountForService:(id)arg1;
- (id)bestActiveAccountForService:(id)arg1;
- (id)iMessageAccountForLastAddressedHandle:(id)arg1 simID:(id)arg2;
- (id)accountForUniqueID:(id)arg1;
- (id)_bestAccountForAddresses:(id)arg1;
- (id)_bestOperationalAccountForSendingForService:(id)arg1;
- (id)activeAccountsForService:(id)arg1;
- (id)connectedAccountsForService:(id)arg1;
- (id)accountsWithCapability:(unsigned long long)arg1;
- (id)connectedAccountsWithCapability:(unsigned long long)arg1;
- (id)operationalAccountsWithCapability:(unsigned long long)arg1;
- (void)autoLogin;
- (_Bool)activateAccount:(id)arg1 locally:(_Bool)arg2;
- (_Bool)_deactivateAccount:(id)arg1;
- (_Bool)addAccount:(id)arg1 locally:(_Bool)arg2;
- (_Bool)deleteAccount:(id)arg1 locally:(_Bool)arg2;
- (_Bool)deactivateAccount:(id)arg1 withDisable:(_Bool)arg2;
- (_Bool)activateAccounts:(id)arg1;
- (_Bool)deactivateAccounts:(id)arg1;
- (void)_activeAccountChanged:(id)arg1;
- (void)_accountRegistrationStatusChanged:(id)arg1;
- (_Bool)_shouldPerformDeferredSetup;
- (void)_requestNetworkDataAvailability;
- (_Bool)accountActive:(id)arg1;
- (void)_rebuildOperationalAccountsCache:(_Bool)arg1;
- (_Bool)deactivateAccount:(id)arg1;
- (_Bool)deactivateAccounts:(id)arg1 withDisable:(_Bool)arg2;
- (_Bool)_deactivateAccounts:(id)arg1;
- (_Bool)canActivateAccounts:(id)arg1;
- (_Bool)activateAccounts:(id)arg1 force:(_Bool)arg2 locally:(_Bool)arg3;
- (_Bool)activateAccount:(id)arg1 force:(_Bool)arg2 locally:(_Bool)arg3;
- (_Bool)activateAndHandleReconnectAccounts:(id)arg1;
- (_Bool)canActivateAccount:(id)arg1;
- (id)operationalAccountsForService:(id)arg1;
- (id)accountAtIndex:(int)arg1;
- (_Bool)canDeleteAccount:(id)arg1;
- (_Bool)addAccount:(id)arg1 atIndex:(int)arg2;
- (_Bool)addAccount:(id)arg1 atIndex:(int)arg2 locally:(_Bool)arg3;
- (_Bool)activateAccount:(id)arg1;
- (_Bool)activateAccount:(id)arg1 force:(_Bool)arg2;
- (_Bool)activateAndHandleReconnectAccount:(id)arg1;
- (_Bool)accountConnecting:(id)arg1;
- (_Bool)accountConnected:(id)arg1;
- (id)bestAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3;
- (id)bestAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestOperationalAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestActiveAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestConnectedAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)bestOperationalAccountForService:(id)arg1;
- (id)bestConnectedAccountForService:(id)arg1;
- (id)bestAccountWithCapability:(unsigned long long)arg1;
- (id)mostLoggedInAccount;
- (id)aimAccount;
- (id)jabberAccount;
- (void)_enableCache;
- (void)_disableCache;
- (id)__iCloudSystemAccountForService:(id)arg1;

@end
