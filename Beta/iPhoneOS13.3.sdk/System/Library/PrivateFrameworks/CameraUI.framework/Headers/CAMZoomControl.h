/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIControl.h>

@class CAMFeedbackController, CAMZoomButton, CAMZoomButtonPlatter, CAMZoomControlButtonMaskView, CAMZoomDial, NSArray, NSDate, NSSet, NSString, NSTimer, UIView;

@protocol CAMZoomControlDelegate;

@interface CAMZoomControl : UIControl

{
    struct {
        _Bool respondsToDidChangeZoomFactor;
        _Bool respondsToCanToggleBetweenZoomFactors;
        _Bool respondsToToggleBetweenZoomFactors;
        _Bool respondsToCanPlayHaptics;
    } _delegateFlags;
    _Bool __zoomDialEnabled;
    _Bool __shouldShowZoomDial;
    _Bool __eligibleForSwipeDownToDismiss;
    id <CAMZoomControlDelegate> _delegate;
    long long _layoutStyle;
    double _zoomFactor;
    double _minAvailableZoomFactor;
    double _maxAvailableZoomFactor;
    long long _orientation;
    NSString *_contentSizeCategory;
    CAMZoomButton *__zoomButton;
    CAMZoomDial *__zoomDial;
    UIView *__dialClippingView;
    CAMZoomControlButtonMaskView *__buttonMaskView;
    CAMZoomButtonPlatter *__buttonPlatter;
    long long __zoomControlMode;
    NSArray *__zoomFactors;
    NSArray *__displayZoomFactors;
    double __previousTouchTime;
    NSTimer *__zoomDialVisibilityTimer;
    NSDate *__startTimeForHideAnimationInProgress;
    double __hideAnimationInProgressDuration;
    CAMZoomButton *__highlightedZoomButton;
    CAMFeedbackController *__feedbackController;
    NSArray *__significantHapticDisplayValues;
    NSArray *__significantHapticDisplayValueEpsilons;
    NSSet *__significantHapticDisplayValueSwitchOverIndexes;
    long long __lastHapticZone;
    double __snappedZoomFactor;
    double __unsnappingProgress;
    double _leftMargin;
    double _zoomButtonMaxYWhenContracted;
    double _zoomDialRadius;
    struct CGPoint __startTouchLocation;
    struct CGPoint __previousTouchLocation;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, readonly) CAMZoomButton *_zoomButton;
