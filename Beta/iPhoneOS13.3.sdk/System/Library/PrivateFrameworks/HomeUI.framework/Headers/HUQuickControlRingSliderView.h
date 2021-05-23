/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUQuickControlRingSliderHandleView, HUQuickControlRingSliderViewProfile, NSMutableArray, NSMutableDictionary, NSString, UIImage, UIImageView, UIImpactFeedbackGenerator, UILabel, UILongPressGestureRecognizer, UISelectionFeedbackGenerator;

@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlRingSliderView : UIView

{
    _Bool _isDraggingPrimaryHandleView;
    _Bool _isDraggingSecondaryHandleView;
    _Bool _didMaskBackgroundImageView;
    _Bool _userInteractionActive;
    _Bool _showOffState;
    HUQuickControlRingSliderViewProfile *_profile;
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;
    unsigned long long _reachabilityState;
    double _supplementaryValue;
    HUQuickControlRingSliderHandleView *_primaryHandleView;
    HUQuickControlRingSliderHandleView *_secondaryHandleView;
    UIView *_backgroundRingView;
    UIView *_edgesAndColoredSupplementaryValueLineView;
    UIImage *_gradientRingImage;
    UIImageView *_selectedRangeImageView;
    UIImageView *_selectedRangeImageViewForEdges;
    double _outerRadius;
    unsigned long long _prevTouchArea;
    UILabel *_supplementaryLabel;
    UILabel *_primaryLabel;
    UIView *_labelsBackgroundView;
    UILongPressGestureRecognizer *_longPressPanGestureRecognizer;
    UIView *_overlappingSupplementaryValueMarkingView;
    UIView *_supplementaryValueMarkingView;
    NSMutableArray *_gradationMarkingViews;
    NSMutableDictionary *_markingValuesAndViewsDictionary;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    double _prevSliderValue;
    unsigned long long _prevSlidingDirection;
    NSMutableArray *_currentDirectionTapticValues;
    CDStruct_ef18196a _modelRangeValue;
}

