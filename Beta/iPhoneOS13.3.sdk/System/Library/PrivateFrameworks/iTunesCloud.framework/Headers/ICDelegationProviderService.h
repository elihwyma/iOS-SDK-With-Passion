/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICRequestContext, ICUserIdentityStore, NSMapTable, NSMutableDictionary, NSMutableSet, NSNetServiceBrowser, NSOperationQueue, NSString, NSXPCConnection, NSXPCListener;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICDelegationProviderService : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_activeServiceSessions;
    NSMutableSet *_connections;
    NSMapTable *_connectionToAssertions;
    NSMutableSet *_assertions;
    NSObject<OS_dispatch_source> *_assertionTimeoutSource;
    NSMutableSet *_discoveredServices;
    ICUserIdentityStore *_identityStore;
    _Bool _isNetServiceBrowserSearching;
    _Bool _isSystemService;
    NSXPCListener *_listener;
    NSNetServiceBrowser *_netServiceBrowser;
    NSObject<OS_dispatch_queue> *_netServiceBrowserQueue;
    NSOperationQueue *_identityStoreOperationQueue;
    NSMutableDictionary *_supportedDelegationAccountUUIDToUserIdentity;
    NSXPCConnection *_xpcConnection;
    ICRequestContext *_requestContext;
}

@property (copy, nonatomic, readonly) ICRequestContext *requestContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedService;
+ (id)systemServiceWithRequestContext:(id)arg1;

- (void)dealloc;
- (id)_init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_xpcConnection;
- (void)addAssertion:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)removeAssertion:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (void)_userIdentityStoreDidChangeNotification:(id)arg1;
- (void)_updateSupportedDelegationAccountUUIDs;
- (void)_unregisterNotificationsForDelegationNetService:(id)arg1;
- (void)_updateBrowsingStatus;
- (void)delegationProviderServiceAddAssertion:(id)arg1;
- (void)_updateAssertionTimeouts;
- (void)delegationProviderServiceRemoveAssertion:(id)arg1;
- (void)_registerNotificationsForDelegationNetService:(id)arg1;
- (void)_updateDelegationForDiscoveredServices;
- (void)_netServiceDelegationAccountUUIDsDidChangeNotification:(id)arg1;
- (void)delegationProviderServiceSession:(id)arg1 didFinishWithError:(id)arg2;
- (void)startSystemXPCService;

@end
