/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, SignpostCAIntervalAggregationStats;

@interface SignpostCAProcessStallAggregation : NSObject

{
    _Bool _isSystemAggregation;
    NSString *_processName;
    NSString *_processExecutablePath;
    NSMutableSet *_pids;
    SignpostCAIntervalAggregationStats *_longCommitStats;
    SignpostCAIntervalAggregationStats *_longTransactionLifetimeStats;
    SignpostCAIntervalAggregationStats *_longHIDLatencyStats;
    SignpostCAIntervalAggregationStats *_longFrameLatencyStats;
    SignpostCAIntervalAggregationStats *_longRenderForTimeStats;
    SignpostCAIntervalAggregationStats *_longFrameLifetimeStats;
    SignpostCAIntervalAggregationStats *_longResponsibleFrameLifetimeStats;
    SignpostCAIntervalAggregationStats *_glitchStats;
    SignpostCAIntervalAggregationStats *_responsibleGlitchStats;
    SignpostCAIntervalAggregationStats *_firstFrameGlitchStats;
    SignpostCAIntervalAggregationStats *_responsibleFirstFrameGlitchStats;
}

@property (nonatomic, readonly) _Bool isSystemAggregation;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSString *processExecutablePath;
@property (nonatomic, readonly) NSMutableSet *pids;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longCommitStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longTransactionLifetimeStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longHIDLatencyStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longFrameLatencyStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longRenderForTimeStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longFrameLifetimeStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *longResponsibleFrameLifetimeStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *glitchStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *responsibleGlitchStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *firstFrameGlitchStats;
@property (nonatomic, readonly) SignpostCAIntervalAggregationStats *responsibleFirstFrameGlitchStats;

- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_statsForType:(unsigned char)arg1 initIfMissing:(_Bool)arg2;
- (void)_iterateTypeStatsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)_totalStallDurationNs;
- (id)_initAsSystemAggregation;
- (id)_initWithProcessExecutablePath:(id)arg1 pid:(int)arg2;
- (void)_addDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2;
- (void)_addOtherProcessStallAggregation:(id)arg1;

@end
