/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSeriesBuilder.h>

@class NSDate, NSMutableData, NSMutableDictionary;

@interface HKHeartbeatSeriesBuilder : HKSeriesBuilder

{
    NSDate *_startDate;
    NSMutableDictionary *_mutableMetadata;
    NSMutableData *_mutableHeartbeats;
    unsigned long long _count;
    double _lastHeartbeatTimeInterval;
}

+ (unsigned long long)maximumCount;

- (void)_resourceQueue_addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resourceQueue_addHeartbeatWithTimeIntervalSinceSeriesStartDate:(double)arg1 precededByGap:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resourceQueue_finishSeriesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1 device:(id)arg2 startDate:(id)arg3;
- (void)addHeartbeatWithTimeIntervalSinceSeriesStartDate:(double)arg1 precededByGap:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)finishSeriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)discard;

@end
