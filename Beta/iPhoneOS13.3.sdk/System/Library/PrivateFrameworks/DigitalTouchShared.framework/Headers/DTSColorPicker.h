/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <UIKit/UIView.h>

@class ETPaletteCircleView, NSArray, UIColor, UILongPressGestureRecognizer;

@protocol DTSColorPickerDelegate;

@interface DTSColorPicker : UIView

{
    NSArray *_paletteCircles;
    ETPaletteCircleView *_selectedCircle;
    UILongPressGestureRecognizer *_longPressRecognizer;
    _Bool _dimmed;
    id <DTSColorPickerDelegate> _delegate;
    unsigned long long _colorCircleSize;
}

@property (retain, nonatomic) NSArray *paletteCircles;
@property (retain, nonatomic) ETPaletteCircleView *selectedCircle;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;
@property (weak, nonatomic) id <DTSColorPickerDelegate> delegate;
@property (nonatomic, readonly) UIColor *selectedColor;
@property (nonatomic, getter=isDimmed) _Bool dimmed;
@property (nonatomic) unsigned long long colorCircleSize;
@property (nonatomic, readonly) double colorCircleDiameter;
@property (nonatomic, readonly) double colorCircleHorizontalSpacing;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didReceiveLongPress:(id)arg1;
- (void)paletteCircleTapped:(id)arg1;
- (void)selectCircle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showColorWheel;
- (void)createPaletteCirclesWithParentView:(id)arg1;

@end
