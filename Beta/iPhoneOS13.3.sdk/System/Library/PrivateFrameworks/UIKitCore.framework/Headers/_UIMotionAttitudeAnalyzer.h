/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIMotionAnalyzer.h>

@class NSString, UILabel, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIMotionAttitudeAnalyzer : _UIMotionAnalyzer

{
    double _smoothingDegree;
    double _referenceShiftSpeed;
    double _distanceMultiplier;
    _Bool _hasReferenceQuaternion;
    union _GLKQuaternion _referenceQuaternion;
    union _GLKQuaternion _absoluteQuaternion;
    double _lastUpdate;
    double _idleStartTime;
    struct UIOffset _idleStartOffset;
    double _jumpThreshold;
    double _idleLeeway;
    double _secondsBeforeIdle;
    double _lockValue;
    double _lockStrength;
    UIWindow *_diagnosticsWindow;
    UILabel *_idleIndicator;
    UIView *_horizontalLockIndicator;
    UIView *_verticalLockIndicator;
    _Bool _hasHistory;
    struct UIOffset _lastAppliedViewerOffset;
    union _GLKQuaternion _lastAppliedRelativeQuaternion;
    _Bool _isApplyingHysteresis;
    union _GLKQuaternion _relativeQuaternionOnHysteresisEntry;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reset;
- (id)initWithSettings:(id)arg1;
- (void)updateWithEvent:(id)arg1;
- (_Bool)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(_Bool)arg3 returningShouldToggleSlowUpdates:(_Bool *)arg4 logger:(id)arg5;
- (void)updateHistory;
- (void)resetHysteresis;
- (void)_updateSettings;
- (void)_tearDownDiagnosticsWindow;
- (void)_tearDownDirectionLockIndicators;
- (void)_tearDownIdleIndicator;
- (struct UIOffset)_currentRawOffset:(union _GLKQuaternion)arg1;
- (void)_updateSmoothedOffsetForRawOffset:(struct UIOffset)arg1;
- (void)_updateIdleStateForRawOffset:(struct UIOffset)arg1 timestamp:(double)arg2;
- (void)_updateReferenceAttitude:(union _GLKQuaternion)arg1 timestamp:(double)arg2;
- (void)_resetDirectionalLockWithViewerOffset:(struct UIOffset)arg1;
- (void)_updateDirectionalLockIndicators;
- (void)_updateAcceleratedOutputRangeFixingOffset:(struct UIOffset)arg1;
- (long long)_directionLockStatus;
- (_Bool)_isIdleGivenTimestamp:(double)arg1;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;
- (void)_showIdleUI:(_Bool)arg1;
- (_Bool)_shouldSuspendApplicationForHysteresisGivenNewViewerOffset:(struct UIOffset)arg1 wasSuspendingApplicationForHysteresis:(_Bool)arg2;
- (void)_shiftReferenceToYieldRelativeQuaternion:(union _GLKQuaternion)arg1;
- (union _GLKQuaternion)_relativeQuaternion;
- (void)_createIdleIndicator;
- (void)_createDirectionLockIndicators;
- (void)_createDiagnosticsWindow;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)_directionLockStrength;

@end
