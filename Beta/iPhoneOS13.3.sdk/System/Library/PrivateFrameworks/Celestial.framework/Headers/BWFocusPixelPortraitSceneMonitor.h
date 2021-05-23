/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWTrackedFace, NSString;

@interface BWFocusPixelPortraitSceneMonitor : NSObject

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
    float _numFacesDetectedFiltered;
    _Bool _subjectTooCloseMonitoringEnabled;
    _Bool _subjectIsTooClose;
    float _subjectTooCloseFocusDistanceThreshold;
    float _subjectTooCloseFocusDistanceHysteresisLag;
    int _subjectTooCloseLastFocusPosition;
    _Bool _subjectTooFarMonitoringEnabled;
    _Bool _subjectTooFarDistanceThresholdReached;
    float _subjectTooFarFocusDistanceThreshold;
    float _subjectTooFarFocusDistanceHysteresisLag;
    int _subjectTooFarLastFocusPosition;
    _Bool _useAPSFocusDistance;
    _Bool _sceneTooDarkMonitoringEnabled;
    _Bool _sceneIsTooDark;
    int _lastSDOFEffectStatus;
    float _lastFocusDistance;
    BWTrackedFace *_currentlyTrackedFace;
    _Bool _enabled;
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
- (float)_focusDistanceFromAPSMetadata:(id)arg1;
- (float)_focusDistanceFromFacesAttachedToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
