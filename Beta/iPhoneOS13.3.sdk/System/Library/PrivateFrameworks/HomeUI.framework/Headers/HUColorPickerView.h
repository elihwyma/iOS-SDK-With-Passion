/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUColorWheelView, HUQuickControlColorViewProfile, HUQuickControlMagnifierView, NSString, UILongPressGestureRecognizer;

@protocol HUColorWheelSpace, HUQuickControlColorPickerViewInteractionDelegate;

@interface HUColorPickerView : UIView

{
    _Bool _userInteractionActive;
    id <HUQuickControlColorPickerViewInteractionDelegate> _interactionDelegate;
    HUQuickControlColorViewProfile *_profile;
    unsigned long long _reachabilityState;
    unsigned long long _colorPickerMode;
    double _magnifierLength;
    unsigned long long _mirroringAxisBias;
    HUColorWheelView *_colorWheelView;
    HUQuickControlMagnifierView *_magnifierView;
    UILongPressGestureRecognizer *_gestureRecognizer;
    double _touchDownTimestamp;
    struct {
        double angle;
        double radius;
    } _selectedColorCoordinate;
    struct {
        double r;
        double g;
        double b;
        double temperature;
    } _selectedColor;
}

@property (nonatomic) unsigned long long mirroringAxisBias;
@property (nonatomic, readonly) id <HUColorWheelSpace> colorWheelSpace;
@property (retain, nonatomic) HUColorWheelView *colorWheelView;
@property (retain, nonatomic) HUQuickControlMagnifierView *magnifierView;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (nonatomic) double touchDownTimestamp;
@property (nonatomic) struct CGPoint magnifierLocation;
@property (nonatomic) CDStruct_c3b9c2ee selectedColorCoordinate;
@property (nonatomic) CDStruct_d2b197d1 selectedColor;
@property (nonatomic) unsigned long long colorPickerMode;
@property (nonatomic) double wheelHoleRadius;
@property (nonatomic) double magnifierLength;
@property (copy, nonatomic) HUQuickControlColorViewProfile *profile;
@property (weak, nonatomic) id <HUQuickControlColorPickerViewInteractionDelegate> interactionDelegate;
@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;

- (id)initWithProfile:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)_handleGesture:(id)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (id)_colorWheelSpaceForMode:(unsigned long long)arg1;
- (void)_updateMagnifierPosition;
- (void)_updateMagnifierView;
- (void)_updateMirroringAxisBiasIfNecessary;
- (void)_updateMagnifierTransformForTouchLocation:(struct CGPoint)arg1;
- (void)_setColorPickerMode:(unsigned long long)arg1 notifyDelegate:(_Bool)arg2;
- (void)_applyMirroringAxisBiasToColorWheelSpaceIfNecessary;
- (void)_updateDerivedSelectedColorCoordinate;

@end
