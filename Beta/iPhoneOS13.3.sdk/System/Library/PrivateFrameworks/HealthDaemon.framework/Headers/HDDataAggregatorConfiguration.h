/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDDataAggregatorConfiguration : NSObject <Swift>

{
    _Bool _hasActiveWorkout;
    _Bool _hasForegroundObserver;
    double _collectionLatency;
    double _aggregationInterval;
    double _maximumSeriesDuration;
}

@property (nonatomic, readonly) double collectionLatency;
@property (nonatomic, readonly) double aggregationInterval;
@property (nonatomic, readonly) double maximumSeriesDuration;
@property (nonatomic, readonly) _Bool hasActiveWorkout;
@property (nonatomic) _Bool hasForegroundObserver;

+ (id)configurationWithLatency:(double)arg1 interval:(double)arg2 seriesDuration:(double)arg3 activeWorkout:(_Bool)arg4 foregroundObserver:(_Bool)arg5;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLatency:(double)arg1 interval:(double)arg2 seriesDuration:(double)arg3 activeWorkout:(_Bool)arg4 foregroundObserver:(_Bool)arg5;

@end
