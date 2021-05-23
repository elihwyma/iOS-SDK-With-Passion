/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, VCPActionAnalyzer, VCPSegment;

__attribute__((visibility("hidden")))
@interface VCPTrimAnalyzer : NSObject

{
    VCPActionAnalyzer *_actionAnalyzer;
    NSMutableArray *_internalResults;
    CDStruct_e83c9415 _bestTrimTimeRange;
    float _curationThreshold;
    _Bool _verbose;
    CDStruct_1b6d18a9 _inTrimStart;
    CDStruct_1b6d18a9 _inTrimEnd;
    _Bool _firstFrame;
    VCPSegment *_activeSegment;
    CDStruct_1b6d18a9 _captureTime;
    _Bool _ready;
}

- (id)init;
- (_Bool)isReady;
- (void)printSegments:(id)arg1;
- (int)prepareTrimmingWithTrimStart:(CDStruct_1b6d18a9)arg1 andTrimEnd:(CDStruct_1b6d18a9)arg2;
- (int)analyzeFrameWithTimeRange:(CDStruct_e83c9415)arg1 analysisData:(id)arg2;
- (_Bool)shouldCutAt:(CDStruct_1b6d18a9)arg1 stillPTS:(CDStruct_1b6d18a9)arg2 withCut:(_Bool)arg3;
- (void)generateCurationSegment;
- (int)generateInterestingTrimBasedOnCaptureTime:(CDStruct_1b6d18a9)arg1;
- (void)updateCurationThreshold;
- (float)calculateCandidateScoreWithRangeAdjust:(int)arg1 endIdx:(int)arg2 candidateTimeRange:(CDStruct_e83c9415 *)arg3 captureTime:(CDStruct_1b6d18a9)arg4;
- (_Bool)isCurated:(float)arg1;
- (_Bool)isTimestampSkipable:(CDStruct_1b6d18a9)arg1;
- (_Bool)checkTrimAt:(CDStruct_1b6d18a9)arg1 captureTime:(CDStruct_1b6d18a9)arg2;
- (int)finalizeWithDestructiveTrimStart:(CDStruct_1b6d18a9)arg1 trimEnd:(CDStruct_1b6d18a9)arg2 andCaptureTime:(CDStruct_1b6d18a9)arg3;
- (CDStruct_e83c9415)bestTrimTimeRange;

@end
