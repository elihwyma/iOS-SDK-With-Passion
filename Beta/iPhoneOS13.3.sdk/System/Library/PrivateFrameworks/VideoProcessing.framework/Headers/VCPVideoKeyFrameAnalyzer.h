/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, VCPFrameAnalysisStats, VCPImageBlurAnalyzer, VCPImageFaceQualityAnalyzer, VCPVideoKeyFrame;

__attribute__((visibility("hidden")))
@interface VCPVideoKeyFrameAnalyzer : NSObject

{
    VCPImageBlurAnalyzer *_blurAnalyzer;
    VCPImageFaceQualityAnalyzer *_faceQualityAnalyzer;
    NSDictionary *_faceRanges;
    NSArray *_junkResults;
    NSMutableArray *_keyFrames;
    CDStruct_e83c9415 _timeRange;
    VCPVideoKeyFrame *_activeKeyFrame;
    VCPFrameAnalysisStats *_frameStats;
    _Bool _isLivePhoto;
    NSMutableArray *_keyFrameScores;
    NSArray *_inputKeyFrameResults;
}

- (id)initWithTransform:(struct CGAffineTransform)arg1 timeRange:(CDStruct_e83c9415)arg2 isLivePhoto:(_Bool)arg3 frameStats:(id)arg4 keyFrameResults:(id)arg5;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)preparePostProcessingStatsFromFaceRange:(id)arg1 junkResults:(id)arg2;
- (int)postProcess;
- (id)keyFrames;
- (id)keyFrameScores;
- (void)setKeyFrameTime:(CDStruct_1b6d18a9)arg1 isHeadingFrame:(_Bool)arg2;
- (void)prepareFrameStats:(CDStruct_1b6d18a9)arg1;
- (int)computeSharpnessOfFrame:(struct __CVBuffer *)arg1;
- (int)computeFaceQualityOfFrame:(struct __CVBuffer *)arg1;
- (int)finalizeKeyFrame;
- (void)adjustScoreByFace;
- (void)modulateByJunk;
- (void)modulateByTimeRange;
- (void)setBlurAnalyzerFaceResults:(id)arg1;
- (int)loadKeyFrameResults:(CDStruct_1b6d18a9)arg1;
- (void)modulateByExposure;
- (float)computeMinDistanceBetween:(id)arg1 withSet:(id)arg2;

@end
