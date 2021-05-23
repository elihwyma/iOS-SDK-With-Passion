/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray, VCPFrameAnalysisStats, VCPImageHumanPoseAnalyzer, VCPVideoObjectTracker;

__attribute__((visibility("hidden")))
@interface VCPVideoHumanActionAnalyzer : VCPVideoAnalyzer

{
    VCPImageHumanPoseAnalyzer *_poseAnalyzer;
    CDStruct_1b6d18a9 _timeLastProcess;
    CDStruct_1b6d18a9 _timeLastProcessFullFrame;
    NSMutableArray *_bodyArray;
    float _maxScore;
    CDStruct_1b6d18a9 _endTime;
    CDStruct_1b6d18a9 _startTime;
    NSMutableArray *_actionResults;
    NSMutableArray *_keyPersonResults;
    NSMutableArray *_poseResults;
    NSMutableArray *_activePoseResults;
    struct CGRect _crop;
    struct CGRect _humanRect;
    float _actionScoreAbsolute;
    float _actionScoreRelative;
    float _scoreAbsoluteMax;
    float _scoreRelativeMax;
    float _humanPoseScore;
    CDStruct_1b6d18a9 _lastHumanTimestamp;
    VCPFrameAnalysisStats *_frameStats;
    VCPVideoObjectTracker *_tracker;
    _Bool _tracking;
}

- (id)results;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (id)privateResults;
- (float)normDistance:(id)arg1 point2:(id)arg2;
- (void)computeVar:(int)arg1 index2:(int)arg2 interVar:(float *)arg3 intraVar:(float *)arg4;
- (struct CGRect)scaleRect:(struct CGRect)arg1 scaleX:(float)arg2 scaleY:(float)arg3;
- (void)computeActionScore;
- (float)intersectionOverUnion:(struct CGRect)arg1 rect:(struct CGRect)arg2;
- (void)addActiveResults:(CDStruct_1b6d18a9)arg1;
- (int)processPersons:(id)arg1 humanBounds:(id)arg2 dominantPersonIdx:(int)arg3 frame:(struct __CVBuffer *)arg4 timestamp:(CDStruct_1b6d18a9)arg5 duration:(CDStruct_1b6d18a9)arg6;
- (id)initWithFrameStats:(id)arg1;

@end
