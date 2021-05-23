/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICDelegateAccountStoreOptions, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ICDelegateAccountStoreXPCWriter : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICDelegateAccountStoreOptions *_accountStoreOptions;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    CDUnknownBlockType _externalChangeHandler;
    _Bool _hasReceivedConnectionInvalidation;
}

@property (copy, nonatomic) CDUnknownBlockType externalChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)delegateAccountStoreDidChange;
- (void)recreateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAccountStoreOptions:(id)arg1;
- (id)_onceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getXPCConnectionWithCompletion:(CDUnknownBlockType)arg1;

@end
