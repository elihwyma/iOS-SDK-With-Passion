/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class NSHashTable, NSNumber, _HKDelayedOperation;

@protocol OS_dispatch_queue;

@interface ACHAchievementProgressEngine : NSObject

{
    NSHashTable *_providers;
    NSObject<OS_dispatch_queue> *_providerQueue;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    _HKDelayedOperation *_delayedOperation;
    NSNumber *_overrideDelay;
}

@property (retain, nonatomic) NSHashTable *providers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) _HKDelayedOperation *delayedOperation;
@property (retain, nonatomic) NSNumber *overrideDelay;

- (id)init;
- (void)addObserver:(struct NSObject *)arg1;
- (void)removeObserver:(struct NSObject *)arg1;
- (void)requestProgressUpdateForProgressProvider:(struct NSObject *)arg1;
- (_Bool)shouldPopulateProgressForAchievement:(id)arg1;
- (_Bool)populateProgressAndGoalForAchievement:(id)arg1;
- (void)_notifyObserversOfProgressUpdate;
- (struct NSObject *)_queue_providerForTemplate:(id)arg1;
- (void)registerProgressProvider:(struct NSObject *)arg1;
- (void)deregisterProgressProvider:(struct NSObject *)arg1;
- (unsigned long long)providerCount;

@end
