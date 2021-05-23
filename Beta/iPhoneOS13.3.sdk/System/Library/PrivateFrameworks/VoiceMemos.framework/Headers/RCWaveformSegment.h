/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface RCWaveformSegment : NSObject

{
    NSData *_averagePowerLevelData;
    _Bool _isRendered;
    CDStruct_73a5d3ca _timeRange;
}

@property (nonatomic, readonly) CDStruct_73a5d3ca timeRange;
@property (nonatomic) _Bool isRendered;
@property (nonatomic, readonly) const float *averagePowerLevels;
@property (nonatomic, readonly) long long averagePowerLevelsCount;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)_discontinuityRepairedSegmentsByGrowingToFillGapsInSegments:(id)arg1;
+ (id)_segmentByMergingMergableSegments:(id)arg1;
+ (id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2 beforeTime:(double)arg3 andThenUsePreferredSegmentDuration:(double)arg4;
+ (id)emptySegmentWithTimeRange:(CDStruct_73a5d3ca)arg1;
+ (id)_segmentsByJoiningSegment:(id)arg1 toSegmentIfNecessaryWithGreaterSegment:(id)arg2 averagePowerLevelJoinLimit:(unsigned long long)arg3;
+ (id)_mergedSegmentByFastMergingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2;
+ (id)_mergedSegmentByResamplingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2;
+ (id)segmentsByReparingDiscontinuitiesInSegments:(id)arg1;
+ (id)segmentsByShiftingSegments:(id)arg1 byTimeOffset:(double)arg2;
+ (id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)simpleDescription;
- (id)verboseDescription;
- (id)copyWithTimeRangeOffsetByTimeOffset:(double)arg1;
- (id)initWithTimeRange:(CDStruct_73a5d3ca)arg1 averagePowerLevelVector:(vector_7584168e *)arg2;
- (id)_initWithTimeRange:(CDStruct_73a5d3ca)arg1 averagePowerLevelData:(id)arg2;
- (id)initWithTimeRange:(CDStruct_73a5d3ca)arg1 averagePowerLevelData:(id)arg2;
- (id)_segmentsByJoiningIfNecessaryGreaterSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned long long)arg2;
- (id)_segmentWithValuesInContainedTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)copyWithAdjustedTimeRange:(CDStruct_73a5d3ca)arg1;
- (_Bool)hasUniformPowerLevel:(float)arg1;
- (_Bool)isWaveformDataEqualToDataInSegment:(id)arg1;
- (id)segmentsByJoiningIfSmallSegment:(id)arg1;
- (id)segmentsByJoiningIfSmallSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned long long)arg2;
- (id)segmentByClippingToTimeRange:(CDStruct_73a5d3ca)arg1;

@end
