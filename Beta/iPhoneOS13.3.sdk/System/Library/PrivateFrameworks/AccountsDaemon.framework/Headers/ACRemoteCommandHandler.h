/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface ACRemoteCommandHandler : NSObject

{
    ACAccountStore *_accountStore;
}

- (id)init;
- (void)_saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_addAccount:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_promptUserForAccountCredential:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deleteAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_authenticateAccount:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeAllAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidateFetchedAccountsCacheWithCompletion:(CDUnknownBlockType)arg1;
- (id)_localAccountMatchingRemoteAccount:(id)arg1;
- (void)handleCommand:(id)arg1 forAccount:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
