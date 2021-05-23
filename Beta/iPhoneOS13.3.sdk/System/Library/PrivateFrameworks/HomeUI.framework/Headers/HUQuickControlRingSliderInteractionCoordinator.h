/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlInteractionCoordinator.h>

#import <HomeUI/Swift-Protocol.h>

@class HUQuickControlViewProfile, NSString, UIView;

@protocol HUQuickControlIncrementalConvertibleProfile, HUQuickControlInteractiveView, HUQuickControlRingSliderInteractionCoordinatorDelegate;

@interface HUQuickControlRingSliderInteractionCoordinator : HUQuickControlInteractionCoordinator <Swift>

{
    _Bool _userInteractionActive;
    _Bool _hasSecondaryValue;
    _Bool _firstTouchDown;
    CDStruct_ef18196a _modelRangeValue;
}

@property (nonatomic) CDStruct_c3b9c2ee modelRangeValue;
@property (nonatomic, readonly) HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile> *viewProfile;
@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (nonatomic, getter=isFirstTouchDown) _Bool firstTouchDown;
@property (nonatomic, readonly) UIView<HUQuickControlInteractiveView> *controlView;
@property (nonatomic) _Bool hasSecondaryValue;
@property (weak, nonatomic) id <HUQuickControlRingSliderInteractionCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)value;
- (void)setValue:(id)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)controlView:(id)arg1 interactionStateDidChange:(_Bool)arg2 forFirstTouch:(_Bool)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;
- (void)_updateModelValue:(CDStruct_c3b9c2ee)arg1 roundValue:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
- (void)_updateControlViewValueOfType:(unsigned long long)arg1 withValue:(double)arg2;

@end
