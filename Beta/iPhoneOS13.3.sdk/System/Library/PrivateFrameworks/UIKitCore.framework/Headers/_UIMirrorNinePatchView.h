/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _UIMirrorNinePatchView : UIView

{
    UIImage *_originalImage;
    struct UIEdgeInsets _insets;
    UIImageView *_imageViews[4];
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateResizableImageAndViews;
- (void)setImage:(id)arg1 withResizableCornerSize:(struct CGSize)arg2;

@end
