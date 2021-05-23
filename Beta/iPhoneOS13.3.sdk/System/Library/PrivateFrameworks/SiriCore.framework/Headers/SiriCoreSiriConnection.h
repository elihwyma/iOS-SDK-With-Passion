/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSMutableSet, NSString, NSURL, NWPathEvaluator, SAConnectionPolicy, SiriCoreSiriBackgroundConnection;

@protocol OS_dispatch_group, OS_dispatch_queue, SiriCoreSiriConnectionDelegate;

@interface SiriCoreSiriConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isCanceled;
    id <SiriCoreSiriConnectionDelegate> _delegate;
    NSURL *_url;
    _Bool _prefersWWAN;
    NSString *_aceHost;
    NSString *_languageCode;
    double _timeout;
    _Bool _sendPings;
    NSString *_assistantIdentifier;
    NSString *_peerAssistantIdentifier;
    NSString *_connectionId;
    _Bool _isCanceledInternal;
    NSMutableSet *_pendingBackgroundConnections;
    NSMutableSet *_comatoseBackgroundConnections;
    NSMutableSet *_scheduledRoutes;
    SiriCoreSiriBackgroundConnection *_activeBackgroundConnection;
    NSObject<OS_dispatch_group> *_activeConnectionGroup;
    NSString *_peerType;
    NSString *_peerVersion;
    NSString *_productTypePrefix;
    _Bool _usesProxyConnection;
    _Bool _deviceIsInWalkaboutExperimentGroup;
    _Bool _siriConnectionUsesPeerManagedSync;
    Class _peerProviderClass;
    NSMutableArray *_connMethodUsedHistory;
    _Bool _imposePolicyBan;
    NWPathEvaluator *_evaluator;
    NSString *_savedURLHostForEvaluator;
    NSString *_savedPortForEvaluator;
    _Bool _skipPeer;
    _Bool _useWiFiHint;
    _Bool _forceReconnect;
    NSError *_skipPeerError;
    SAConnectionPolicy *_connectionPolicy;
}

@property (copy, nonatomic) SAConnectionPolicy *connectionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (id)init;
- (void)dealloc;
- (void)start;
- (id)initWithQueue:(id)arg1;
- (void)_cancelSynchronously:(CDUnknownBlockType)arg1;
- (void)barrier:(CDUnknownBlockType)arg1;
- (void)probeConnection;
- (id)analysisInfo;
- (void)siriBackgroundConnection:(id)arg1 willStartWithConnectionType:(id)arg2;
- (void)siriBackgroundConnectionDidClose:(id)arg1;
- (void)siriBackgroundConnection:(id)arg1 didEncounterError:(id)arg2 analysisInfo:(id)arg3;
- (void)siriBackgroundConnection:(id)arg1 didOpenWithConnectionType:(id)arg2 routeId:(id)arg3 delay:(double)arg4;
- (void)siriBackgroundConnection:(id)arg1 willStartConnectionWithHTTPHeader:(id)arg2;
- (void)siriBackgroundConnection:(id)arg1 didReceiveAceObject:(id)arg2;
- (void)setSendPings:(_Bool)arg1;
- (void)sendCommands:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)_pathEvaluator:(id)arg1 port:(id)arg2;
- (id)_connectionInfoForRoute:(id)arg1 policy:(id)arg2;
- (void)_startBackgroundConnectionWithRoute:(id)arg1 policy:(id)arg2;
- (void)_scheduleBackgroundConnectionWithRoute:(id)arg1 delay:(double)arg2 policy:(id)arg3;
- (void)_accessPotentiallyActiveConnections:(CDUnknownBlockType)arg1;
- (void)_waitForActiveConnection:(CDUnknownBlockType)arg1;
- (id)_activeOrAnyPendingConnection;
- (void)_recordConnectionMethodForMetrics:(id)arg1;
- (void)_handleLastEventFromBackgroundConnection:(id)arg1 pendingConnectionExhaustionHandler:(CDUnknownBlockType)arg2;
- (void)siriBackgroundConnection:(id)arg1 didEncounterIntermediateError:(id)arg2;
- (void)sendCommand:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)cancelSynchronously:(_Bool)arg1 onQueue:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAnalysisInfo:(CDUnknownBlockType)arg1;
- (void)getConnectionMetricsSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
