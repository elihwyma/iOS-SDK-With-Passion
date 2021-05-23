/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSInputStream, NSOperationQueue, NSOutputStream, NSString, NSURL, NSURLSession, NSURLSessionStreamTask, SAConnectionPolicy, SAConnectionPolicyRoute, SiriCoreConnectionType;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, SiriCoreConnectionProviderDelegate;

@interface SiriCoreNetworkSessionProvider : NSObject

{
    id <SiriCoreConnectionProviderDelegate> _delegate;
    NSURL *_url;
    SAConnectionPolicyRoute *_route;
    SAConnectionPolicy *_policy;
    _Bool _prefersWWAN;
    _Bool _connectByPOPEnabled;
    _Bool _enforceEV;
    _Bool _isMPTCP;
    SiriCoreConnectionType *_connectionType;
    int _interfaceIndex;
    NSString *_interfaceName;
    _Bool _isCanceled;
    _Bool _isEstablishing;
    _Bool _isReady;
    NSURLSession *_urlSession;
    NSOperationQueue *_opQueue;
    NSURLSessionStreamTask *_streamTask;
    CDUnknownBlockType _completion_block;
    NSString *_resolvedHost;
    NSString *_connectionId;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _readBuffer[10240];
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_group> *_readGroup;
    _Bool _waitingOnReadGroup;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_source> *_openTimer;
    NSObject<OS_dispatch_source> *_staleConnectionTimer;
    unsigned long long _readWriteCounter;
    double _staleConnectionInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)getMetricsContext:(CDUnknownBlockType)arg1;

- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)initWithQueue:(id)arg1;
- (_Bool)isReady;
- (id)connectionType;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
- (_Bool)isMultipath;
- (_Bool)isCanceled;
- (void)readData:(CDUnknownBlockType)arg1;
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_closeWithError:(id)arg1;
- (void)_invokeOpenCompletionWithError:(id)arg1;
- (void)_streamDidBecomeUnviable;
- (void)_cancelOpenTimer;
- (void)_setupStaleConnectionTimer;
- (void)_setupOpenTimer;
- (void)_cancelStaleConnectionTimer;
- (_Bool)supportsInitialPayload;
- (void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)hasActiveConnection;
- (id)headerDataWithForceReconnect:(_Bool)arg1;
- (_Bool)shouldFallbackQuickly;
- (id)analysisInfo;
- (void)updateConnectionMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isPeerConnectionError:(id)arg1;
- (_Bool)isPeerNotNearbyError:(id)arg1;
- (_Bool)shouldFallbackFromError:(id)arg1;
- (id)resolvedHost;
- (void)setProviderConnectionPolicy:(id)arg1;
- (void)setPolicyRoute:(id)arg1;
- (void)setPrefersWWAN:(_Bool)arg1;
- (void)setConnectByPOPMethod:(_Bool)arg1;
- (void)setEnforceExtendedValidation:(_Bool)arg1;
- (void)setScopeIsWiFiOnly;
- (void)setKeepAlive:(double)arg1 withInterval:(double)arg2 withCount:(unsigned long long)arg3;
- (void)setRetransmitConnectionDropTime:(double)arg1;
- (void)setStaleInterval:(double)arg1;
- (_Bool)providerStatsIndicatePoorLinkQuality;
- (_Bool)isEstablishing;

@end