@property (nonatomic) CDStruct_c3b9c2ee modelRangeValue;
@property (nonatomic) _Bool isDraggingPrimaryHandleView;
@property (nonatomic) _Bool isDraggingSecondaryHandleView;
@property (retain, nonatomic) HUQuickControlRingSliderHandleView *primaryHandleView;
@property (retain, nonatomic) HUQuickControlRingSliderHandleView *secondaryHandleView;
@property (retain, nonatomic) UIView *backgroundRingView;
@property (retain, nonatomic) UIView *edgesAndColoredSupplementaryValueLineView;
@property (retain, nonatomic) UIImage *gradientRingImage;
@property (retain, nonatomic) UIImageView *selectedRangeImageView;
@property (retain, nonatomic) UIImageView *selectedRangeImageViewForEdges;
@property (nonatomic) _Bool didMaskBackgroundImageView;
@property (nonatomic) double outerRadius;
@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (nonatomic) unsigned long long prevTouchArea;
@property (retain, nonatomic) UILabel *supplementaryLabel;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UIView *labelsBackgroundView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressPanGestureRecognizer;
@property (retain, nonatomic) UIView *overlappingSupplementaryValueMarkingView;
@property (retain, nonatomic) UIView *supplementaryValueMarkingView;
@property (retain, nonatomic) NSMutableArray *gradationMarkingViews;
@property (retain, nonatomic) NSMutableDictionary *markingValuesAndViewsDictionary;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (nonatomic) double prevSliderValue;
@property (nonatomic) unsigned long long prevSlidingDirection;
@property (retain, nonatomic) NSMutableArray *currentDirectionTapticValues;
@property (nonatomic) _Bool showOffState;
@property (copy, nonatomic) HUQuickControlRingSliderViewProfile *profile;
@property (nonatomic) double supplementaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (weak, nonatomic) id <HUQuickControlViewInteractionDelegate> interactionDelegate;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithProfile:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)_updateTransform;
- (void)_touchEnded;
- (void)handlePanGestureRecognizer:(id)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)_prepareForTapticFeedback;
- (void)_actuateSelectionTapticFeedback;
- (void)updateSupplementaryLabelWithString:(id)arg1;
- (void)updatePrimaryLabelWithString:(id)arg1 fontSize:(double)arg2;
- (void)_actuateImpactTapticFeedback;
- (double)_getClosestMarkingValueToValue:(double)arg1;
- (void)_updateRingViewAndHandleViews;
- (void)_updateSupplementaryValueLineView;
- (void)_updateModelValue:(CDStruct_c3b9c2ee)arg1 roundValue:(_Bool)arg2 notifyInteractionDelegate:(_Bool)arg3;
- (struct CGPoint)_getHandleCenterOnRingForValue:(double)arg1;
- (double)_getAngleFrom12OClockForValue:(double)arg1;
- (struct CGPoint)_getPointForAngleFrom12OClock:(double)arg1;
- (void)_updateSupplementaryValueLineViewColor;
- (struct CGSize)_getEdgeRectSize;
- (double)_getMiddleCircleRadius;
- (double)_getMaxAngleFrom12OClock;
- (double)_getMinAngleFrom12OClock;
- (double)_getPrimarySliderValue;
- (double)_getSecondarySliderValue;
- (void)_maskBackgroundImageViewToRingShape;
- (struct CGPoint)_getCircleCenterPoint;
- (void)_updatePrimaryHandleViewPositionToSliderValue;
- (void)_updateSecondaryHandleViewPositionToSliderValue;
- (void)_updateSelectedRangeImageView;
- (double)_getInnerCircleRadius;
- (double)_getStartAngleEdgeLocationShiftForBackgroundRing:(_Bool)arg1;
- (double)_getMinimumMarkingValue;
- (double)_getMaximumMarkingValue;
- (void)_updateUIForTouchPoint:(struct CGPoint)arg1 didTouchBegin:(_Bool)arg2 forHandleView:(id)arg3 minValue:(double)arg4 maxValue:(double)arg5;
- (void)_updateUIForThresholdModeForPrimaryHandleViewWithTouchPoint:(struct CGPoint)arg1 didTouchBegin:(_Bool)arg2;
- (void)_updateUIForThresholdModeForSecondaryHandleViewWithTouchPoint:(struct CGPoint)arg1 didTouchBegin:(_Bool)arg2;
- (struct CGPoint)_getClosestPointOnMiddleCircleOfRing:(struct CGPoint)arg1;
- (double)_getAngleFrom12OClockForPoint:(struct CGPoint)arg1;
- (unsigned long long)_getRingSliderAreaForAngleFrom12Oclock:(double)arg1 minAngle:(double)arg2 maxAngle:(double)arg3;
- (void)_animateToEnlargeHandleView:(id)arg1;
- (double)_getSliderValueForPoint:(struct CGPoint)arg1;
- (_Bool)_isIncreasingOrDecreasing:(unsigned long long)arg1;
- (double)_getOneMarkerValueDifference;
- (void)_updateLabelsSize;
- (CDStruct_c3b9c2ee)_getPossibleAngleRange12OClock;
- (unsigned long long)_getRingSliderAreaForAngleFrom12Oclock:(double)arg1;
- (_Bool)_primaryHandleViewContainsPoint:(struct CGPoint)arg1;
- (_Bool)_secondaryHandleViewContainsPoint:(struct CGPoint)arg1;
- (void)_updateUIWithTouchAtPoint:(struct CGPoint)arg1 didTouchBegin:(_Bool)arg2;
- (void)_updateModelValueWithSlidersPositions;
- (void)_updateModelValueWithNewPrimarySliderValue:(double)arg1 roundValue:(_Bool)arg2 notifyInteractionDelegate:(_Bool)arg3;
- (void)_updateModelValueWithNewSecondarySliderValue:(double)arg1 roundValue:(_Bool)arg2 notifyInteractionDelegate:(_Bool)arg3;
- (_Bool)_areHandleViewsAnimating;
- (double)_getSliderValueForAngleFrom12OClock:(double)arg1;
- (_Bool)_isPoint:(struct CGPoint)arg1 withInMarginOfRing:(double)arg2;
- (unsigned long long)_getRingSliderAreaForPoint:(struct CGPoint)arg1;
- (unsigned long long)_getRingSliderAreaForHandleViewForAngleFrom12Oclock:(double)arg1;

@end
