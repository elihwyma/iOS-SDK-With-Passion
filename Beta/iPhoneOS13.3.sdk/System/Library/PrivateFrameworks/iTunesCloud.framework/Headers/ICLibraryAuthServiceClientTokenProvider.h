/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class AFMultiUserConnection, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSXPCConnection, NSXPCListener;

@protocol OS_dispatch_queue;

@interface ICLibraryAuthServiceClientTokenProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_tokenCache;
    _Bool _isService;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_xpcConnections;
    NSXPCConnection *_xpcClientConnection;
    NSMutableSet *_dsidsToExcludeFromAutoRefresh;
    AFMultiUserConnection *_siriConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedProvider;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_removeConnection:(id)arg1;
- (id)_clientConnection;
- (void)startService;
- (void)getTokenResultForDSID:(id)arg1 forceRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_addConnection:(id)arg1;
- (void)_loadCache;
- (void)_handleLibraryAuthServiceClientTokenDidChangeDistributedNotification:(id)arg1;
- (void)getTokenForDSID:(id)arg1 forceRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getTokenResultsForDSIDs:(id)arg1 forceRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_refreshTokenForDSID:(id)arg1 forExternalRequest:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_refreshTokensForDSIDs:(id)arg1 forExternalRequest:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getTokenForcingRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addTokenResult:(id)arg1 forDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_commitCache;
- (void)_updateRefreshTimer;
- (void)stopService;
- (void)getAllTokensForAssistantForcingRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedTokenAndResetCache:(_Bool)arg1;

@end
