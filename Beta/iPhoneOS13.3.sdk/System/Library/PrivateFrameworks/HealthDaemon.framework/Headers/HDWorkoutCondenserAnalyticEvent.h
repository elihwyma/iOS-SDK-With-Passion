/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface HDWorkoutCondenserAnalyticEvent : NSObject

{
    _Bool _hasWatchSource;
    _Bool _success;
    long long _reason;
    long long _batchSize;
    double _duration;
    NSError *_error;
    NSError *_underlyingError;
    long long _workoutsToCondense;
    long long _workoutsToRecondense;
    long long _condensedWorkouts;
    long long _processedWorkouts;
    long long _createdSeries;
    long long _deletedSamples;
}

@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) long long batchSize;
@property (nonatomic, readonly) _Bool hasWatchSource;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) _Bool success;
@property (copy, nonatomic, readonly) NSError *error;
@property (copy, nonatomic, readonly) NSError *underlyingError;
@property (nonatomic, readonly) long long workoutsToCondense;
@property (nonatomic, readonly) long long workoutsToRecondense;
@property (nonatomic, readonly) long long condensedWorkouts;
@property (nonatomic, readonly) long long processedWorkouts;
@property (nonatomic, readonly) long long createdSeries;
@property (nonatomic, readonly) long long deletedSamples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (unsigned int)AWDMetricID;
- (id)codableRepresentationForAWDSubmission;
- (id)initWithReason:(long long)arg1 batchSize:(long long)arg2 hasWatchSource:(_Bool)arg3 duration:(double)arg4 success:(_Bool)arg5 error:(id)arg6 workoutsToCondense:(long long)arg7 workoutsToRecondense:(long long)arg8 condensedWorkouts:(long long)arg9 processedWorkouts:(long long)arg10 createdSeries:(long long)arg11 deletedSamples:(long long)arg12;

@end
