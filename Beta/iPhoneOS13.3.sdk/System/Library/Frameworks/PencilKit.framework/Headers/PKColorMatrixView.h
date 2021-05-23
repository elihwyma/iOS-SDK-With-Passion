/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor;

@protocol _PKColorPickerImplementationDelegate;

@interface PKColorMatrixView : UIView

{
    UIColor *selectedColor;
    id <_PKColorPickerImplementationDelegate> _colorPickerDelegate;
    long long _colorUserInterfaceStyle;
    NSArray *_colorMatrix;
    NSArray *_darkColorMatrix;
    NSArray *_colorButtons;
}

@property (retain, nonatomic) NSArray *colorMatrix;
@property (retain, nonatomic) NSArray *darkColorMatrix;
@property (retain, nonatomic) NSArray *colorButtons;
@property (retain, nonatomic) UIColor *selectedColor;
@property (weak, nonatomic) id <_PKColorPickerImplementationDelegate> colorPickerDelegate;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultColorMatrix;
+ (id)flippedColorMatrix:(id)arg1;
+ (id)_representableColorForColor:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didTapColorButton:(id)arg1;
- (id)_pointFromButton:(id)arg1;
- (id)_colorForPoint:(id)arg1;
- (id)uiColorMatrix;
- (long long)_uiColorUserInterfaceStyle;
- (struct CGRect)_frameForViewWithPoint:(id)arg1;
- (id)_pointForColor:(id)arg1;
- (id)_boundedPointForPoint:(id)arg1;
- (id)_pointForCGPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForColorPickerCrosshairView:(id)arg1;
- (id)colorForColorPickerCrosshairView:(id)arg1 frame:(struct CGRect)arg2;
- (unsigned long long)cornerPositionForColorPickerCrosshairView:(id)arg1;
- (void)colorPickerCrosshairViewShouldUpdateColor:(id)arg1 point:(struct CGPoint)arg2;
- (void)colorPickerCrosshairViewShouldUpdateWithColor:(id)arg1;
- (id)representableColorForColor:(id)arg1;

@end
