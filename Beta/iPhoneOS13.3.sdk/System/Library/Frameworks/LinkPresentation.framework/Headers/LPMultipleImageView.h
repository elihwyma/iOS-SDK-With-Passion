/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@class LPImageViewStyle, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPMultipleImageView

{
    NSArray *_images;
    LPImageViewStyle *_style;
    NSMutableArray *_imageViews;
}

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutComponentView;
- (struct CGSize)_availableSizeForImageNumber:(unsigned long long)arg1 withLayout:(unsigned long long)arg2 withinSize:(struct CGSize)arg3;
- (struct CGRect)_computeRectForImageAtIndex:(unsigned long long)arg1 fittingSize:(struct CGSize *)arg2 width:(double *)arg3 height:(double *)arg4 size:(struct CGSize)arg5 multipleImageLayout:(unsigned long long)arg6;
- (struct CGSize)_layoutImagesForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;
- (id)initWithImages:(id)arg1 style:(id)arg2;
- (void)componentViewDidMoveToWindow;

@end
