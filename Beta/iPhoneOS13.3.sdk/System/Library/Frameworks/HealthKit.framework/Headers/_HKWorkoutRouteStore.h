/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface _HKWorkoutRouteStore : NSObject

{
    NSMutableDictionary *_locations;
    NSMutableDictionary *_series;
    NSObject<OS_dispatch_queue> *_locationQueue;
    long long _loadingCount;
    CDUnknownBlockType _loadingCompletionBlock;
    HKHealthStore *_healthStore;
}

- (id)init;
- (id)samples;
- (id)initWithHealthStore:(id)arg1;
- (void)_queue_checkAndReturnIfLocationsLoaded;
- (id)_queue_locations;
- (void)_queue_addWorkoutRoutes:(id)arg1;
- (void)_fetchAllLocationsFromSeriesSample:(id)arg1;
- (void)_setLocations:(id)arg1 forUUID:(id)arg2;
- (_Bool)containsSameValuesAs:(id)arg1;
- (void)setWorkoutRoutes:(id)arg1;
- (void)addWorkoutRoutes:(id)arg1;
- (void)fetchAllLocationsWithCompletion:(CDUnknownBlockType)arg1;

@end
