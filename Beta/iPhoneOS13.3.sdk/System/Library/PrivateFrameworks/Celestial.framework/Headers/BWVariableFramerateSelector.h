/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWVariableFramerateSelector : NSObject

{
    float _suggestedFrameRate;
    float _suggestedAEMaxGain;
    int _mode;
    unsigned int _highLightModeLuxThreshold;
    unsigned int _luxThresholds[3];
    float _luxFramerates[3];
    float _llAEMaxGains[3];
    float _motionThreshold;
    _Bool _lastStabilityFlag;
    struct BWSmartCameraScene _motionXSmartScene;
    struct BWSmartCameraScene _motionXRapidSmartScene;
    struct BWSmartCameraScene _motionYSmartScene;
    struct BWSmartCameraScene _motionAttitudeBased;
    float _hysteresisRatioThreshold;
    float _underExposureStops;
    float _movingCameraFrameRateCap;
    CDStruct_bf7dff04 _lastQuaternion;
    CDStruct_bf7dff04 _lastQuaternionDiff;
    struct {
        int reason;
        float fromFR;
        float toFR;
        int lux;
        CDStruct_1b6d18a9 time;
    } _state;
}

@property (nonatomic, readonly) float suggestedFrameRate;
@property (nonatomic, readonly) float suggestedAEMaxGain;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)_loadDefaults;
- (void)_updateSuggestedFrameRateFromLuxLevel:(unsigned int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2 frameRate:(float)arg3 exposureTargetOffset:(float)arg4 aeMaxGain:(float)arg5;
- (void)_updateMotionDataFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_updateSmartSceneFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)_getSceneStabilityFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_updateStateWithFramerate:(float)arg1 reason:(int)arg2 luxLevel:(unsigned int)arg3 currentFramerate:(float)arg4;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 luxLevel:(unsigned int)arg2 frameRate:(float)arg3 exposureTargetOffset:(float)arg4 aeMaxGain:(float)arg5;
- (id)frameRateChangeDescription;
- (id)dynamicStabilityDescription;
- (id)stabilityDecisionDescription;

@end
