/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <SiriCore/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol SiriCoreConnectionProvider <Swift>

+ (MISSING_TYPE *)getMetricsContext: /* Error: Ran out of types for this method. */;

- (MISSING_TYPE *)close;
- (MISSING_TYPE *)setDelegate: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)initWithQueue: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)isReady;
- (MISSING_TYPE *)connectionType;
- (MISSING_TYPE *)isMultipath;
- (MISSING_TYPE *)isCanceled;
- (MISSING_TYPE *)readData: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)writeData:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)supportsInitialPayload;
- (MISSING_TYPE *)openConnectionForURL:withConnectionId:initialPayload:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)hasActiveConnection;
- (MISSING_TYPE *)headerDataWithForceReconnect: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)shouldFallbackQuickly;
- (MISSING_TYPE *)analysisInfo;
- (MISSING_TYPE *)updateConnectionMetrics:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)isPeerConnectionError: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)isPeerNotNearbyError: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)shouldFallbackFromError: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)resolvedHost;
- (MISSING_TYPE *)setProviderConnectionPolicy: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setPolicyRoute: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setPrefersWWAN: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setConnectByPOPMethod: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setEnforceExtendedValidation: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setScopeIsWiFiOnly;
- (MISSING_TYPE *)setKeepAlive:withInterval:withCount: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setRetransmitConnectionDropTime: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setStaleInterval: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)providerStatsIndicatePoorLinkQuality;
- (MISSING_TYPE *)isEstablishing;

@end
