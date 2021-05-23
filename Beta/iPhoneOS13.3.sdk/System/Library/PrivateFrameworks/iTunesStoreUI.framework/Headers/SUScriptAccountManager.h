/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLock, NSMutableArray;

@interface SUScriptAccountManager : NSObject

{
    NSMutableArray *_accounts;
    NSLock *_lock;
}

@property (retain, readonly) NSArray *accounts;

+ (void)endAccountManagerSessionForObject:(id)arg1;
+ (id)beginAccountManagerSessionForObject:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)accountForDSID:(id)arg1;
- (void)_accountsChangedNotification:(id)arg1;
- (void)_dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)_ntsReloadAccounts;

@end
