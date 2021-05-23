/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface BWBravoPortraitSceneMonitorV2 : NSObject

{
    int _numberOfFramesWithStableFocusThreshold;
    _Bool _oneShotFocusScanInProgress;
    _Bool _focusLocked;
    int _numFramesSinceFocusLocked;
    int _numFramesSinceFocusBecameStable;
    _Bool _focusHasBeenAttainedAfterStart;
    int _numFramesSinceFocusFirstAttainedStability;
    _Bool _focusIsStationaryBeyondThreshold;
    _Bool _subjectTooCloseMonitoringEnabled;
    float _subjectTooCloseFocusDistanceThreshold;
    float _subjectTooCloseHysteresis;
    _Bool _subjectIsTooClose;
    _Bool _subjectTooClosePreviousFrame;
    _Bool _subjectTooFarMonitoringEnabled;
    float _subjectTooFarFocusDistanceThreshold;
    float _subjectTooFarBackgroundShiftSumTooLowThreshold;
    _Bool _subjectTooFarDistanceThresholdReached;
    float _subjectTooFarDistanceThresholdHysteresis;
    _Bool _backgroundShiftSumTooLowThresholdReached;
    float _subjectTooFarBackGroundShiftSumIsTooLowHysteresis;
    _Bool _subjectIsTooFar;
    _Bool _subjectIsTooFarForStage;
    _Bool _subjectIsTooFarForStageNoFaces;
    _Bool _deliveryOfShiftsHasStarted;
    float _backgroundShiftSumSmoothed;
    float _backgroundShiftSumSmoothingTrend;
    float _backgroundShiftSumSmoothingFactor;
    float _backgroundShiftSumSmoothingTrendUpdateFactor;
    float _invalidShiftRatioSmoothed;
    float _invalidShiftRatioSmoothingFactor;
    _Bool _sceneTooDarkMonitoringEnabled;
    float _sceneTooDarkGainThreshold;
    float _sceneTooDarkAEAverageAETargetFractionThreshold;
    float _sceneTooDarkAEAverageAETargetFractionThresholdHysteresisLag;
    _Bool _sceneIsTooDark;
    _Bool _stageFaceMonitoringEnabled;
    int _stageFaceNumberOfFramesSinceLastFace;
    _Bool _stageFaceHasBeenSeen;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    NSArray *_stageMostRecentFaces;
    _Bool _portraitSceneMonitoringRequiresStageThresholds;
    _Bool _stageTooFarMonitoringEnabled;
    float _stageTooFarFocusDistanceThreshold;
    _Bool _stageTooFarDistanceThresholdReached;
    float _stageTooFarDistanceThresholdHysteresis;
    _Bool _stageBackgroundShiftSumTooLowThresholdReached;
    float _stageTooFarBackgroundShiftSumTooLowThreshold;
    float _stageTooFarBackGroundShiftSumIsTooLowHysteresis;
    _Bool _stageTooFarBackgroundShiftSumNoFacesIsTooLow;
    float _stageTooFarBackgroundShiftSumNoFacesThreshold;
    int _lastSDOFEffectStatus;
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
- (void)doubleExponentialSmoothing:(float)arg1 smoothValue:(float *)arg2 trendValue:(float *)arg3 dataFactor:(float)arg4 trendFactor:(float)arg5;

@end
