/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSHashTable, NSMutableSet, NSTimer;

@protocol GEOMapServiceTicket;

@interface GEOTransitVehicleUpdateRequester : NSObject

{
    struct os_unfair_lock_s _updatersLock;
    NSHashTable *_updaters;
    struct os_unfair_lock_s _processedTripIdsLock;
    NSMutableSet *_processedTripIds;
    struct os_unfair_lock_s _inflightTripIdsLock;
    NSMutableSet *_inflightTripIds;
    id <GEOMapServiceTicket> _ticket;
    NSTimer *_updateTimer;
    double _requestInterval;
    unsigned long long _maxRetries;
    unsigned long long _numRetries;
}

@property (nonatomic, readonly) NSHashTable *updaters;
@property (nonatomic, readonly) NSMutableSet *processedTripIds;

+ (id)sharedInstance;

- (id)initPrivate;
- (void)_cancelRequestIfNeeded;
- (void)_cancelUpdateTimer;
- (void)_processTripIds;
- (void)_removeTripIdsIfApplicable:(id)arg1;
- (void)_scheduleUpdateTimerWithInterval:(double)arg1;
- (id)_tripIdsForUpdaters:(id)arg1 filteredTripIDs:(_Bool *)arg2;
- (void)_sendRequestForTripIds:(id)arg1;
- (void)_handleMapItems:(id)arg1 error:(id)arg2 forTripIDs:(id)arg3;
- (void)_purgeAllObjects;
- (void)registerVehicleUpdater:(id)arg1;
- (void)unregisterVehicleUpdater:(id)arg1;
- (void)mockProcessedIds:(id)arg1;

@end
