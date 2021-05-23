/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class PKPaletteToolPickerArrowIndicatorView;

@interface PKPaletteToolPickerOverlayView : UIView

{
    PKPaletteToolPickerArrowIndicatorView *_firstArrowView;
    PKPaletteToolPickerArrowIndicatorView *_secondArrowView;
}

@property (retain, nonatomic) PKPaletteToolPickerArrowIndicatorView *firstArrowView;
@property (retain, nonatomic) PKPaletteToolPickerArrowIndicatorView *secondArrowView;

- (id)initWithFrame:(struct CGRect)arg1;

@end
