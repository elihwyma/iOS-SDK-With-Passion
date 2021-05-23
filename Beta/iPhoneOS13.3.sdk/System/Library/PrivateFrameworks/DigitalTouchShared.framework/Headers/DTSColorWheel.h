/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <UIKit/UIView.h>

@class UIButton;

@protocol DTSColorWheelDelegate;

@interface DTSColorWheel : UIView

{
    id <DTSColorWheelDelegate> _delegate;
    double _colorWheelRadius;
    double _gradientWidth;
    double _pickerDiameter;
    double _hueRotation;
    double _pickerRotation;
    UIView *_pickerCircle;
    UIButton *_doneButton;
}

@property (weak, nonatomic) id <DTSColorWheelDelegate> delegate;
@property (nonatomic) double colorWheelRadius;
@property (nonatomic) double gradientWidth;
@property (nonatomic) double pickerDiameter;
@property (nonatomic) double hueRotation;
@property (nonatomic) double pickerRotation;
@property (retain, nonatomic) UIView *pickerCircle;
@property (retain, nonatomic) UIButton *doneButton;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)doneButtonTapped:(id)arg1;
- (void)beganTouches:(id)arg1;
- (void)finishedTouches;
- (void)updatePickerPositionForPoint:(struct CGPoint)arg1;
- (id)pickerViewHighlightedColor;
- (void)createDoneButtonWithFrame:(struct CGRect)arg1;

@end
