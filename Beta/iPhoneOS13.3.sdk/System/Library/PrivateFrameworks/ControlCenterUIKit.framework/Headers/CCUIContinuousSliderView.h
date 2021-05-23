/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <ControlCenterUIKit/CCUIBaseSliderView.h>

@class NSString, UIPanGestureRecognizer, UIView, _UIEdgeFeedbackGenerator;

@interface CCUIContinuousSliderView : CCUIBaseSliderView

{
    UIView *_valueIndicatorClippingView;
    UIView *_backgroundView;
    double _startingLength;
    float _startingValue;
    _Bool _gestureStartedInside;
    UIPanGestureRecognizer *_valueChangeGestureRecognizer;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    int _axis;
    double _continuousSliderCornerRadius;
}

@property (nonatomic) double continuousSliderCornerRadius;
@property (nonatomic) int axis;
@property (nonatomic, readonly) UIView *valueIndicatorClippingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_handleValueChangeGestureRecognizer:(id)arg1;
- (double)sliderLengthForValue:(float)arg1;
- (float)filteredValueForValue:(float)arg1;
- (float)_valueForTouchTranslation:(struct CGPoint)arg1;
- (void)_beginTrackingWithGestureRecognizer:(id)arg1;
- (void)_continueTrackingWithGestureRecognizer:(id)arg1;
- (void)_endTrackingWithGestureRecognizer:(id)arg1;
- (void)_updateValueForPanGestureRecognizer:(id)arg1 forContinuedGesture:(_Bool)arg2;
- (struct CGPoint)glyphCenter;
- (id)topLevelBlockingGestureRecognizers;

@end
