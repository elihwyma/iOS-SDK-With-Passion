/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface W5Client : NSObject

{
    NSXPCConnection *_conn;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isBrowsing;
    _Bool _isAdvertising;
    double _lastRecoveryTimestamp;
    NSMutableArray *_mutableEventIDs;
    NSMutableArray *_mutableUUIDs;
    NSMutableDictionary *_mutableEventCallbackMap;
    CDUnknownBlockType _eventCallback;
}

@property (copy, nonatomic) CDUnknownBlockType eventCallback;

+ (id)sharedClient;

- (id)init;
- (void)dealloc;
- (void)cancelAllRequests;
- (id)peers;
- (void)stopAdvertising;
- (void)stopBrowsing;
- (void)startBrowsing;
- (void)startAdvertising;
- (id)localPeer;
- (void)queryStatusForPeer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)queryDebugConfigurationForPeer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setDebugConfiguration:(id)arg1 peer:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)receivedEvent:(id)arg1;
- (void)__startBrowsingAndReply:(CDUnknownBlockType)arg1;
- (void)__startMonitoringEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)__stopBrowsingAndReply:(CDUnknownBlockType)arg1;
- (void)__startAdvertisingAndReply:(CDUnknownBlockType)arg1;
- (void)__stopAdvertisingAndReply:(CDUnknownBlockType)arg1;
- (void)__stopMonitoringEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)__queryPeerCacheAndReply:(CDUnknownBlockType)arg1;
- (void)__queryLocalPeerAndReply:(CDUnknownBlockType)arg1;
- (id)runDiagnostics:(id)arg1 configuration:(id)arg2 update:(CDUnknownBlockType)arg3 reply:(CDUnknownBlockType)arg4;
- (_Bool)__tarballWithSource:(id)arg1 destination:(id)arg2 error:(id *)arg3;
- (id)__mostRecentInDirectories:(id)arg1 include:(id)arg2 exclude:(id)arg3 maxAge:(double)arg4;
- (void)__purgeFilesInDirectory:(id)arg1 matching:(id)arg2 maxAge:(unsigned long long)arg3 maxCount:(unsigned long long)arg4;
- (id)runDiagnosticsTests:(id)arg1 peer:(id)arg2 update:(CDUnknownBlockType)arg3 reply:(CDUnknownBlockType)arg4;
- (id)__collectJetsamFallbackLogsWithReason:(id)arg1 compress:(_Bool)arg2;
- (void)__logsCollectedWithTemporaryURL:(id)arg1 outputURL:(id)arg2 keepParent:(_Bool)arg3 compress:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
- (id)__collectBusyFallbackLogsWithReason:(id)arg1 compress:(_Bool)arg2;
- (id)collectLogs:(id)arg1 configuration:(id)arg2 update:(CDUnknownBlockType)arg3 reply:(CDUnknownBlockType)arg4;
- (id)collectLogs:(id)arg1 compress:(_Bool)arg2 peer:(id)arg3 update:(CDUnknownBlockType)arg4 diagnostics:(CDUnknownBlockType)arg5 reply:(CDUnknownBlockType)arg6;
- (id)collectLogItems:(id)arg1 outputURL:(id)arg2 compress:(_Bool)arg3 peer:(id)arg4 update:(CDUnknownBlockType)arg5 diagnostics:(CDUnknownBlockType)arg6 reply:(CDUnknownBlockType)arg7;
- (id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)runPerformanceTestWithConfiguration:(id)arg1 update:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (id)runPerformanceTest:(id)arg1 update:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (id)runWiFiPerformanceLoggingWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)__cancelRequestWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)__cancelAllRequestsAndReply:(CDUnknownBlockType)arg1;
- (void)__log:(id)arg1 timestamp:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startMonitoringEvents:(id)arg1;
- (void)stopMonitoringEvents:(id)arg1;
- (id)queryStatusForPeer:(id)arg1 error:(out id *)arg2;
- (id)queryDebugConfigurationForPeer:(id)arg1 error:(out id *)arg2;
- (_Bool)setDebugConfiguration:(id)arg1 peer:(id)arg2 error:(out id *)arg3;
- (id)runDiagnostics:(id)arg1 configuration:(id)arg2 update:(CDUnknownBlockType)arg3 error:(out id *)arg4;
- (id)runDiagnosticsTests:(id)arg1 peer:(id)arg2 update:(CDUnknownBlockType)arg3 error:(out id *)arg4;
- (id)collectLogs:(id)arg1 configuration:(id)arg2 update:(CDUnknownBlockType)arg3 receipts:(out id *)arg4 error:(out id *)arg5;
- (id)collectLogs:(id)arg1 compress:(_Bool)arg2 peer:(id)arg3 update:(CDUnknownBlockType)arg4 diagnostics:(CDUnknownBlockType)arg5 error:(out id *)arg6;
- (id)collectLogItems:(id)arg1 outputURL:(id)arg2 compress:(_Bool)arg3 peer:(id)arg4 update:(CDUnknownBlockType)arg5 diagnostics:(CDUnknownBlockType)arg6 receipts:(id *)arg7 error:(out id *)arg8;
- (id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 error:(out id *)arg4;
- (id)runPerformanceTestWithConfiguration:(id)arg1 update:(CDUnknownBlockType)arg2 error:(out id *)arg3;
- (id)runPerformanceTest:(id)arg1 update:(CDUnknownBlockType)arg2 error:(out id *)arg3;
- (id)runWiFiPerformanceLoggingWithConfiguration:(id)arg1 error:(out id *)arg2;
- (void)cancelRequestWithUUID:(id)arg1;
- (void)log:(id)arg1 timestamp:(_Bool)arg2;

@end
