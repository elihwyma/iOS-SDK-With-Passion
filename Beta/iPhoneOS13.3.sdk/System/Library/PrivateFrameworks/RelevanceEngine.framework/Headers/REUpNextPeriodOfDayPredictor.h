/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REObservableSingleton.h>

@class NSDateInterval;

@interface REUpNextPeriodOfDayPredictor : REObservableSingleton

@property (nonatomic, readonly) unsigned long long currentPeriodOfDay;
@property (nonatomic, readonly) NSDateInterval *intervalForCurrentPeriodOfDay;

- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1;

@end
