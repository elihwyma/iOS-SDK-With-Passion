/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@protocol W5XPCRequestDelegate

- (unsigned short)cancelRequestWithUUID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)startBrowsingAndReply: /* Error: Ran out of types for this method. */;
- (unsigned short)stopBrowsingAndReply: /* Error: Ran out of types for this method. */;
- (unsigned short)startAdvertisingAndReply: /* Error: Ran out of types for this method. */;
- (unsigned short)stopAdvertisingAndReply: /* Error: Ran out of types for this method. */;
- (unsigned short)startMonitoringEvents:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)stopMonitoringEvents:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)queryPeerCacheAndReply: /* Error: Ran out of types for this method. */;
- (unsigned short)queryLocalPeerAndReply: /* Error: Ran out of types for this method. */;
- (unsigned short)queryStatusForPeer:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)runDiagnostics:configuration:uuid:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)queryDebugConfigurationForPeer:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setDebugConfiguration:peer:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)collectLogs:configuration:uuid:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)runWiFiSnifferOnChannel:duration:peer:uuid:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)runPerformanceTestWithConfiguration:uuid:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)runWiFiPerformanceLoggingWithConfiguration:uuid:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelAllRequestsAndReply: /* Error: Ran out of types for this method. */;
- (unsigned short)log:timestamp:reply: /* Error: Ran out of types for this method. */;

@end
