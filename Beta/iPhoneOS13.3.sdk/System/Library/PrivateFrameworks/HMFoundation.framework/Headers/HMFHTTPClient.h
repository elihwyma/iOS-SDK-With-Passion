/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFExponentialBackoffTimer, HMFHTTPClientConfiguration, HMFNetMonitor, HMFNetService, NSObject, NSOperationQueue, NSString, NSURL, NSURLSession;

@protocol HMFHTTPClientDelegate, HMFLocking, OS_dispatch_queue;

@interface HMFHTTPClient

{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _reachable;
    _Bool _pinging;
    _Bool _allowAnonymousConnection;
    _Bool _active;
    HMFHTTPClientConfiguration *_configuration;
    NSURL *_baseURL;
    id <HMFHTTPClientDelegate> _delegate;
    HMFNetService *_netService;
    NSURLSession *_session;
    HMFNetMonitor *_reachabilityMonitor;
    NSOperationQueue *_reachabilityProbeQueue;
    HMFExponentialBackoffTimer *_delegatedPingTimer;
}

@property (nonatomic, readonly) NSURLSession *session;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, readonly) HMFNetMonitor *reachabilityMonitor;
@property (nonatomic, readonly) NSOperationQueue *reachabilityProbeQueue;
@property (retain, nonatomic) HMFExponentialBackoffTimer *delegatedPingTimer;
@property (nonatomic, getter=isPinging) _Bool pinging;
@property (nonatomic, getter=isReachable) _Bool reachable;
@property (weak) id <HMFHTTPClientDelegate> delegate;
@property (copy, nonatomic, readonly) NSURL *baseURL;
@property (copy, nonatomic, readonly) HMFNetService *netService;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic) _Bool allowAnonymousConnection;
@property (copy, readonly) HMFHTTPClientConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;
+ (id)baseURLWithScheme:(id)arg1 hostAddress:(id)arg2 port:(unsigned long long)arg3;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;
- (id)attributeDescriptions;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (id)initWithBaseURL:(id)arg1 configuration:(id)arg2;
- (void)__initializeWithConfiguration:(id)arg1;
- (id)initWithService:(id)arg1 configuration:(id)arg2;
- (void)resolveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)requestClientReachabilityPingWithRetry:(_Bool)arg1;
- (void)startDelegatedPingTimer;
- (void)stopDelegatedPingTimer;
- (void)startReachabilityProbe;
- (id)initWithBaseURL:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithNetService:(id)arg1 options:(unsigned long long)arg2;
- (void)sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelPendingRequests;

@end
