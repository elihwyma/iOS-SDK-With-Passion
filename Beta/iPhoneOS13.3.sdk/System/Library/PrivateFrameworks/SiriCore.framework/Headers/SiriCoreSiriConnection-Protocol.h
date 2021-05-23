/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <SiriCore/Swift-Protocol.h>

@class MISSING_TYPE, NSError, NSString, NSURL;

@protocol SiriCoreSiriConnectionDelegate;

@protocol SiriCoreSiriConnection <Swift>

@property (weak, nonatomic) id <SiriCoreSiriConnectionDelegate> delegate;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) _Bool prefersWWAN;
@property (nonatomic) _Bool skipPeer;
@property (nonatomic) _Bool useWiFiHint;
@property (copy, nonatomic) NSError *skipPeerError;
@property (nonatomic) _Bool forceReconnect;
@property (copy, nonatomic) NSString *aceHost;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (copy, nonatomic) NSString *peerAssistantIdentifier;
@property (copy, nonatomic) NSString *peerType;
@property (copy, nonatomic) NSString *peerVersion;
@property (copy, nonatomic) NSString *productTypePrefix;
@property (nonatomic) _Bool usesProxyConnection;
@property (nonatomic) _Bool deviceIsInWalkaboutExperimentGroup;
@property (nonatomic) _Bool siriConnectionUsesPeerManagedSync;
@property (retain, nonatomic) Class peerProviderClass;
@property (copy, nonatomic) NSString *connectionId;
@property (nonatomic) _Bool imposePolicyBan;

- (MISSING_TYPE *)start;
- (MISSING_TYPE *)barrier: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)probeConnection;
- (MISSING_TYPE *)setSendPings: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)sendCommands:errorHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)sendCommand:errorHandler: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)cancelSynchronously:onQueue:completion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getAnalysisInfo: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)getConnectionMetricsSynchronously:completion: /* Error: Ran out of types for this method. */;

@end
