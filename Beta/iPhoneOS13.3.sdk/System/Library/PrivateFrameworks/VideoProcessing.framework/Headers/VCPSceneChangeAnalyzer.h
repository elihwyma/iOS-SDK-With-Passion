/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray, VCPSceneChangeSegment;

__attribute__((visibility("hidden")))
@interface VCPSceneChangeAnalyzer : VCPVideoAnalyzer

{
    float _sceneDeltaBuffer[10];
    struct FrameBuffer _frameBuffer;
    VCPSceneChangeSegment *_activeSegment;
    NSMutableArray *_sceneSegments;
    _Bool _verbose;
    _Bool _firstFrame;
    CDStruct_e83c9415 _frameTimeRange;
    _Bool _currentStatus;
    _Bool _isSegmentPoint;
}

- (id)init;
- (id)results;
- (id).cxx_construct;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (void)ComputeSceneDelta:(struct Frame *)arg1;
- (_Bool)decideLensSwitchPoint:(struct Frame *)arg1;
- (void)PrintSegments;
- (int)finalizeAnalysisPass:(CDStruct_e83c9415)arg1;
- (_Bool)isSegmentPoint;

@end
