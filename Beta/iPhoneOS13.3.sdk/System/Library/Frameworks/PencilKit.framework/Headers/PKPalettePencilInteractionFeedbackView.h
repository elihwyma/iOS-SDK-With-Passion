/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class MTMaterialView, PKPaletteToolPreview;

@interface PKPalettePencilInteractionFeedbackView : UIView

{
    UIView *_clippingView;
    MTMaterialView *_backgroundView;
    PKPaletteToolPreview *_toolPreview;
}

@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (retain, nonatomic) PKPaletteToolPreview *toolPreview;

- (id)init;
- (void)layoutSubviews;
- (void)_setCornerRadius:(double)arg1;
- (void)showPreviewForToolWithInk:(id)arg1 scalingFactor:(double)arg2 animated:(_Bool)arg3;

@end
