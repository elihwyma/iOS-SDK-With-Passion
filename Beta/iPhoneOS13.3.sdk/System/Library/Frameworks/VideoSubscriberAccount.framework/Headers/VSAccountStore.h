/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSOperationQueue, NSString, NSUndoManager, VSAccount, VSKeychainEditingContext, VSRemoteNotifier;

@interface VSAccountStore : NSObject

{
    _Bool _needsUpdateCachedFirstAccount;
    VSAccount *_cachedFirstAccount;
    VSKeychainEditingContext *_keychainEditingContext;
    NSOperationQueue *_keychainQueue;
    id _changeObserver;
    VSRemoteNotifier *_remoteNotifier;
}

@property (retain) VSAccount *cachedFirstAccount;
@property _Bool needsUpdateCachedFirstAccount;
@property (retain, nonatomic) VSKeychainEditingContext *keychainEditingContext;
@property (retain, nonatomic) NSOperationQueue *keychainQueue;
@property (weak, nonatomic) id changeObserver;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (copy, nonatomic, readonly) NSArray *accounts;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)accountClass;

- (id)init;
- (void)dealloc;
- (id)firstAccount;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (_Bool)isFirstAccountLoaded;
- (_Bool)_updateCachedFirstAccount;
- (void)_sendLocalNotification;
- (id)_keychainItemsWithLimit:(unsigned long long)arg1;
- (id)_accountForKeychainItem:(id)arg1;
- (void)fetchAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_insertAccount:(id)arg1 inContext:(id)arg2;
- (void)_sendRemoteNotification;
- (id)firstAccountIfLoaded;
- (void)saveAccounts:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccounts:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
