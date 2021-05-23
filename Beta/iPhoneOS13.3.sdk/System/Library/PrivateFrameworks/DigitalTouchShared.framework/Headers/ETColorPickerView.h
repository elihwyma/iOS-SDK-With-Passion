/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <DigitalTouchShared/DTSColorPicker.h>

@class ETColorWheelView, ETPaletteCircleView, NSString, UITapGestureRecognizer, UIView;

@protocol ETColorPickerViewDelegate;

@interface ETColorPickerView : DTSColorPicker

{
    UIView *_contentView;
    ETPaletteCircleView *_collapsedSelectedCircle;
    UITapGestureRecognizer *_presentTapGestureRecognizer;
    struct CGRect _expandedFrame;
    struct CGRect _collapsedFrame;
    ETColorWheelView *_colorWheelView;
    _Bool _dismissingColorPicker;
    double _selectedCircleRotationAngle;
    _Bool _isExpanded;
    id <ETColorPickerViewDelegate> _presentationDelegate;
}

@property (nonatomic) _Bool isExpanded;
@property (weak, nonatomic) id <ETColorPickerViewDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDimmed:(_Bool)arg1;
- (void)paletteCircleTapped:(id)arg1;
- (void)showColorWheel;
- (void)presentTapReceived:(id)arg1;
- (void)layoutPaletteCircles;
- (void)_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isCenterCircle:(unsigned long long)arg1;
- (void)_addRotationAnimationFromAngle:(double)arg1 toAngle:(double)arg2;
- (void)animateToGray;
- (void)animateToSelectedColor;
- (void)fadeoutPaletterCirclesInPairs;
- (void)transformSelectionMarkerToPickerCircleWithCompletion:(CDUnknownBlockType)arg1;
- (void)movePaletteCircleTowardsViewCenter:(id)arg1 distance:(double)arg2;
- (void)movePalettCircleToOriginalLayoutPosition:(id)arg1;
- (id)paletteCircleAnimationPairs;
- (void)fadeoutPaletteCircle:(id)arg1 delay:(double)arg2;
- (void)fadeinPaletteCircle:(id)arg1 delay:(double)arg2;
- (void)fadeinPaletterCirclesInPairs;
- (void)transformPickerCircleToSelectionMarkerWithCompletion:(CDUnknownBlockType)arg1;
- (void)colorWheel:(id)arg1 willPickColor:(id)arg2;
- (void)colorWheel:(id)arg1 didPickColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collapsedFrame:(struct CGRect)arg2;
- (void)animateOffscreen;
- (void)animateOnscreen;

@end
