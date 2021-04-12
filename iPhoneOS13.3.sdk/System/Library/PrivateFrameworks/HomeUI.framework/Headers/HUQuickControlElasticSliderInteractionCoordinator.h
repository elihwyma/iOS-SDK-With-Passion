//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlInteractionCoordinator.h>

#import <HomeUI/HUQuickControlSliderGestureTransformerDelegate-Protocol.h>

@class HUDisplayLinkApplier, HUElasticApplier, HUQuickControlSliderGestureTransformer, HUQuickControlViewProfile, NSDate, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol HUQuickControlIncrementalConvertibleProfile;

@interface HUQuickControlElasticSliderInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlSliderGestureTransformerDelegate, UIGestureRecognizerDelegate>
{
    BOOL _userInteractionActive;
    BOOL _hasSecondaryValue;
    BOOL _firstTouchDown;
    HUQuickControlSliderGestureTransformer *_gestureTransformer;
    UILongPressGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    HUElasticApplier *_primaryValueSmoothingApplier;
    HUElasticApplier *_secondaryValueSmoothingApplier;
    HUDisplayLinkApplier *_controlVerticalStretchingApplier;
    HUElasticApplier *_controlHorizontalCompressionApplier;
    double _activeGestureValue;
    NSUInteger _activeGestureValueType;
    NSDate *_interactableStartTime;
    CDStruct_ef18196a _modelValue;
}

@property(retain, nonatomic) NSDate *interactableStartTime; // @synthesize interactableStartTime=_interactableStartTime;
@property(nonatomic, getter=isFirstTouchDown) BOOL firstTouchDown; // @synthesize firstTouchDown=_firstTouchDown;
@property(nonatomic) CDStruct_c3b9c2ee modelValue; // @synthesize modelValue=_modelValue;
@property(nonatomic) NSUInteger activeGestureValueType; // @synthesize activeGestureValueType=_activeGestureValueType;
@property(nonatomic) double activeGestureValue; // @synthesize activeGestureValue=_activeGestureValue;
@property(retain, nonatomic) HUElasticApplier *controlHorizontalCompressionApplier; // @synthesize controlHorizontalCompressionApplier=_controlHorizontalCompressionApplier;
@property(retain, nonatomic) HUDisplayLinkApplier *controlVerticalStretchingApplier; // @synthesize controlVerticalStretchingApplier=_controlVerticalStretchingApplier;
@property(retain, nonatomic) HUElasticApplier *secondaryValueSmoothingApplier; // @synthesize secondaryValueSmoothingApplier=_secondaryValueSmoothingApplier;
@property(retain, nonatomic) HUElasticApplier *primaryValueSmoothingApplier; // @synthesize primaryValueSmoothingApplier=_primaryValueSmoothingApplier;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) HUQuickControlSliderGestureTransformer *gestureTransformer; // @synthesize gestureTransformer=_gestureTransformer;
@property(nonatomic) BOOL hasSecondaryValue; // @synthesize hasSecondaryValue=_hasSecondaryValue;
@property(nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
// - (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)gestureDidEndForGestureTransformer:(id)arg1;
- (void)gestureTransformer:(id)arg1 sliderValueDidChange:(double)arg2;
- (void)_updatePropertiesForControlValueSmoothingApplier:(id)arg1 ofType:(NSUInteger)arg2;
- (void)_setupStretchingAppliers;
- (id)_setupValueApplierForValueType:(NSUInteger)arg1;
- (void)_setupAllValueAppliersIfNecessary;
- (id)_allAppliers;
- (id)_valueNormalizerWithOptions:(id)arg1;
- (id)_rubberBandingValueNormalizer;
- (double)_rubberBandedStretchProgress;
- (NSUInteger)_findClosestValueFromTouchLocation:(CGPoint)arg1;
- (double)_sliderValueForLocation:(CGPoint)arg1;
- (CDStruct_c3b9c2ee)_rawViewValueRange;
- (void)_beginReceivingTouchesWithGestureRecognizer:(id)arg1 isTouchContinuation:(BOOL)arg2;
- (void)_handleControlTapGesture:(id)arg1;
- (void)_handleControlPanGesture:(id)arg1;
- (void)_updateModelValue:(CDStruct_c3b9c2ee)arg1 roundValue:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_updateControlViewValueOfType:(NSUInteger)arg1 withValue:(double)arg2;
- (void)setViewVisible:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)recordInteractionStart;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile> *viewProfile;
- (void)dealloc;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;

@end

