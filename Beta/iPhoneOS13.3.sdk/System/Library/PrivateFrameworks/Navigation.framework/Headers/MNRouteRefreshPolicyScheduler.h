/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNObserverHashTable, MNTimeballCache, MNTimeballLocationManager, MNTimeballRoutingProvider, MNXPCTransactionCounter, NSDate, NSMutableDictionary, NSString;

@protocol MNRouteRefreshPolicySchedulerTimedActivity, OS_dispatch_queue, OS_dispatch_source;

@interface MNRouteRefreshPolicyScheduler : NSObject

{
    NSMutableDictionary *_refreshPolicyByDestination;
    NSMutableDictionary *_optionsByDestination;
    NSMutableDictionary *_auditTokenByDestination;
    struct os_unfair_lock_s _lock;
    MNTimeballRoutingProvider *_routingProvider;
    NSDate *_deferredRefreshDate;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_source> *_deferTimer;
    MNTimeballCache *_cache;
    MNTimeballLocationManager *_locationManager;
    MNXPCTransactionCounter *_transactionCounter;
    MNObserverHashTable *_observers;
    CDUnknownBlockType _refreshCompletion;
    double _tolerance;
    id <MNRouteRefreshPolicySchedulerTimedActivity> _timedActivity;
}

@property (copy, nonatomic) CDUnknownBlockType refreshCompletion;
@property (nonatomic) double tolerance;
@property (retain, nonatomic) id <MNRouteRefreshPolicySchedulerTimedActivity> timedActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)scheduleUpdatesForDestination:(id)arg1 options:(long long)arg2 policy:(unsigned long long)arg3 auditToken:(id)arg4;
- (void)unscheduleUpdateForDestination:(id)arg1;
- (void)_performDeferredRefresh;
- (void)_handleSchedulingUpdatesForDestination:(id)arg1 options:(long long)arg2 policy:(unsigned long long)arg3 auditToken:(id)arg4;
- (void)_handleSchedulingThisDestinationAndRefreshAllDestinations:(id)arg1 nextRefreshDate:(id)arg2;
- (void)_scheduleNextRefreshDateForDestination:(id)arg1 routeUpdate:(id)arg2 fromDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_refreshAllDestinationsAtDate:(id)arg1;
- (void)_deferRefreshForScheduledDestinationsAfter:(id)arg1;
- (void)_updateNextRefreshDate:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_enterActiveWorkload;
- (void)_handleRefreshingCacheEntries:(id)arg1 atDate:(id)arg2;
- (void)_leaveActiveWorkload;
- (void)_handleRefreshingCacheEntries:(id)arg1 atDate:(id)arg2 userLocation:(id)arg3;
- (void)_handleCompletionOfRefresh;
- (id)_refreshPolicyForDestination:(id)arg1;
- (double)_timeIntervalForRefreshOfDestination:(id)arg1 routeUpdate:(id)arg2 atDate:(id)arg3;
- (id)_newActivityFromRefreshPolicyRules:(id)arg1;
- (id)initWithRoutingProvider:(id)arg1 cache:(id)arg2 locationManager:(id)arg3;
- (void)refreshScheduledDestinations;

@end
