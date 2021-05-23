/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, VCPMovieHighlightAnalyzer, VCPVideoKeyFrameAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPMovieCurationAnalyzer : NSObject

{
    VCPVideoKeyFrameAnalyzer *_keyFrameAnalyzer;
    VCPMovieHighlightAnalyzer *_highlightAnalyzer;
    NSArray *_descriptorResults;
    NSArray *_qualityResuls;
    NSArray *_junkResults;
    NSArray *_faceResults;
    NSArray *_actionResults;
    NSArray *_subtleMotionResults;
    NSArray *_voiceResults;
    NSArray *_humanActionResults;
    NSArray *_humanPoseResults;
    NSArray *_cameraMotionResults;
    NSArray *_saliencyResults;
    NSDictionary *_faceRanges;
    CDStruct_e83c9415 _timeRange;
    struct CGSize _frameSize;
    _Bool _isLivePhoto;
    _Bool _hadFlash;
}

- (id)results;
- (int)postProcessKeyFrames;
- (void)reportMovieCurationAnalysisResults:(id)arg1 withSummaryAnalytics:(id)arg2;
- (void)addHighlight:(id)arg1 to:(id)arg2;
- (void)addSummary:(id)arg1 to:(id)arg2;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 transform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3 isLivePhoto:(_Bool)arg4 frameStats:(id)arg5 hadFlash:(_Bool)arg6 keyFrameResults:(id)arg7;
- (int)analyzeKeyFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (void)loadVideoAnalysisResults:(id)arg1 audioAnalysisResults:(id)arg2 andFaceRanges:(id)arg3 frameSize:(struct CGSize)arg4;
- (int)generateMovieCurations;

@end
