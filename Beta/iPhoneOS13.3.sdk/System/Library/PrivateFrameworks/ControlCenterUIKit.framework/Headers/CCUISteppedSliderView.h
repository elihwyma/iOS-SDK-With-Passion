/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <ControlCenterUIKit/CCUIBaseSliderView.h>

@class NSArray, NSString, UIPanGestureRecognizer, UISelectionFeedbackGenerator, UITapGestureRecognizer;

@interface CCUISteppedSliderView : CCUIBaseSliderView

{
    NSArray *_stepBackgroundViews;
    NSArray *_separatorViews;
    double _startingHeight;
    float _startingValue;
    _Bool _gestureStartedInside;
    _Bool _valueHasBeenAdjustedForSteppedSlider;
    UIPanGestureRecognizer *_valueChangeGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    _Bool _firstStepIsDisabled;
    _Bool _firstStepIsOff;
    unsigned long long _numberOfSteps;
    unsigned long long _step;
}

@property (nonatomic) unsigned long long numberOfSteps;
@property (nonatomic) _Bool firstStepIsDisabled;
@property (nonatomic) _Bool firstStepIsOff;
@property (nonatomic) unsigned long long step;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isContentClippingRequired) _Bool contentClippingRequired;

- (void)setValue:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_handleValueChangeGestureRecognizer:(id)arg1;
- (float)_valueForTouchTranslation:(struct CGPoint)arg1;
- (void)_beginTrackingWithGestureRecognizer:(id)arg1;
- (void)_continueTrackingWithGestureRecognizer:(id)arg1;
- (void)_endTrackingWithGestureRecognizer:(id)arg1;
- (id)topLevelBlockingGestureRecognizers;
- (void)_createStepViewsForNumberOfSteps:(unsigned long long)arg1;
- (void)_handleValueTapGestureRecognizer:(id)arg1;
- (void)setValue:(float)arg1 andUpdateStep:(_Bool)arg2;
- (unsigned long long)_stepFromValue:(float)arg1;
- (float)_valueFromStep:(unsigned long long)arg1;
- (void)_createSeparatorViewsForNumberOfSteps:(unsigned long long)arg1;
- (void)_layoutStepViews;
- (void)_updateStepViewVisibility;
- (id)_createBackgroundViewForStep:(unsigned long long)arg1;
- (id)_createSeparatorView;
- (unsigned long long)_stepFromValue:(float)arg1 avoidCurrentStep:(_Bool)arg2;
- (float)_valueForTouchLocation:(struct CGPoint)arg1;
- (void)_updateStepFromValue:(float)arg1 playHaptic:(_Bool)arg2 toggleCurrentStep:(_Bool)arg3;
- (void)_updateValueForPanGestureRecognizer:(id)arg1 withAbsolutePosition:(_Bool)arg2 forContinuedGesture:(_Bool)arg3;
- (float)_valueForPanGestureRecognizer:(id)arg1 withAbsoluteReference:(_Bool)arg2;
- (void)_updateStepFromValue:(float)arg1 playHaptic:(_Bool)arg2;
- (void)contentModuleWillTransitionToExpandedContentMode:(_Bool)arg1;

@end
