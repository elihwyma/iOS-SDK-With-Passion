/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOActiveTileGroup, GEOResourceManifestConfiguration, NSString;

@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue, OS_xpc_object;

@interface GEOResourceManifestServerRemoteProxy : NSObject

{
    id <GEOResourceManifestServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_xpc_object> *_conn;
    _Bool _sentConfigurationMessage;
    _Bool _hasOpenConnection;
    _Bool _isUpdatingManifest;
    _Bool _isLoadingResources;
    NSObject<OS_dispatch_queue> *_serverQueue;
    GEOResourceManifestConfiguration *_configuration;
    struct os_unfair_lock_s _authTokenLock;
    NSString *_authToken;
    int _activeTileGroupChangedNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <GEOResourceManifestServerProxyDelegate> delegate;
@property (nonatomic, readonly) GEOActiveTileGroup *activeTileGroup;

- (void)dealloc;
- (id)_xpcConnection;
- (id)configuration;
- (id)authToken;
- (id)updateProgress;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (void)openConnection;
- (void)closeConnection;
- (unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
- (id)serverQueue;
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (void)forceUpdate:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelCurrentManifestUpdate;
- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)resetActiveTileGroup;
- (void)performOpportunisticResourceLoading;
- (void)_handleMessage:(id)arg1 xpcMessage:(id)arg2;

@end
