/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICUserIdentityStore, NSMutableArray, NSString, NSXPCListener, NSXPCListenerEndpoint;

@protocol OS_dispatch_queue;

@interface ICDelegateAccountStoreServiceListener : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _ignoresEntitlements;
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    ICUserIdentityStore *_testingIdentityStore;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *XPCEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)machServiceListener;
+ (id)testingListenerWithIdentityStore:(id)arg1;

- (void)invalidate;
- (void)resume;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)suspend;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_identityStore;
- (void)recreateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_initWithXPCListener:(id)arg1;
- (void)_userIdentityStoreDelegateAccountStoreDidChangeNotification:(id)arg1;

@end
