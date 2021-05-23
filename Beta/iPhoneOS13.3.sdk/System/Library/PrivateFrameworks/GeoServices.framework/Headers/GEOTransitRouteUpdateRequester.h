/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSHashTable, NSMutableSet, NSTimer;

@interface GEOTransitRouteUpdateRequester : NSObject

{
    struct os_unfair_lock_s _updatersLock;
    NSHashTable *_updaters;
    struct os_unfair_lock_s _processedRequestsLock;
    NSMutableSet *_processedRequests;
    struct os_unfair_lock_s _inflightRequestsLock;
    NSMutableSet *_inflightRequests;
    NSTimer *_updateTimer;
    unsigned long long _maxRetries;
    unsigned long long _numRetries;
    double _initialDelay;
    double _requestInterval;
}

@property (nonatomic) double initialDelay;
@property (nonatomic) double requestInterval;
@property (nonatomic, readonly) NSHashTable *updaters;
@property (nonatomic, readonly) NSMutableSet *processedRequests;

+ (id)sharedInstance;

- (id)initPrivate;
- (void)_cancelUpdateTimer;
- (void)_scheduleUpdateTimerWithInterval:(double)arg1;
- (void)_purgeAllObjects;
- (void)_cancelAllRequestsIfNeeded;
- (void)_removeRequestsIfApplicable:(id)arg1;
- (void)_processRequests;
- (id)_requestsForUpdaters:(id)arg1;
- (void)_sendRequestForRequests:(id)arg1;
- (id)_uuidsForRequests:(id)arg1;
- (void)_handleResponse:(id)arg1 andError:(id)arg2 forRequest:(id)arg3;
- (void)registerRouteUpdater:(id)arg1;
- (void)unregisterRouteUpdater:(id)arg1;

@end
