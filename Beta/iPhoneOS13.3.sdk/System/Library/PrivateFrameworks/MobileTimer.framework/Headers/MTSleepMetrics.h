/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKObserverQuery, MTObserverStore;

@protocol NAScheduler;

@interface MTSleepMetrics : NSObject

{
    id <NAScheduler> _serializer;
    HKHealthStore *_healthStore;
    HKObserverQuery *_healthObserver;
    MTObserverStore *_sleepDataObservers;
}

@property (retain, nonatomic) id <NAScheduler> serializer;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKObserverQuery *healthObserver;
@property (retain, nonatomic) MTObserverStore *sleepDataObservers;

+ (id)_sharedPublicMetrics;
+ (void)registerSleepDataObserver:(id)arg1;
+ (void)unregisterSleepDataObserver:(id)arg1;
+ (id)sleepDataForPastWeekRequestAuthorization:(_Bool)arg1;
+ (id)sleepDataForPastWeekRequestAuthorization:(_Bool)arg1 dataSource:(unsigned long long)arg2;
+ (id)sleepDataForRange:(id)arg1;
+ (id)_sourcePredicate:(unsigned long long)arg1;
+ (id)lastSleepDayRequestAuthorization:(_Bool)arg1;
+ (id)lastSleepDayRequestAuthorization:(_Bool)arg1 dataSource:(unsigned long long)arg2;
+ (id)sleepDaysForRange:(id)arg1 requestAuthorization:(_Bool)arg2 dataSource:(unsigned long long)arg3;
+ (id)sleepDaysForRange:(id)arg1 requestAuthorization:(_Bool)arg2;
+ (id)sleepDataForPastWeek;
+ (id)lastSleepDay;
+ (id)sleepDaysForRange:(id)arg1;

- (id)init;
- (void)registerSleepDataObserver:(id)arg1;
- (void)unregisterSleepDataObserver:(id)arg1;
- (id)sleepDataForPastWeekRequestAuthorization:(_Bool)arg1 dataSource:(unsigned long long)arg2;
- (id)sleepDataForRange:(id)arg1 requestAuthorization:(_Bool)arg2 dataSource:(unsigned long long)arg3;
- (id)sleepDataForRange:(id)arg1;
- (id)sleepDataForRange:(id)arg1 intervalComponents:(id)arg2 requestAuthorization:(_Bool)arg3 dataSource:(unsigned long long)arg4;
- (void)_executeSleepQuery:(id)arg1 requestAuthorization:(_Bool)arg2 future:(id)arg3;
- (id)sleepDaysForRange:(id)arg1 requestAuthorization:(_Bool)arg2 dataSource:(unsigned long long)arg3;

@end
