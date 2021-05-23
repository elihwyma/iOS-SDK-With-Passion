/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPLightMotionAnalyzer : VCPVideoAnalyzer

{
    struct EncodeAnalysis *_encodeAnalysis;
    NSObject<OS_dispatch_queue> *_queue;
    struct Frame _frame;
    struct EncodeStatsHW *_stats;
    float _cameraMotionParams[6][5];
    float _cameraMotionConfidences[6][5];
    unsigned long long _flags;
    _Bool _turbo;
    float _actionScore;
}

@property (readonly) float actionScore;

+ (float)autoLiveMotionScore:(id)arg1;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)cameraMotionDetection:(struct MotionResult *)arg1;
- (int)generateThresholds:(float [6])arg1 withConfidences:(float [6])arg2;
- (id)initWithQueue:(id)arg1 turbo:(_Bool)arg2;
- (int)prewarmWithWidth:(int)arg1 height:(int)arg2;
- (void)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 completion:(CDUnknownBlockType)arg4;

@end
