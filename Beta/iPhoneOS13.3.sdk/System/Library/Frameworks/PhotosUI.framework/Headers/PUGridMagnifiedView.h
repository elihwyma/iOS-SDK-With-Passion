/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSIndexPath, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface PUGridMagnifiedView : UIView

{
    UIImageView *_imageView;
    NSIndexPath *_itemIndexPath;
    UIImage *_itemImage;
    struct CGSize _magnifiedImageSize;
    struct UIEdgeInsets _magnifiedDragEdgeInsets;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGSize magnifiedImageSize;
@property (retain, nonatomic) NSIndexPath *itemIndexPath;
@property (retain, nonatomic) UIImage *itemImage;
@property (nonatomic) struct UIEdgeInsets magnifiedDragEdgeInsets;

- (void)setShadowRadius:(double)arg1;
- (void)setShadowOffset:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)magnifyFromImageFrame:(struct CGRect)arg1 toLocation:(struct CGPoint)arg2 animate:(_Bool)arg3;
- (void)moveToLocation:(struct CGPoint)arg1 animate:(_Bool)arg2;
- (void)setImageAnimate:(_Bool)arg1;
- (void)hideAnimate:(_Bool)arg1;
- (struct CGRect)magnifiedFrameForParentLocation:(struct CGPoint)arg1;
- (struct CGRect)imageWindFrame;
- (struct CGRect)viewFrameForPhotoFrame:(struct CGRect)arg1;
- (struct CGRect)photoFrameForViewFrame:(struct CGRect)arg1;
- (struct CGRect)pinFrameToParentFrame:(struct CGRect)arg1;

@end
