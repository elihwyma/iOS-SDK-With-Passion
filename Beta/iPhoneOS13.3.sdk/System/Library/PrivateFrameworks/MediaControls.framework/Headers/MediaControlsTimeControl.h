/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <UIKit/UIControl.h>

@class AVTimeFormatter, CADisplayLink, CAGradientLayer, MPCPlayerResponse, MPCPlayerResponseItem, MTVisualStylingProvider, NSArray, NSLayoutConstraint, NSString, UILabel, UILayoutGuide, UIView;

__attribute__((visibility("hidden")))
@interface MediaControlsTimeControl : UIControl

{
    NSArray *_defaultConstraints;
    NSArray *_trackingConstraints;
    NSArray *_initialConstraints;
    NSLayoutConstraint *_knobViewXConstraint;
    CADisplayLink *_displayLink;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    double _lastRecordedTime;
    double _currentTimeInTrack;
    NSString *_elapsedTime;
    NSString *_remainingTime;
    _Bool _debugPreviousDisplayLinkPaused;
    _Bool _transitioning;
    _Bool _empty;
    _Bool _timeControlOnScreen;
    _Bool _currentlyTracking;
    long long _style;
    MPCPlayerResponse *_response;
    MPCPlayerResponseItem *_responseItem;
    MTVisualStylingProvider *_visualStylingProvider;
    UIView *_elapsedTrack;
    UIView *_remainingTrack;
    UIView *_knobView;
    UILabel *_elapsedTimeLabel;
    UILabel *_remainingTimeLabel;
    UILabel *_liveLabel;
    UIView *_liveBackground;
    CAGradientLayer *_liveBackgroundMask;
    UILayoutGuide *_trackLayoutGuide;
    double _sliderValue;
    CDStruct_fce57115 _durationSnapshot;
}

@property (retain, nonatomic) UIView *elapsedTrack;
@property (retain, nonatomic) UIView *remainingTrack;
@property (retain, nonatomic) UIView *knobView;
@property (retain, nonatomic) UILabel *elapsedTimeLabel;
@property (retain, nonatomic) UILabel *remainingTimeLabel;
@property (retain, nonatomic) UILabel *liveLabel;
@property (retain, nonatomic) UIView *liveBackground;
@property (retain, nonatomic) CAGradientLayer *liveBackgroundMask;
@property (retain, nonatomic) UILayoutGuide *trackLayoutGuide;
@property (nonatomic) double sliderValue;
@property (nonatomic, getter=isCurrentlyTracking) _Bool currentlyTracking;
@property (nonatomic, getter=isTransitioning) _Bool transitioning;
@property (nonatomic, getter=isEmpty) _Bool empty;
@property (nonatomic) long long style;
@property (retain, nonatomic) MPCPlayerResponse *response;
@property (retain, nonatomic) MPCPlayerResponseItem *responseItem;
@property (nonatomic) CDStruct_fce57115 durationSnapshot;
@property (nonatomic, getter=isTimeControlOnScreen) _Bool timeControlOnScreen;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)_updateStyle;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_displayLinkTick:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)_updateTimeControl;
- (void)updateSliderConstraint;
- (void)updateBackgroundMask;
- (void)_updateSliderPosition;
- (void)_updateLabels:(double)arg1 withRemainingDuration:(double)arg2;
- (void)_updateDisplayLinkPause;
- (void)updateLabelAvoidance;
- (void)createDisplayLinkIfNeeded;
- (void)invalidateDisplayLinkIfNeeded;
- (void)_updateLabels:(CDStruct_fce57115)arg1 withTargetTimestamp:(double)arg2;

@end
