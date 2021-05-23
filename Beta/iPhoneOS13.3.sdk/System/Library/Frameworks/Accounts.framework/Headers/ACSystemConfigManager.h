/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACSystemConfigManager : NSObject

{
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_preferencesQueue;
    struct __SCPreferences *_preferencesSession;
    int _applySkipCount;
}

+ (id)sharedInstance;
+ (unsigned long long)_timeoutInterval;
+ (id)_livingInstance;

- (id)init;
- (void)dealloc;
- (void)_keepAlive;
- (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
- (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
- (void)_createSCPreferencesSession;
- (void)_destroySCPreferencesSession;
- (void)_tearDown;
- (void *)_getValueForKey:(id)arg1;
- (void)_setValue:(void *)arg1 forKey:(id)arg2;
- (void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(_Bool)arg2;
- (void)setCountOfAccounts:(long long)arg1 withAccountTypeIdentifier:(id)arg2;
- (void)_handleSCPreferencesSessionNotification:(unsigned int)arg1;

@end
