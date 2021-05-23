/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFMutableNetService, HMFUnfairLock, NSArray, NSMutableArray, NSObject, NSString, _HMFCFHTTPServer;

@protocol HMFHTTPServerDelegate, OS_dispatch_queue;

@interface HMFHTTPServer

{
    HMFUnfairLock *_lock;
    NSMutableArray *_connections;
    NSMutableArray *_requestHandlers;
    unsigned long long _port;
    double _connectionIdleTimeout;
    _HMFCFHTTPServer *_internal;
    id <HMFHTTPServerDelegate> _delegate;
    NSString *_serviceType;
    NSString *_name;
    unsigned long long _options;
    HMFMutableNetService *_netService;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) _HMFCFHTTPServer *internal;
@property (weak) id <HMFHTTPServerDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *serviceType;
@property (copy, nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long port;
@property (nonatomic, readonly) unsigned long long options;
@property double connectionIdleTimeout;
@property (nonatomic, readonly) HMFMutableNetService *netService;
@property (copy, readonly) NSArray *connections;
@property (copy, readonly) NSArray *requestHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (void)stop;
- (id)shortDescription;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)serverDidInvalidate:(id)arg1;
- (void)server:(id)arg1 didOpenConnection:(id)arg2;
- (void)server:(id)arg1 didCloseConnection:(id)arg2;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)stopWithError:(id)arg1;
- (void)_stopWithError:(id)arg1;
- (void)addConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)_handleOpenedConnection:(id)arg1;
- (void)_handleClosedConnection:(id)arg1;
- (void)_handleReceivedRequest:(id)arg1 connection:(id)arg2;
- (id)initWithServiceType:(id)arg1 name:(id)arg2 port:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (void)registerRequestHandler:(id)arg1;
- (void)unregisterRequestHandler:(id)arg1;

@end
