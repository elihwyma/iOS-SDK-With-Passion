/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray, NSNumber, VCPCNNData, VCPCNNModel, VCPFrameAnalysisStats, VCPVideoActivityDescriptor;

__attribute__((visibility("hidden")))
@interface VCPVideoActivityAnalyzer : VCPVideoAnalyzer

{
    VCPFrameAnalysisStats *_frameStats;
    VCPVideoActivityDescriptor *_activityDescriptor;
    NSMutableArray *_activityScores;
    NSMutableArray *_validActivityScores;
    NSMutableArray *_qualityResults;
    NSMutableArray *_interestingnessResults;
    NSMutableArray *_obstructionResults;
    NSMutableArray *_classificationResults;
    NSMutableArray *_fineActionResults;
    NSMutableArray *_faceResults;
    NSMutableArray *_results;
    float _sceneSwitchFrequency;
    long long _numOfFrames;
    CDStruct_1b6d18a9 _lastProcessTime;
    float _overallActivityLevel;
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSNumber *_sportsSceneId;
}

- (id)results;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (void)normalizeActivityDescriptor;
- (int)prepareActivityStats;
- (void)generateActivityDescriptor;
- (int)computeActivityScoreAtTime:(CDStruct_1b6d18a9)arg1;
- (void)resetActivityStatsAtTime:(CDStruct_1b6d18a9)arg1;
- (int)extractRequiredInfoFrom:(id)arg1 toArray:(id)arg2;
- (int)extractRequiredClassificationInfoFrom:(id)arg1 toArray:(id)arg2;
- (int)extractRequiredFaceInfoFrom:(id)arg1 toArray:(id)arg2;
- (float)validationScoreOfTimeRange:(CDStruct_e83c9415)arg1 fromResult:(id)arg2 startIdx:(int *)arg3;
- (float)actionScoreInTimeRange:(CDStruct_e83c9415)arg1;
- (void)validateActivityScores;
- (float)scaleBasedOnFaceForTimeRange:(CDStruct_e83c9415)arg1;
- (void)addSceneSwitchFrequencyConstributionToActivityLevel:(float *)arg1;
- (void)addSceneClassificationContributionToActivityLevel:(float *)arg1;
- (id)initWithFrameStats:(id)arg1;
- (int)preProcessQualityResults:(id)arg1 interestingnessResults:(id)arg2 obstructionResults:(id)arg3 classificationResults:(id)arg4 fineActionResults:(id)arg5 faceResults:(id)arg6 sceneSwitchFrequency:(float)arg7;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1 fpsRate:(float)arg2;

@end
