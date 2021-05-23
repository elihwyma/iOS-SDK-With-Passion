/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPMovieHighlightAnalyzer : NSObject

{
    NSArray *_junkResults;
    NSArray *_qualityResults;
    NSArray *_faceResults;
    NSArray *_saliencyResults;
    NSArray *_actionResults;
    NSArray *_subtleMotionResults;
    NSArray *_voiceResults;
    NSArray *_featureResults;
    NSArray *_humanActionResults;
    NSArray *_humanPoseResults;
    NSArray *_cameraMotionResults;
    NSArray *_keyFrameResults;
    NSMutableArray *_expressionSegments;
    NSMutableArray *_internalResults;
    NSMutableArray *_internalConstraintResults;
    struct CGSize _frameSize;
    _Bool _isLivePhoto;
    _Bool _verbose;
    _Bool _hadFlash;
}

- (id)results;
- (_Bool)addSegment:(id)arg1;
- (id)initWithAnalysisType:(unsigned long long)arg1 isLivePhoto:(_Bool)arg2 hadFlash:(_Bool)arg3;
- (int)prepareRequiredQualityResult:(id)arg1 junkDetectionResult:(id)arg2 descriptorResult:(id)arg3 faceResult:(id)arg4 saliencyResult:(id)arg5 actionResult:(id)arg6 subtleMotionResult:(id)arg7 voiceResult:(id)arg8 keyFrameResult:(id)arg9 humanActionResults:(id)arg10 humanPoseResults:(id)arg11 cameraMotionResults:(id)arg12 frameSize:(struct CGSize)arg13;
- (int)generateHighlights;
- (id)movieSummary;
- (int)generateInitialSegments;
- (int)computeHighlightScoreWithConstraint;
- (CDStruct_e83c9415)computeQualityTrimFor:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)computeActionFaceTrimFor:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)computeSteadyTranslationTrimFor:(CDStruct_e83c9415)arg1;
- (void)generateExpressionSegments:(CDStruct_e83c9415)arg1;
- (float)analyzeOverallQuality:(CDStruct_e83c9415)arg1;
- (id)pickKeyFramesInRange:(CDStruct_e83c9415)arg1;
- (struct CGRect)computeBestPlaybackCrop:(CDStruct_e83c9415)arg1;
- (void)mergeShortSegments;
- (void)mergeSimilarSegments;
- (void)SetKeyFramesForSegments:(id)arg1;
- (float)computeExpressionScoreInTimerange:(CDStruct_e83c9415)arg1;
- (float)computeActionScoreInTimerange:(CDStruct_e83c9415)arg1;
- (float)computeVoiceScoreInTimeRange:(CDStruct_e83c9415)arg1;
- (void)computeHighlightScoreOfSegment:(id)arg1;
- (int)evaluateSegment:(id)arg1;
- (void)searchFeatureVectorOfSegment:(id)arg1;
- (float)computeHumanActionScoreInTimerange:(CDStruct_e83c9415)arg1;
- (float)computeHumanPoseScoreInTimerange:(CDStruct_e83c9415)arg1;
- (float)qualityScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)actionScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)subtleMotionScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)expressionScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)voiceScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)junkScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)cameraMotionScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)visualPleasingScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)computeHighlightScoreOfRange:(CDStruct_e83c9415)arg1;

@end
