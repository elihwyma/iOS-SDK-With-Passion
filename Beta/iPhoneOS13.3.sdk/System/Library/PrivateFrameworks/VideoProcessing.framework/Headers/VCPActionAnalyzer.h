/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, VCPSegment;

__attribute__((visibility("hidden")))
@interface VCPActionAnalyzer : NSObject

{
    NSMutableArray *_internalResults;
    VCPSegment *_activeSegment;
    struct HinkleyDetector *_activeHinkleyDetector;
    float _activeThreshold;
    _Bool _firstFrame;
    _Bool _verbose;
    int _postProcessStart;
}

- (id)init;
- (void)dealloc;
- (id)segments;
- (_Bool)isActive:(float)arg1;
- (_Bool)isScoreValid:(float)arg1;
- (_Bool)decideSegmentPointUsingHinkleyDetector:(float)arg1;
- (void)updateActiveThreshold;
- (int)mergeSameTypeSegments;
- (void)printSegments:(id)arg1;
- (int)prepareTrimmingWithTrimStart:(CDStruct_1b6d18a9)arg1 andTrimEnd:(CDStruct_1b6d18a9)arg2;
- (int)mergeConsecutiveShortSegments;
- (int)mergeSparseShortSegments;
- (int)analyzeFrameWithTimeRange:(CDStruct_e83c9415)arg1 andActionScore:(float)arg2;
- (_Bool)decideSegmentPointBasedOnActionScore:(float)arg1;
- (int)finalizeWithDestructiveTrimStart:(CDStruct_1b6d18a9)arg1 trimEnd:(CDStruct_1b6d18a9)arg2;
- (int)postProcessSegmentsWithCaptureTime:(CDStruct_1b6d18a9)arg1 trimStart:(CDStruct_1b6d18a9)arg2;
- (id)activeSegment;

@end
