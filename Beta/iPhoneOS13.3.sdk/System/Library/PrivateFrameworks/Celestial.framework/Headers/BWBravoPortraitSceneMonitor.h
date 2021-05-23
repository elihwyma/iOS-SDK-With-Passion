/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface BWBravoPortraitSceneMonitor : NSObject

{
    float _backgroundShiftSumFiltered;
    float _invalidShiftRatioFiltered;
    _Bool _oneShotFocusScanInProgress;
    _Bool _focusLocked;
    int _numFramesSinceFocusLocked;
    _Bool _focusStableAfterStartStreaming;
    _Bool _focusAdjusting;
    int _lastFocusingMethod;
    int _numFramesSinceFocusBecameStable;
    _Bool _aeStableAfterStartStreaming;
    int _numFramesSinceAEBecameStable;
    _Bool _useLensMakersFocusDistance;
    _Bool _subjectTooCloseMonitoringEnabled;
    _Bool _subjectIsTooClose;
    float _subjectTooCloseWideFocusDistanceThreshold;
    float _subjectTooCloseWideFocusDistanceHysteresisLag;
    int _subjectTooCloseLastWideFocusPosition;
    _Bool _subjectTooFarMonitoringEnabled;
    _Bool _subjectTooFarDistanceThresholdReached;
    float _subjectTooFarFocusDistanceThreshold;
    float _subjectTooFarFocusDistanceHysteresisLag;
    float _subjectTooFarFocusDistanceInfinityThreshold;
    _Bool _subjectTooFarUseTeleForFocusDistance;
    _Bool _subjectTooFarBackgroundShiftSumIsTooLow;
    int _subjectTooFarBackgroundShiftTooLowNumFrames;
    float _subjectTooFarBackgroundShiftSumTooLowThreshold;
    float _subjectTooFarBackgroundShiftSumTooLowHysteresisLag;
    float _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioStart;
    float _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioEnd;
    int _subjectTooFarLastTeleFocusPosition;
    _Bool _sceneTooDarkMonitoringEnabled;
    _Bool _sceneIsTooDark;
    _Bool _sceneTooDarkExposureThresholdReached;
    float _sceneTooDarkGainThreshold;
    float _sceneTooDarkGainHysteresisLag;
    float _sceneTooDarkInvalidShiftRatioThreshold;
    float _sceneTooDarkInvalidShiftRatioHysteresisLag;
    _Bool _stageFaceMonitoringEnabled;
    _Bool _stageFaceDetected;
    int _stageFaceNumberOfFramesSinceLastFace;
    _Bool _stageFaceHasBeenSeen;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    NSArray *_stageMostRecentFaces;
    _Bool _portraitSceneMonitoringRequiresStageThresholds;
    float _stageTooFarFocusDistanceThreshold;
    _Bool _stageSubjectTooFarDistanceThresholdReached;
    int _stageTooFarBackgroundShiftTooLowNumFrames;
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

@end
