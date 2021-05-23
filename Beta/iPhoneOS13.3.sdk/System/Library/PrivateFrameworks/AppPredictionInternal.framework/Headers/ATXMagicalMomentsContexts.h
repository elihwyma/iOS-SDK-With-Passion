/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXMagicalMomentsContexts : NSObject

+ (id)getCurrentLOI;
+ (unsigned long long)minDistanceFromDate:(id)arg1 toDateRange:(struct _NSRange)arg2;
+ (unsigned long long)getMinTemporalDistanceFromDate:(id)arg1 toVisitsToLOI:(id)arg2;
+ (id)locationOfInterestForDate:(id)arg1 dateIntervalForSearch:(id)arg2;
+ (id)timeOfDayPredicatesWithRequestedDurationInHours:(unsigned long long)arg1 shouldPredicateOnStartDate:(_Bool)arg2;
+ (id)partOfWeekPredicatesUsingStartDate:(_Bool)arg1;
+ (id)eventIdentifierPredicateForValue:(id)arg1;
+ (id)loiPredicateForUUIDString:(id)arg1;

@end
