/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <DigitalTouchShared/DTSColorWheel.h>

@class ETColorGradientView, UIColor;

@interface ETColorWheelView : DTSColorWheel

{
    ETColorGradientView *_gradientView;
    double _originalRotation;
    double _originalPickerRotation;
    _Bool _handlingTouches;
    UIColor *_selectedColor;
}

@property (nonatomic, readonly) UIColor *selectedColor;

+ (double)colorWheelWidth;
+ (double)pickerDiameter;
+ (double)pickerWidth;
+ (struct CGColor *)pickerBorderColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)hideColorWheelPickingColor:(_Bool)arg1;
- (void)showColorWheelFromPaletteCircle:(id)arg1 rotation:(double)arg2;
- (double)pickerDiameter;
- (void)beganTouches:(id)arg1;
- (void)finishedTouches;
- (double)colorWheelRadius;
- (double)gradientWidth;
- (id)pickerViewHighlightedColor;
- (void)hideDoneButton;
- (void)addPickerCircleForPaletteCircle:(id)arg1;
- (void)showDoneButtonAnimated;
- (_Bool)pickerShouldDismissClockwise;
- (void)hideDoneButtonAnimated;
- (void)animatePickerToOriginalPosition;
- (double)colorWheelDismissalRotation;

@end
