/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSData, NSMutableArray;

@interface FigIrisAutoTrimmer : NSObject

{
    _Bool _motionAvailable;
    CDStruct_bf7dff04 _captureMotionDelta;
    double _captureMotionDeltaPeriod;
    _Bool _haveCaptureMotionDelta;
    CDStruct_bf7dff04 _lastAttitude;
    CDStruct_bf7dff04 _lastDelta;
    double _lastCheckedTimestamp;
    int _lastStatus;
    int _svmKernelType;
    int _svmVectorCount;
    int _svmParamCount;
    float _svmRBFRho;
    float _svmRBFGamma;
    NSArray *_svmKeys;
    NSData *_svmNormalization;
    NSData *_svmVectors;
    NSMutableArray *_motionSamples;
    unsigned long long _estimatedIntermediatesCount;
    _Bool _intermediateLoggingEnabled;
    CDStruct_1b6d18a9 _maxHoldDuration;
    long long _maxHoldFrames;
    double _bufferHistorySeconds;
    double _motionSampleRate;
    unsigned long long _nominalHistorySize;
    _Bool _vitalityScoringEnabled;
    CDStruct_08002bce _vitalityScoringSmartCameraPipelineVersion;
}

@property (nonatomic, readonly) _Bool trimmingActive;
@property (nonatomic, readonly) unsigned int vitalityScoringVersion;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)setVideoFrameRate:(double)arg1;
- (double)videoFrameRate;
- (void)setVitalityScoringEnabled:(_Bool)arg1;
- (void)setBufferHistorySeconds:(double)arg1;
- (void)setMaxHoldDuration:(CDStruct_1b6d18a9)arg1;
- (void)setVitalityScoringSmartCameraPipelineVersion:(CDStruct_08002bce)arg1;
- (void)startMotionProcessing;
- (void)stopMotionProcessing;
- (float)computeVitalityScoreForStillImageHostPTS:(CDStruct_1b6d18a9)arg1 movieRange:(struct)arg2;
- (int)emissionStatusForHostPTS:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)beginTrimmingForStillImageHostPTS:(CDStruct_1b6d18a9)arg1 minimumPTS:(CDStruct_1b6d18a9)arg2;
- (void)processISPMotionData:(id)arg1 forHostTime:(CDStruct_1b6d18a9)arg2;
- (void)processCountOfVisibleVitalityObjects:(int)arg1 forHostTime:(CDStruct_1b6d18a9)arg2;
- (void)processInferences:(id)arg1 forHostTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_08002bce)vitalityScoringSmartCameraPipelineVersion;
- (_Bool)vitalityScoringEnabled;
- (void)_initSVM:(id)arg1 fromFile:(id)arg2;
- (void)_processMotionSample:(const CDStruct_bf7dff04 *)arg1 gravity:(const CDStruct_869f9c67 *)arg2 motionTimestamp:(double)arg3 frameTimestamp:(CDStruct_1b6d18a9)arg4 metadata:(id)arg5;
- (_Bool)_checkSamplesContainHostTime:(CDStruct_1b6d18a9)arg1;
- (long long)_findClosestIndexToHostTime:(CDStruct_1b6d18a9)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3;
- (double)_timeoutThreshold;
- (long long)_findClosestIndexToOffset:(double)arg1 atLeastOneFromIndex:(long long)arg2 limitIndex:(long long)arg3;
- (_Bool)_shouldCut:(id)arg1 withLookahead:(id)arg2 withLookback:(id)arg3;
- (float)_computeVitalityFrom:(long long)arg1 to:(long long)arg2;
- (long long)_findClosestIndexToTimestamp:(double)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3;
- (double)_directionalWeightForSample:(id)arg1;
- (_Bool)_isUnstable:(id)arg1 withLookback:(id)arg2;
- (_Bool)_shouldCutUnstable:(id)arg1 withLookahead:(id)arg2;
- (_Bool)_shouldCutSVM:(id)arg1;
- (void)_updateStorageStats;
- (double)_getHostTime;
- (CDStruct_1b6d18a9)maxHoldDuration;
- (double)bufferHistorySeconds;
- (_Bool)intermediateLoggingEnabled;
- (void)setIntermediateLoggingEnabled:(_Bool)arg1;
- (id)exportMotionSamples;

@end
