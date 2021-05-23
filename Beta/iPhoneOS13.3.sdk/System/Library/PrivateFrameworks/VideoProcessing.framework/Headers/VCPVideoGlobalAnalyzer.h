/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPVideoGlobalAnalyzer : NSObject

- (float)analyzeOverallQuality:(id)arg1 withFpsRate:(float)arg2;
- (int)generateLivePhotoRecommendationForResults:(id)arg1 andPrivateResults:(id)arg2 usingFaceAction:(_Bool)arg3;
- (int)setActivityLevel:(id)arg1;
- (_Bool)hasMeaningfulSceneSegment:(id)arg1 withFpsRate:(float)arg2;
- (float)assetQualityScoreFromAnalysis:(id)arg1 withFpsRate:(float)arg2;
- (float)assetActionScoreFromAnalysis:(id)arg1;
- (float)assetExpressionScoreFromAnalysis:(id)arg1;
- (float)assetVoiceScoreFromAnalysis:(id)arg1;
- (float)assetJunkScoreFromAnalysis:(id)arg1;
- (float)assetCameraMotionScoreFromAnalysis:(id)arg1;
- (float)scaleForTimeRange:(CDStruct_e83c9415)arg1 basedOnFace:(id)arg2;
- (_Bool)isJunkTimeRange:(CDStruct_e83c9415)arg1 basedOnResults:(id)arg2;
- (float)subjectActivityInTimeRange:(CDStruct_e83c9415)arg1 fromResults:(id)arg2;
- (float)cameraActivityfromQuality:(float)arg1;
- (float)assetActivityLevelFromAnalysisResults:(id)arg1;

@end
