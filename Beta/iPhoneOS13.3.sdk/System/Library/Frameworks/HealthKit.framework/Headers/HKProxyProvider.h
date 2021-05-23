/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, NSMutableArray, NSString, _HKXPCConnection;

@protocol OS_dispatch_queue, _HKXPCExportable;

@interface HKProxyProvider : NSObject

{
    _HKXPCConnection *_connection;
    long long _connectionGeneration;
    _Bool _invalidated;
    CDUnknownBlockType _lock_automaticProxyReconnectionHandler;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_clientQueue;
    int _notifyToken;
    NSMutableArray *_pendingFetchContinuations;
    _Bool _shouldRetryOnInterruption;
    HKHealthStore *_healthStore;
    NSString *_proxyIdentifier;
    id <_HKXPCExportable> _exportedObject;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) NSString *proxyIdentifier;
@property (weak, nonatomic, readonly) id <_HKXPCExportable> exportedObject;
@property (copy) CDUnknownBlockType automaticProxyReconnectionHandler;
@property _Bool shouldRetryOnInterruption;

+ (id)_relaunchQueue;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)fetchProxyWithHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_serverDidFinishLaunching;
- (void)_fetchProxyWithHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_lock_flushContinuationsWithConnection:(id)arg1 error:(id)arg2;
- (void)_fetchRetryingProxyWithErrorCount:(long long)arg1 handler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_handleError:(id)arg1 connectionGeneration:(long long)arg2;
- (void)_lock_fetchEndpointAndConnectionWithContinuation:(CDUnknownBlockType)arg1;
- (void)_getSynchronousProxyWithErrorCount:(long long)arg1 handler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_getSynchronousProxyWithHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_resetConnectionWithGeneration:(long long)arg1;
- (void)_lock_setUpConnectionWithEndpoint:(id)arg1;
- (void)fetchProxyServiceEndpointForIdentifier:(id)arg1 endpointHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)initWithHealthStore:(id)arg1 proxyIdentifier:(id)arg2 exportedObject:(id)arg3;
- (void)getSynchronousProxyWithHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end
