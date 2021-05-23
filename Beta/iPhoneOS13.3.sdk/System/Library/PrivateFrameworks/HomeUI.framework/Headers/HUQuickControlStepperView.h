/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUQuickControlStepperViewProfile, NSArray, NSNumber, NSString, UIImpactFeedbackGenerator, UILongPressGestureRecognizer;

@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlStepperView : UIView

{
    _Bool _userInteractionActive;
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;
    HUQuickControlStepperViewProfile *_profile;
    unsigned long long _reachabilityState;
    UIView *_backgroundView;
    NSArray *_segmentViews;
    NSArray *_separatorViews;
    NSNumber *_selectedSegmentIndex;
    UILongPressGestureRecognizer *_gestureRecognizer;
    double _accumulatedTouchDistance;
    NSNumber *_trackingSegmentIndex;
    NSArray *_constraints;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    struct CGPoint _lastTouchLocation;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSArray *segmentViews;
@property (retain, nonatomic) NSArray *separatorViews;
@property (retain, nonatomic) NSNumber *selectedSegmentIndex;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (nonatomic) struct CGPoint lastTouchLocation;
@property (nonatomic) double accumulatedTouchDistance;
@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (retain, nonatomic) NSNumber *trackingSegmentIndex;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (copy, nonatomic) HUQuickControlStepperViewProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (weak, nonatomic) id <HUQuickControlViewInteractionDelegate> interactionDelegate;

- (id)initWithProfile:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (void)_handleGesture:(id)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)_prepareForTapticFeedback;
- (void)_actuateTapticFeedback;
- (void)_createSegmentAndSeparatorViews;
- (void)_layoutSegmentViews;
- (id)_stepperViewMetricsForControlSize:(unsigned long long)arg1;
- (void)_updateUserInteractionActive:(_Bool)arg1 forFirstTouch:(_Bool)arg2;
- (void)_updateSegmentHighlightedState;
- (_Bool)_shouldRequireMinimumDragDistanceForGestureRecognizer:(id)arg1;

@end
