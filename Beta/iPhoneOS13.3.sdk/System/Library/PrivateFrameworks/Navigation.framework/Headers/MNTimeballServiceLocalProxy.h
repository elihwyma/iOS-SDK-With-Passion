/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNObserverHashTable, MNRouteRefreshPolicyScheduler, MNTimeballCache, MNTimeballLocationManager, MNTimeballRoutingProvider, MNTimeballServicePeer, MNXPCTransactionCounter, NSMutableDictionary, NSString;

@protocol MNTimeballServiceProxyDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNTimeballServiceLocalProxy : NSObject

{
    MNTimeballServicePeer *_peer;
    MNObserverHashTable *_observers;
    MNTimeballCache *_cache;
    MNRouteRefreshPolicyScheduler *_scheduler;
    MNTimeballRoutingProvider *_routingProvider;
    MNTimeballLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_operationQueue;
    MNXPCTransactionCounter *_xpcTransactionCounter;
    NSMutableDictionary *_destinationOptions;
    _Bool _isLeeching;
    id <MNTimeballServiceProxyDelegate> _delegate;
}

@property (nonatomic, readonly) MNTimeballServicePeer *peer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) id <MNTimeballServiceProxyDelegate> delegate;

- (void)dealloc;
- (id)_delegate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)provider:(id)arg1 didReceiveError:(id)arg2 forDestination:(id)arg3;
- (void)provider:(id)arg1 didReceiveUpdate:(id)arg2 forDestination:(id)arg3;
- (void)_requestHighMemoryThreshold:(id)arg1;
- (void)_removeHighMemoryThreshold;
- (void)_invokeDelegateHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4;
- (void)_receivedNetworkUpdate:(id)arg1 forDestination:(id)arg2;
- (void)_receivedNetworkError:(id)arg1 forDestination:(id)arg2;
- (void)_completedUpdateForDelegateHandlerID:(id)arg1;
- (void)_handleResult:(id)arg1 forDestination:(id)arg2 error:(id)arg3 fromNetwork:(_Bool)arg4 requestingClientID:(id)arg5 handlerID:(id)arg6 completed:(_Bool)arg7;
- (void)_enqueOperation:(CDUnknownBlockType)arg1;
- (void)_requestOptions:(long long)arg1 forDestinations:(id)arg2 fromLocation:(id)arg3 freshness:(id)arg4 handlerID:(id)arg5;
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4;
- (void)subscribeToDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;
- (void)unsubscribeFromDestination:(id)arg1;
- (void)subscribeToAllDestinations;
- (void)unsubscribeFromAllDestinations;
- (id)initWithPeer:(id)arg1 targetQueue:(id)arg2 cache:(id)arg3 locationManager:(id)arg4 routingProvider:(id)arg5 scheduler:(id)arg6;

@end
