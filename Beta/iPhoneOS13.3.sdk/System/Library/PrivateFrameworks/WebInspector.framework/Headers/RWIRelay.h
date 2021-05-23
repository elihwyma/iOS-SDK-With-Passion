/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_xpc_object, RWIRelayDelegate;

@interface RWIRelay : NSObject

{
    NSObject<OS_xpc_object> *_xpcApplicationListenConnection;
    NSMutableArray *_pendingClientConnections;
    NSMutableDictionary *_pendingProxyApplicationConnections;
    NSMutableArray *_automaticInspectionDebuggers;
    NSMutableDictionary *_automaticInspectionSessions;
    id <RWIRelayDelegate> _delegate;
    NSMutableDictionary *_applicationConnections;
    NSMutableDictionary *_clientConnections;
    NSMutableDictionary *_driverInterfaces;
}

@property (nonatomic, readonly) NSMutableDictionary *applicationConnections;
@property (nonatomic, readonly) NSMutableDictionary *clientConnections;
@property (nonatomic, readonly) NSMutableDictionary *driverInterfaces;
@property (nonatomic) id <RWIRelayDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setup;
- (void)clientConnectionDidClose:(id)arg1;
- (void)xpcConnection:(id)arg1 unhandledMessage:(id)arg2;
- (void)xpcConnectionFailed:(id)arg1;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (void)_setAutomaticInspectionGlobalState:(_Bool)arg1;
- (void)_handleApplicationListenConnectionEvent:(id)arg1;
- (void)_addPendingClientConnection:(id)arg1;
- (void)_applicationUpdated:(id)arg1;
- (void)_finalizePendingClientConnection:(id)arg1 withIdentifier:(id)arg2;
- (id)_allApplicationDetails;
- (void)_driverConnected:(id)arg1;
- (void)_driverUpdated:(id)arg1;
- (void)_driverDisconnected:(id)arg1;
- (id)_allDriverDetails;
- (void)_disconnectApplicationConnect:(id)arg1;
- (void)_applicationConnected:(id)arg1;
- (void)_proxyApplicationConnected:(id)arg1;
- (void)_applicationDisconnected:(id)arg1;
- (void)_receivedDataMessage:(id)arg1 connection:(id)arg2;
- (void)_receivedListingMessage:(id)arg1 connection:(id)arg2;
- (void)_receivedProxyApplicationSetupResponseMessage:(id)arg1 connection:(id)arg2;
- (void)_receivedAutomaticInspectionCandidate:(id)arg1 connection:(id)arg2;
- (void)_proxyApplicationResponse:(id)arg1 userInfo:(id)arg2;
- (void)_rpc_reportIdentifier:(id)arg1;
- (void)_rpc_forwardDidClose:(id)arg1;
- (void)_rpc_forwardGetListing:(id)arg1;
- (void)_rpc_forwardIndicateWebView:(id)arg1;
- (void)_rpc_forwardSocketData:(id)arg1;
- (void)_rpc_forwardSocketSetup:(id)arg1;
- (void)_rpc_getConnectedApplications:(id)arg1;
- (void)_rpc_forwardAutomaticInspectionConfiguration:(id)arg1;
- (void)_rpc_forwardAutomaticInspectionRejection:(id)arg1;
- (void)_rpc_reportDriverConnected:(id)arg1;
- (void)_rpc_reportDriverUpdated:(id)arg1;
- (void)_rpc_reportDriverDisconnected:(id)arg1;
- (void)_rpc_forwardDriverStateChangeRequest:(id)arg1;
- (void)_rpc_getConnectedDrivers:(id)arg1;
- (void)_rpc_forwardAutomationSessionRequest:(id)arg1;
- (void)_rpc_requestApplicationLaunch:(id)arg1;
- (void)shutdownIfDisabled;
- (void)addPendingClientConnection:(id)arg1;
- (void)updateApplication:(id)arg1;
- (void)_rpc_debuggerWillSleep:(id)arg1;
- (void)_rpc_debuggerDidWake:(id)arg1;

@end
