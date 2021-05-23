/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@class LPImageViewStyle, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPImageStackView

{
    NSArray *_images;
    LPImageViewStyle *_style;
    NSMutableArray *_imageViews;
}

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutComponentView;
- (struct CGSize)_layoutImagesForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;
- (id)initWithImages:(id)arg1 style:(id)arg2;
- (void)componentViewDidMoveToWindow;

@end