@property (nonatomic, readonly) CAMZoomDial *_zoomDial;
@property (nonatomic, readonly) UIView *_dialClippingView;
@property (nonatomic, readonly) CAMZoomControlButtonMaskView *_buttonMaskView;
@property (nonatomic, readonly) CAMZoomButtonPlatter *_buttonPlatter;
@property (nonatomic, setter=_setZoomControlMode:) long long _zoomControlMode;
@property (retain, nonatomic, setter=_setZoomFactors:) NSArray *_zoomFactors;
@property (retain, nonatomic, setter=_setDisplayZoomFactors:) NSArray *_displayZoomFactors;
@property (nonatomic, getter=_isZoomDialEnabled, setter=_setZoomDialEnabled:) _Bool _zoomDialEnabled;
@property (nonatomic, setter=_setShouldShowZoomDial:) _Bool _shouldShowZoomDial;
@property (nonatomic, readonly) _Bool _shouldHideZoomButtonBackground;
@property (nonatomic, readonly) double _displayMinimumZoomFactor;
@property (nonatomic, readonly) double _displayMaximumZoomFactor;
@property (nonatomic, readonly) double _displayZoomValue;
@property (nonatomic, readonly) NSArray *_switchOverZoomFactors;
@property (nonatomic, readonly) _Bool _shouldSnapDialToSwitchOverZoomFactors;
@property (nonatomic, readonly) _Bool _shouldUpdateZoomDialContentSizeCategory;
@property (nonatomic, readonly) _Bool _shouldUseZoomDialMask;
@property (nonatomic, readonly, getter=_isButtonPlatterSupportedForConfiguration) _Bool _buttonPlatterSupportedForConfiguration;
@property (nonatomic, readonly) _Bool _shouldShowButtonPlatter;
@property (nonatomic, setter=_setStartTouchLocation:) struct CGPoint _startTouchLocation;
@property (nonatomic, setter=_setPreviousTouchLocation:) struct CGPoint _previousTouchLocation;
@property (nonatomic, setter=_setPreviousTouchTime:) double _previousTouchTime;
@property (nonatomic, getter=_isEligibleForSwipeDownToDismiss, setter=_setEligibleForSwipeDownToDismiss:) _Bool _eligibleForSwipeDownToDismiss;
@property (retain, nonatomic, setter=_setZoomDialVisibilityTimer:) NSTimer *_zoomDialVisibilityTimer;
@property (retain, nonatomic, setter=_setStartTimeForHideAnimationInProgress:) NSDate *_startTimeForHideAnimationInProgress;
@property (nonatomic, setter=_setHideAnimationInProgressDuration:) double _hideAnimationInProgressDuration;
@property (retain, nonatomic, setter=_setHighlightedZoomButton:) CAMZoomButton *_highlightedZoomButton;
@property (nonatomic, readonly) CAMFeedbackController *_feedbackController;
@property (retain, nonatomic, setter=_setSignificantHapticDisplayValues:) NSArray *_significantHapticDisplayValues;
@property (retain, nonatomic, setter=_setSignificantHapticDisplayValueEpsilons:) NSArray *_significantHapticDisplayValueEpsilons;
@property (retain, nonatomic, setter=_setSignificantHapticDisplayValueSwitchOverIndexes:) NSSet *_significantHapticDisplayValueSwitchOverIndexes;
@property (nonatomic) long long _lastHapticZone;
@property (nonatomic, setter=_setSnappedZoomFactor:) double _snappedZoomFactor;
@property (nonatomic, setter=_setUnsnappingProgress:) double _unsnappingProgress;
@property (nonatomic) double leftMargin;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) double zoomButtonMaxYWhenContracted;
@property (nonatomic, readonly) double zoomDialBorderWidth;
@property (nonatomic) double zoomDialRadius;
@property (nonatomic) double zoomDialContentMaskingHeight;
@property (weak, nonatomic) id <CAMZoomControlDelegate> delegate;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) long long zoomButtonContentType;
@property (nonatomic) double zoomFactor;
@property (nonatomic, readonly) double minimumZoomFactor;
@property (nonatomic, readonly) double maximumZoomFactor;
@property (nonatomic, readonly) long long zoomButtonSymbol;
@property (nonatomic) double minAvailableZoomFactor;
@property (nonatomic) double maxAvailableZoomFactor;
@property (nonatomic) long long orientation;
@property (nonatomic) NSString *contentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_updateZoomButtonTappableEdgeInsets;
- (void)_updateSubviewsAlphasWithDuration:(double)arg1 forConfigurationChange:(_Bool)arg2;
- (void)configureForToggleOnlyWithZoomFactor:(double)arg1 displayZoomFactor:(double)arg2;
- (double)_displayZoomValueForZoomFactor:(double)arg1;
- (void)_resetSnapping;
- (void)_updateDisplayedValuesAnimated:(_Bool)arg1;
- (void)_configureForControlMode:(long long)arg1 zoomFactor:(double)arg2 zoomFactors:(id)arg3 displayZoomFactors:(id)arg4 zoomButtonContentType:(long long)arg5 animated:(_Bool)arg6;
- (void)_updateSignificantValuesForHaptics;
- (void)_setZoomFactor:(double)arg1 interactionType:(long long)arg2 shouldNotifyDelegate:(_Bool)arg3;
- (void)_updateHaptics:(_Bool)arg1;
- (void)setLeftMargin:(double)arg1 animated:(_Bool)arg2;
- (void)_updateHapticEpsilons;
- (void)_setZoomDialEnabled:(_Bool)arg1 animationDuration:(long long)arg2;
- (void)_setShouldShowZoomDial:(_Bool)arg1 animationDuration:(long long)arg2;
- (void)_cancelDelayedZoomDialVisibilityChange;
- (void)_setShouldShowZoomDial:(_Bool)arg1 animationDuration:(long long)arg2 afterDelay:(double)arg3;
- (void)_handleZoomDialVisibilityTimerFiredWithUserInfo:(id)arg1;
- (void)_updateMaskViewForZoomButtonHighlightingTransform;
- (double)_distanceFromDialClippingViewToPoint:(struct CGPoint)arg1;
- (double)_dampingFactorForDistanceFromDialForPoint:(struct CGPoint)arg1;
- (double)_dampingFactorForPerpendicularityFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (double)_normalizeValue:(double)arg1 betweenMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (double)_additionalAccelerationForMovementFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 deltaX:(double)arg3;
- (_Bool)_isPointWithinButtonPlatter:(struct CGPoint)arg1;
- (_Bool)_shouldInterceptTouchesForHidingZoomDial;
- (_Bool)_isWithinZoomButtonBoundsWithTouch:(id)arg1;
- (_Bool)_isTouchWithinButtonPlatter:(id)arg1;
- (double)_dampingFactorForMovementFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (double)_accelerationForMovementFromPointFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 elapsedTime:(double)arg3;
- (double)_zoomFactorForDisplayZoomValue:(double)arg1;
- (void)_cleanupForCancelTracking;
- (void)_handleButtonTapped:(id)arg1;
- (void)_handleButtonTappedForDualCameraMode;
- (void)_handleButtonTappedForTripleCameraMode:(id)arg1;
- (void)_handleButtonTappedForSelection:(id)arg1;
- (void)_handleButtonTappedForSingleCameraZoomPlusToggle;
- (long long)_hapticZoneForDisplayValue:(double)arg1;
- (void)zoomButtonDidLayout;
- (void)configureForTripleDeviceWithZoomFactor:(double)arg1 minimumZoomFactor:(double)arg2 displayMinimumZoomFactor:(double)arg3 maximumZoomFactor:(double)arg4 displayMaximumZoomFactor:(double)arg5 switchOverZoomFactor1:(double)arg6 displaySwitchOverZoomFactor1:(double)arg7 switchOverZoomFactor2:(double)arg8 displaySwitchOverZoomFactor2:(double)arg9;
- (void)configureForDualDeviceWithZoomFactor:(double)arg1 minimumZoomFactor:(double)arg2 displayMinimumZoomFactor:(double)arg3 maximumZoomFactor:(double)arg4 displayMaximumZoomFactor:(double)arg5 dualCameraSwitchOverZoomFactor:(double)arg6 displayDualCameraSwitchOverZoomFactor:(double)arg7;
- (void)configureForSingleCameraPlusToggleWithZoomFactor:(double)arg1 minimumZoomFactor:(double)arg2 displayMinimumZoomFactor:(double)arg3 maximumZoomFactor:(double)arg4 displayMaximumZoomFactor:(double)arg5;
- (void)configureForToggleOnlyWithZoomFactor:(double)arg1 minimumZoomFactor:(double)arg2 displayMinimumZoomFactor:(double)arg3 maximumZoomFactor:(double)arg4 displayMaximumZoomFactor:(double)arg5;
- (void)configureForSelectionOnlyWithDisplayZoomFactors:(id)arg1 selectedIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)configureForZoomSymbolToggle;
- (void)setZoomButtonSymbol:(long long)arg1 animated:(_Bool)arg2;
- (void)setShouldShowZoomDial:(_Bool)arg1 animationDuration:(long long)arg2;

@end
