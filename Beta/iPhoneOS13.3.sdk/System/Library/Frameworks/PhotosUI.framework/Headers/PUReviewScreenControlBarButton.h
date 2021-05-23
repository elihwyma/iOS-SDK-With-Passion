/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface PUReviewScreenControlBarButton : UIButton

{
    _Bool _useCompactSize;
}

@property (nonatomic) _Bool useCompactSize;

- (double)_padding;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (double)_selectedIndicatorAlpha;

@end
