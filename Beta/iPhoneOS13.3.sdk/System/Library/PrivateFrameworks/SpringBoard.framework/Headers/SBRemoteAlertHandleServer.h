/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMapTable, NSMutableArray, NSString, SBRemoteTransientOverlaySessionManager;

@protocol OS_dispatch_queue;

@interface SBRemoteAlertHandleServer : NSObject

{
    NSMutableArray *_activeConnections;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    FBServiceClientAuthenticator *_legacyClientAuthenticator;
    NSObject<OS_dispatch_queue> *_queue;
    SBRemoteTransientOverlaySessionManager *_sessionManager;
    NSMapTable *_sessionToConnections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)activate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)remoteAlertHandleContextsForDefinition:(id)arg1 allowsCreationValue:(id)arg2 configurationContext:(id)arg3;
- (id)createRemoteAlertHandleContextWithDefinition:(id)arg1 configurationContext:(id)arg2;
- (oneway void)activateRemoteAlertHandleWithID:(id)arg1 activationContext:(id)arg2;
- (oneway void)invalidateRemoteAlertHandleWithID:(id)arg1;
- (id)initWithSessionManager:(id)arg1;
- (void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3;
- (void)remoteTransientOverlaySessionDidActivate:(id)arg1;
- (void)remoteTransientOverlaySessionDidDeactivate:(id)arg1;
- (void)_handleDisconnectForServiceConnection:(id)arg1;
- (_Bool)_shouldAllowAuditToken:(id)arg1 forDefinition:(id)arg2;
- (void)_addConnection:(id)arg1 forSession:(id)arg2;
- (void)_removeConnection:(id)arg1 forSession:(id)arg2;

@end
