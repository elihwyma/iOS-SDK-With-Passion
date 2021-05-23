/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface TAInterVisitMetricsSnapshot : NSObject

{
    NSMutableDictionary *_lastAssociatedLocationPerDevice;
    NSMutableDictionary *_lastAdvPerDevice;
    _Bool _snapshotClosed;
    NSDate *_initialTime;
    NSDate *_lastUpdateTime;
    NSMutableDictionary *_accumulatedDeviceMetrics;
}

@property (nonatomic, readonly) NSDate *initialTime;
@property (nonatomic, readonly) NSDate *lastUpdateTime;
@property (nonatomic, readonly) NSMutableDictionary *accumulatedDeviceMetrics;

- (_Bool)isClosed;
- (id)initWithTime:(id)arg1;
- (void)updateInterVisitMetric:(id)arg1 withUpdatedTime:(id)arg2 andCloseSnapshot:(_Bool)arg3;

@end
