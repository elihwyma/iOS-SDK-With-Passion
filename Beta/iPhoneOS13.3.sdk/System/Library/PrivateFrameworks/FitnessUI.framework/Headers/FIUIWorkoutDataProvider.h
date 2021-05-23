/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class HKAnchoredObjectQuery, HKHealthStore, NSCalendar, NSDate, NSMutableArray, NSMutableDictionary, _HKAnchoredObjectQueryManager;

@interface FIUIWorkoutDataProvider : NSObject

{
    HKHealthStore *_healthStore;
    _HKAnchoredObjectQueryManager *_queryManager;
    NSMutableDictionary *_workoutsByDay;
    NSMutableArray *_updateHandlers;
    HKAnchoredObjectQuery *_currentWorkoutAnchoredObjectQuery;
    NSCalendar *_gregorianCalendar;
    NSCalendar *_currentCalendar;
    NSDate *_retryDate;
}

- (id)init;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithHealthStore:(id)arg1;
- (void)_timeZoneDidChange:(id)arg1;
- (void)stopFetching;
- (void)addUpdateHandler:(CDUnknownBlockType)arg1;
- (void)startFetchingFromDate:(id)arg1;
- (id)allWorkouts;
- (void)_fetchAllWorkoutsFromDate:(id)arg1;
- (void)_retryQueryOnDidBecomeActiveWithDate:(id)arg1;
- (void)_handleAddedSamples:(id)arg1;
- (void)_runUpdateHandlers;
- (void)_handleRemovedObjects:(id)arg1;
- (void)_retryQuery:(id)arg1;
- (_Bool)hasWorkouts;
- (id)workoutsForDay:(id)arg1;

@end
