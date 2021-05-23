/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDSQLitePredicate, _HDWorkoutCondenserAnalyticsAccumulator;

@interface _HDWorkoutCondensationConfiguration : NSObject

{
    HDProfile *_profile;
    HDSQLitePredicate *_predicate;
    double _minimumWorkoutDuration;
    long long _minimumSeriesSize;
    long long _maximumSeriesSize;
    long long _deletedSampleThreshold;
    _HDWorkoutCondenserAnalyticsAccumulator *_analyticsAccumulator;
}

@property (weak, nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HDSQLitePredicate *predicate;
@property (nonatomic, readonly) double minimumWorkoutDuration;
@property (nonatomic, readonly) long long minimumSeriesSize;
@property (nonatomic, readonly) long long maximumSeriesSize;
@property (nonatomic, readonly) long long deletedSampleThreshold;
@property (nonatomic, readonly) _HDWorkoutCondenserAnalyticsAccumulator *analyticsAccumulator;

+ (id)configurationWithProfile:(id)arg1 minimumSeriesSize:(long long)arg2 maximumSeriesSize:(long long)arg3 deletedSampleThreshold:(long long)arg4 analyticsAccumulator:(id)arg5 error:(id *)arg6;

- (id)initWithProfile:(id)arg1 predicate:(id)arg2 minimumWorkoutDuration:(double)arg3 minimumSeriesSize:(long long)arg4 maximumSeriesSize:(long long)arg5 deletedSampleThreshold:(long long)arg6 analyticsAccumulator:(id)arg7;

@end
