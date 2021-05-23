/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFigVideoCaptureStream;

@interface BWBravoStreamSelector : NSObject

{
    BWFigVideoCaptureStream *_wideStream;
    BWFigVideoCaptureStream *_teleStream;
    BWFigVideoCaptureStream *_superWideStream;
    float _teleMaxAEGain;
    float _teleAEGainHysteresisLag;
    int _teleToWideFocusDistance;
    int _wideToTeleFocusDistance;
    _Bool _usesLensMakersFocusDistance;
    int _teleMaxSubsequentFramesAtMaxGain;
    BWFigVideoCaptureStream *_currentMasterStream;
    BWFigVideoCaptureStream *_recommendedMasterStream;
    int _selectionBehavior;
    BWFigVideoCaptureStream *_slaveStreamBlockingFocusAndExposureStability;
    _Bool _ignoreFocusAndExposureStability;
    _Bool _allowSwitchesWithFineMovement;
    float _previousZoomFactor;
    int _numberOfFramesSinceLastZoomFactorChange;
    int _waitForFocusFrameCounter;
    int _teleMaxGainReachedCounter;
    float _minFocusDistanceChangeForSceneChange;
    float _minLuxLevelChangeForSceneChange;
    _Bool _resetSceneChangeMonitoring;
    _Bool _sceneChangeDetected;
    int _initialLuxLevel;
    float _initialFocusDistance;
    _Bool _lockWhenExposureAndFocusAreStable;
    BWFigVideoCaptureStream *_lockedStream;
}

@property (nonatomic, readonly, getter=isLensMakersFocusDistanceRequired) _Bool lensMakersFocusDistanceRequired;
@property (nonatomic) float teleMaxAEGain;
@property (nonatomic) int selectionBehavior;
@property (nonatomic, readonly) BWFigVideoCaptureStream *slaveStreamBlockingFocusAndExposureStability;
@property (nonatomic) _Bool ignoreFocusAndExposureStability;

+ (void)initialize;

- (void)dealloc;
- (void)unlock;
- (void)_updateSceneChangeMonitorWithFrameStatisticsByPortType:(id)arg1 fromMasterStream:(id)arg2 zoomFactor:(float)arg3;
- (id)_preferredMasterStreamForFrameStatisticsByPortType:(id)arg1;
- (_Bool)_selectionBehaviorAllowsSwitchOverTo:(id)arg1 forFrameStatisticsByPortType:(id)arg2 zoomFactor:(float)arg3 blockedByExposureFocusStability:(_Bool *)arg4;
- (void)_attemptLockWithFrameStatistics:(id)arg1;
- (_Bool)telephotoLimitsReachedForFrameStatistiscsByPortType:(id)arg1;
- (_Bool)_focusIsStable:(id)arg1;
- (_Bool)_exposureAndFocusStableForSwitchOverTo:(id)arg1 forFrameStatisticsByPortType:(id)arg2;
- (id)initWithStreamSelectionAttributes:(id)arg1 wideStream:(id)arg2 teleStream:(id)arg3 superWideStream:(id)arg4;
- (void)resetWithZoomFactor:(float)arg1 currentMasterStream:(id)arg2;
- (id)recommendMasterStreamUsingCurrentMasterStream:(id)arg1 frameStatisticsByPortType:(id)arg2 zoomFactor:(float)arg3;
- (void)lockWhenExposureAndFocusAreStable;

@end
