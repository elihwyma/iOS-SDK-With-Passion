/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface BWPearlPortraitSceneMonitor : NSObject

{
    int _numberOfFramesToWaitForAEAndLTMToStabilize;
    float _sdofDepthQualitySmoothingFactor;
    float _luxLevelSmoothingFactor;
    unsigned short _sdofTooBrightLuxLevelThreshold;
    unsigned short _sdofTooBrightMaxLuxLevelThreshold;
    float _sdofTooBrightDepthQualityMinThreshold;
    float _sdofDepthQualityKCount;
    float _sdofTooCloseDepthDistanceThreshold;
    float _sdofTooFarDepthDistanceThreshold;
    float _sdofTooBrightTooFarDepthDistanceThreshold;
    int _sdofNumberOfFramesSinceLastFaceThreshold;
    float _stageTooBrightDepthQualityThreshold;
    float _stageTooCloseDepthDistanceThreshold;
    float _stageTooFarDepthDistanceThreshold;
    float _stageBackgroundTooFarDepthQualityThreshold;
    unsigned short _stageBackgroundTooFarLuxLevelThreshold;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    _Bool _disablePreviewWhenTooBright;
    float _closeDepthDistanceAverage;
    float _sdofDepthQuality;
    float _sdofDepthQualityFiltered;
    float _stageDepthQuality;
    float _luxLevelFiltered;
    _Bool _aeStableAfterStartStreaming;
    int _sdofNumFramesSinceAEBecameStable;
    _Bool _portraitSceneMonitoringRequiresStageThresholds;
    _Bool _depthSensorOccluded;
    _Bool _stageFaceDetected;
    int _numberOfFramesSinceLastFace;
    _Bool _stageFaceHasBeenSeen;
    int _stageMostRecentFacesCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool portraitSceneMonitoringRequiresStageThresholds;
@property (nonatomic, readonly) float focusDistanceToMaxAllowedFocusDistanceRatio;

+ (void)initialize;

- (void)dealloc;
- (void)setAutoFocusInProgress:(_Bool)arg1 focusLocked:(_Bool)arg2 oneShotFocusScanInProgress:(_Bool)arg3;
- (void)focusScanDidComplete;
- (void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(_Bool)arg7 faces:(id)arg8;
- (_Bool)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 frameStatisticsByPortType:(id)arg2 sceneFlags:(unsigned long long)arg3 flashWillFire:(_Bool)arg4 effectStatus:(int *)arg5 stagePreviewStatus:(int *)arg6;
- (id)initWithTuningParameters:(id)arg1 attachDebugFrameStatistics:(_Bool)arg2;

@end
