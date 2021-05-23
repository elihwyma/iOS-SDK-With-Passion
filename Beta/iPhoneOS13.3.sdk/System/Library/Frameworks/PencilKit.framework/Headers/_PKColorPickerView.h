/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSString, PKColorMatrixView, PKColorPickerCrosshairView, UIColor, UIPanGestureRecognizer;

@protocol _PKColorPickerViewDelegate;

@interface _PKColorPickerView : UIView

{
    id <_PKColorPickerViewDelegate> _delegate;
    UIColor *_selectedColor;
    UIColor *_initialColor;
    UIPanGestureRecognizer *_crosshairPanGR;
    PKColorPickerCrosshairView *_crosshairView;
    PKColorMatrixView *_gridColorPicker;
}

@property (weak, nonatomic) id <_PKColorPickerViewDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIColor *initialColor;
@property (retain, nonatomic) UIPanGestureRecognizer *crosshairPanGR;
@property (retain, nonatomic) PKColorPickerCrosshairView *crosshairView;
@property (retain, nonatomic) PKColorMatrixView *gridColorPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)colorPickerImplementationDidChangeSelectedColor:(id)arg1;
- (void)colorPickerImplementationUserDidTouchUpInside:(id)arg1;
- (void)didPanCrosshair:(id)arg1;
- (void)_setSelectedColorForPoint:(struct CGPoint)arg1;
- (_Bool)pointIsSignificantlyOutside:(struct CGPoint)arg1;

@end
