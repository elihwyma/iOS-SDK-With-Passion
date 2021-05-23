/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDIDSConnection, DEDSharingConnection, DEDXPCConnector, DEDXPCInbound, NSMutableDictionary, NSString, NSXPCConnection;

@protocol DEDClientProtocol, DEDPairingProtocol, DEDWorkerProtocol, OS_dispatch_queue, OS_os_log;

@interface DEDController : NSObject

{
    _Bool _isDaemon;
    _Bool _started;
    _Bool _useSharing;
    _Bool _useIDS;
    _Bool _embeddedInApp;
    NSObject<OS_dispatch_queue> *_bugSessionCallbackQueue;
    DEDXPCConnector *_xpcConnector;
    DEDXPCInbound *_xpcInbound;
    NSXPCConnection *_xpcOutboundConnection;
    id <DEDClientProtocol> _clientDelegate;
    id <DEDWorkerProtocol> _workerDelegate;
    id <DEDPairingProtocol> _pairingDelegate;
    CDUnknownBlockType _devicesCompletion;
    CDUnknownBlockType _pongBlock;
    CDUnknownBlockType _sessionExistsCompletion;
    NSMutableDictionary *_sessionStartBlocks;
    NSMutableDictionary *_sessionDidStartBlocks;
    DEDIDSConnection *__idsConnection;
    DEDSharingConnection *__sharingConnection;
    double _sessionStartTimeout;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_os_log> *_log;
    CDUnknownBlockType _didCancelCompletion;
    NSMutableDictionary *_devices;
    NSMutableDictionary *_sessions;
}

@property (retain) DEDXPCConnector *xpcConnector;
@property (retain) DEDXPCInbound *xpcInbound;
@property (weak) NSXPCConnection *xpcOutboundConnection;
@property (weak) id <DEDClientProtocol> clientDelegate;
@property (weak) id <DEDWorkerProtocol> workerDelegate;
@property (weak) id <DEDPairingProtocol> pairingDelegate;
@property _Bool isDaemon;
@property _Bool started;
@property _Bool useSharing;
@property _Bool useIDS;
@property _Bool embeddedInApp;
@property (copy) CDUnknownBlockType devicesCompletion;
@property (copy) CDUnknownBlockType pongBlock;
@property (copy) CDUnknownBlockType sessionExistsCompletion;
@property (retain) NSMutableDictionary *sessionStartBlocks;
@property (retain) NSMutableDictionary *sessionDidStartBlocks;
@property (retain) DEDIDSConnection *_idsConnection;
@property (retain) DEDSharingConnection *_sharingConnection;
@property double sessionStartTimeout;
@property (retain) NSObject<OS_dispatch_queue> *replyQueue;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSObject<OS_os_log> *log;
@property (copy) CDUnknownBlockType didCancelCompletion;
@property (retain) NSMutableDictionary *devices;
@property (retain) NSMutableDictionary *sessions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bugSessionCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)archivedClasses;

- (id)init;
- (void)start;
- (void)reset;
- (void)ping;
- (id)persistence;
- (id)sessionForIdentifier:(id)arg1;
- (void)stopDiscovery;
- (void)pong;
- (void)addDevice:(id)arg1;
- (id)idsConnection;
- (id)sharingConnection;
- (id)purgeStaleSessions:(id)arg1;
- (id)remoteXPCObject;
- (void)discoverAllAvailableDevices;
- (void)stopDeviceDiscovery;
- (id)_allKnownDevicesWithIdentifier:(id)arg1;
- (id)_sharingDeviceForIncomingDevice:(id)arg1;
- (void)startPairSetupForDevice:(id)arg1;
- (void)promptPINForDevice:(id)arg1;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)successPINForDevice:(id)arg1;
- (id)_deviceForIncomingDevice:(id)arg1 needsReady:(_Bool)arg2;
- (id)_deviceForIncomingDevice:(id)arg1;
- (void)addSessionStartCompletion:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)abortSession:(id)arg1;
- (void)abortSession:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)hasActiveSession:(id)arg1;
- (void)gotDeviceUpdate:(id)arg1;
- (void)discoverDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (id)allKnownDevices;
- (void)didDiscoverDevices:(id)arg1;
- (_Bool)induceTimeOutIfNeededAndReturnCanProceedWithDevice:(id)arg1 sessionId:(id)arg2;
- (_Bool)hasCompletionBlockWithIdentifier:(id)arg1;
- (CDUnknownBlockType)popSessionStartCompletionWithIdentifier:(id)arg1;
- (void)didStartBugSessionWithInfo:(id)arg1;
- (void)addDidStartSessionCompletion:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (CDUnknownBlockType)popDidStartSessionCompletionWithIdentifier:(id)arg1;
- (void)sessionWithIdentifier:(id)arg1 isActive:(_Bool)arg2;
- (void)connector:(id)arg1 didLooseConnectionToProcessWithPid:(int)arg2;
- (void)configureForDaemon;
- (void)configureForEmbedded:(_Bool)arg1;
- (void)configureClientDelegate:(id)arg1;
- (void)configureWorkerDelegate:(id)arg1;
- (void)configurePairingDelegate:(id)arg1;
- (void)configureForSharing:(_Bool)arg1;
- (void)configureForIDS:(_Bool)arg1;
- (void)pingDaemonWithCompletion:(CDUnknownBlockType)arg1;
- (id)devicesWithIdentifier:(id)arg1;
- (_Bool)hasDevice:(id)arg1;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 target:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)knownSessions;
- (void)_didAbortSessionWithID:(id)arg1;
- (void)hasActiveSessionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_timeOutSessionStartBlockWithIdentifier:(id)arg1 timeout:(double)arg2;

@end
