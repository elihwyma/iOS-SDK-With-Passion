/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlInteractionCoordinator.h>

@class HUDisplayLinkApplier, HUElasticApplier, HUQuickControlSliderGestureTransformer, HUQuickControlViewProfile, NSDate, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@protocol HUQuickControlIncrementalConvertibleProfile;

@interface HUQuickControlElasticSliderInteractionCoordinator : HUQuickControlInteractionCoordinator

{
    _Bool _userInteractionActive;
    _Bool _hasSecondaryValue;
    _Bool _firstTouchDown;
    HUQuickControlSliderGestureTransformer *_gestureTransformer;
    UILongPressGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    HUElasticApplier *_primaryValueSmoothingApplier;
    HUElasticApplier *_secondaryValueSmoothingApplier;
    HUDisplayLinkApplier *_controlVerticalStretchingApplier;
    HUElasticApplier *_controlHorizontalCompressionApplier;
    double _activeGestureValue;
    unsigned long long _activeGestureValueType;
    NSDate *_interactableStartTime;
    CDStruct_ef18196a _modelValue;
}

@property (retain, nonatomic) HUQuickControlSliderGestureTransformer *gestureTransformer;
@property (retain, nonatomic) UILongPressGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) HUElasticApplier *primaryValueSmoothingApplier;
@property (retain, nonatomic) HUElasticApplier *secondaryValueSmoothingApplier;
@property (retain, nonatomic) HUDisplayLinkApplier *controlVerticalStretchingApplier;
@property (retain, nonatomic) HUElasticApplier *controlHorizontalCompressionApplier;
@property (nonatomic) double activeGestureValue;
@property (nonatomic) unsigned long long activeGestureValueType;
@property (nonatomic) CDStruct_c3b9c2ee modelValue;
@property (nonatomic, readonly) HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile> *viewProfile;
@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (nonatomic, getter=isFirstTouchDown) _Bool firstTouchDown;
@property (retain, nonatomic) NSDate *interactableStartTime;
@property (nonatomic) _Bool hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)value;
- (void)setValue:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)setViewVisible:(_Bool)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;
- (void)recordInteractionStart;
- (void)_updateModelValue:(CDStruct_c3b9c2ee)arg1 roundValue:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
- (void)_updateControlViewValueOfType:(unsigned long long)arg1 withValue:(double)arg2;
- (void)_handleControlPanGesture:(id)arg1;
- (void)_handleControlTapGesture:(id)arg1;
- (id)_allAppliers;
- (void)_beginReceivingTouchesWithGestureRecognizer:(id)arg1 isTouchContinuation:(_Bool)arg2;
- (id)_valueNormalizerWithOptions:(id)arg1;
- (void)_setupAllValueAppliersIfNecessary;
- (void)_updatePropertiesForControlValueSmoothingApplier:(id)arg1 ofType:(unsigned long long)arg2;
- (unsigned long long)_findClosestValueFromTouchLocation:(struct CGPoint)arg1;
- (double)_sliderValueForLocation:(struct CGPoint)arg1;
- (id)_rubberBandingValueNormalizer;
- (id)_setupValueApplierForValueType:(unsigned long long)arg1;
- (void)_setupStretchingAppliers;
- (CDStruct_c3b9c2ee)_rawViewValueRange;
- (double)_rubberBandedStretchProgress;
- (void)gestureTransformer:(id)arg1 sliderValueDidChange:(double)arg2;
- (void)gestureDidEndForGestureTransformer:(id)arg1;

@end
